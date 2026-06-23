#include <QLabel>
#include <QComboBox>
#include <QHBoxLayout>
#include <QSpacerItem>
#include <QLayoutItem>
#include <QMessageBox>
#include "final_grades.h"
#include "ui_final_grades.h"
#include "sga.h"
#include "semester_progress.h"
#include "mainwindow.h"
#include "dataBase.h"

final_grades::final_grades(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::final_grades)
{
    ui->setupUi(this);
    load();
}

final_grades::~final_grades()
{
    delete ui;
}

void final_grades::load(){

    this->setFixedSize(410, 512);

    QLayout* panelLayout = ui->final_grades_panel->layout();
    if (panelLayout != nullptr) {
        QLayoutItem* item;
        while ((item = panelLayout->takeAt(0)) != nullptr) {
            if (item->widget()) {
                delete item->widget();
            }
            delete item;
        }
    }

    for (int i = 0; i < current_semester_courses.size(); i++) {

        QWidget* row_container = new QWidget(ui->final_grades_panel);
        row_container->setMinimumHeight(40);

        QHBoxLayout* row_layout = new QHBoxLayout(row_container);
        row_layout->setContentsMargins(0, 4, 0, 4); // بديل الـ Padding/Margin

        QString courseName = QString::fromStdString(current_semester_courses[i].course_name);
        QLabel* course_label = new QLabel(courseName, row_container);

        course_label->setStyleSheet("color: white; font-family: 'Segoe UI'; font-size: 14pt; font-weight: bold; text-align: left;");

        course_label->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);

        QComboBox* grade_box = new QComboBox(row_container);
        grade_box->setFixedSize(110, 25);
        grade_box->setStyleSheet("font-family: 'Segoe UI'; font-size: 10pt;");

        for (int i = 0; i < grade_scale.size(); i++) {
            grade_box->addItem(toQString(grade_scale[i]));
        }
        grade_box->setCurrentIndex(0);

        row_layout->addWidget(course_label);
        row_layout->addWidget(grade_box);

        ui->final_grades_panel->layout()->addWidget(row_container);
    }

    QSpacerItem* spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
    ui->final_grades_panel->layout()->addItem(spacer);
}
void final_grades::on_pushButton_clicked()
{
    course c;
    int current_semester = 0;

    double targeted_points = 0;
    double gained_points = 0;

    for (int i = 0; i < courses.size(); i++) {
        if (courses[i].semester > current_semester) {
            current_semester = courses[i].semester;
        }
    }
    current_semester++;

    QLayout* panelLayout = ui->final_grades_panel->layout();

    for (int i = 0; i < current_semester_courses.size(); i++) {
        c.code = current_semester_courses[i].course_code;
        c.name = current_semester_courses[i].course_name;
        c.credit_hours = current_semester_courses[i].credit_hours;
        c.count_in_gpa = true;

        QLayoutItem* item = panelLayout->itemAt(i);
        if (item && item->widget()) {
            QWidget* row_container = item->widget();

            QComboBox* grade_box = row_container->findChild<QComboBox*>();
            if (grade_box) {
                QString selected_grade = grade_box->currentText();

                if (selected_grade.isEmpty() || selected_grade == "Choose") {
                    QString courseName = QString::fromStdString(current_semester_courses[i].course_name);
                    QMessageBox::warning(this, "بيانات ناقصة", QString("نسيت تختار تقدير لمادة (%1)! ظبط التقديرات كلها عشان نرحل الترم على نضافة ✌️").arg(courseName));
                    return;
                }

                c.grade = selected_grade.toStdString();
            }
        }

        c.is_latest_version = true;
        c.points = get_points(c.grade);
        c.semester = current_semester;

        targeted_points += (current_semester_courses[i].credit_hours * current_semester_courses[i].points);
        gained_points += (c.credit_hours * c.points);

        for (int i = 0; i < courses.size(); i++) {
            if (courses[i].code == c.code) {
                courses[i].is_latest_version = false;
                break;
            }
        }

        courses.push_back(c);
    }

    current_semester_courses.clear();

    double progress_percentage = 0.0;
    if (targeted_points > 0) {
        progress_percentage = (gained_points / targeted_points) * 100.0;
    }

    QString final_message = "";

    if (progress_percentage > 100.0) {
        final_message = QString("إيه الجبروت ده! 👑 التارجت اتدشمل وعدينا الـ %1%.. مجهود جبار ودماغ شغالة صح!").arg(progress_percentage, 0, 'f', 1);
    }
    else if (progress_percentage >= 95.0) {
        final_message = QString("إيه الحلويات دي! 🚀 كسرنا التارجت وجبنا %1%.. عاش بجد، تعبك ومجهودك مرحش هدر!").arg(progress_percentage, 0, 'f', 1);
    }
    else if (progress_percentage >= 75.0) {
        final_message = QString("تحفة والله 👏 الخطة ظبطت بنسبة %1% الترم ده.. خطوة حلوة أوي والترم الجاي هنعلي التارجت ونقفله خالص.").arg(progress_percentage, 0, 'f', 1);
    }
    else {
        final_message = QString("عملت اللي عليك وجبنا %1%.. ولا يهمك خالص، فكك من الأرقام دي دلوقتي، الترم الجاي هنعوض ونكسر الدنيا!").arg(progress_percentage, 0, 'f', 1);
    }

    QMessageBox::information(this, "خلاصة الترم", final_message);

    target_cgpa = 0.000;
    save_all_to_file();

    this->accept();

}

