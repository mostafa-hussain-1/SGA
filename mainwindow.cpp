#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QHeaderView>
#include <QListView>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QChart>
#include <QLineSeries>
#include <QValueAxis>
#include <QBarSet>
#include <QBarSeries>
#include <QBarCategoryAxis>
#include <QStyledItemDelegate>
#include "dash_board.h"
#include "semester_progress.h"
#include "dataBase.h"
#include "final_grades.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    update_dashBoard();
    fixed_properties();
    check_updates();
    update_semester_progress();
}

MainWindow::~MainWindow()
{
    delete ui;
}
// check updates

void MainWindow::onNetworkReply(QNetworkReply *reply)
{
    if (reply->error() != QNetworkReply::NoError) {
        reply->deleteLater();
        return;
    }

    QString response = reply->readAll();

    QStringList lines = response.split("\n", Qt::SkipEmptyParts);

    double current_version = 1.2;
    ui->version->setText("SGA+ v1.2");
    QString message = "";

    for (const QString &line : lines) {
        if (line.startsWith("version=")) {
            double web_version = line.split("=")[1].trimmed().toDouble();
            if (web_version > current_version) {
                ui->updateBtn->show();
                ui->messageLabel->show();
            }
        }
        else if (line.startsWith("update_link=")) {
            download_link = line.split("=")[1].trimmed();
        }
        else if (line.startsWith("message=")) {
            message = line.split("=")[1].trimmed();
            if (!message.isEmpty()) {
                ui->messageLabel->setText(message);
            }
        }
    }

    reply->deleteLater();
}

void MainWindow::check_updates(){
    networkManager = new QNetworkAccessManager(this);
    connect(networkManager, &QNetworkAccessManager::finished, this, &MainWindow::onNetworkReply);
    QString baseUrl = "https://gist.githubusercontent.com/mostafa-hussain-1/08cd751e3f5be0ccb0105b0a022be260/raw/SGA_config.txt";
    networkManager->get(QNetworkRequest(QUrl(baseUrl)));
}

void MainWindow::on_updateBtn_clicked()
{

    if (!download_link.isEmpty()) {
        QDesktopServices::openUrl(QUrl(download_link));
    }
}

// setup settings

void MainWindow::fixed_properties(){

    this->setFixedSize(1289, 817);
    setup_tables_ui();
    setup_validators();
    setup_general_ui();
}

void MainWindow::setup_tables_ui(){
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget->setColumnWidth(0, 150);
    ui->tableWidget->setColumnWidth(1, 250);
    ui->tableWidget->setColumnWidth(2, 100);
    ui->tableWidget->setColumnWidth(3, 90);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);


    ui->registered_courses->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->registered_courses->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->registered_courses->setColumnWidth(0, 150);
    ui->registered_courses->setColumnWidth(1, 250);
    ui->registered_courses->setColumnWidth(2, 100);
    ui->registered_courses->setColumnWidth(3, 90);
    ui->registered_courses->setColumnWidth(4, 110);
    ui->registered_courses->setColumnWidth(5, 70);
    ui->registered_courses->setColumnWidth(6, 50);
    ui->registered_courses->setColumnWidth(7, 80);
    ui->registered_courses->setColumnWidth(8, 70);
    ui->registered_courses->horizontalHeader()->setStretchLastSection(true);
    ui->registered_courses->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->registered_courses->setSelectionMode(QAbstractItemView::SingleSelection);
}

void MainWindow::setup_validators(){
    ui->hours->setValidator(new QIntValidator(1, 1, this));
    QRegularExpression rx_semNumber("^([1-9]|1[0-9]|20)?$");
    QValidator *semNumValidator = new QRegularExpressionValidator(rx_semNumber, this);
    ui->semester->setValidator(semNumValidator);

    ui->hours_2->setValidator(new QIntValidator(1, 1, this));

    QRegularExpression rx_grades("^([0-4]?[0-9](\\.[0-9]{0,2})?|50(\\.0{0,2})?)?$");
    QValidator *gradesValidator = new QRegularExpressionValidator(rx_grades, this);
    ui->practical_line->setValidator(gradesValidator);
    ui->quiz->setValidator(gradesValidator);
    ui->mid_term->setValidator(gradesValidator);
    ui->year_work->setValidator(gradesValidator);

    QRegularExpression rx("^([0-3](\\.[0-9]{0,3})?|4(\\.0{0,3})?)?$");
    QValidator *validator = new QRegularExpressionValidator(rx, this);
    ui->target_textBox->setValidator(validator);


    QRegularExpression rx_text("^[^,]*$");
    QRegularExpressionValidator *commaValidator = new QRegularExpressionValidator(rx_text, this);
    ui->code->setValidator(commaValidator);
    ui->name->setValidator(commaValidator);
    ui->code_2->setValidator(commaValidator);
    ui->name_2->setValidator(commaValidator);
}

void MainWindow::setup_general_ui(){
    ui->grade->setView(new QListView());
    ui->target_grade->setView(new QListView());
    // fill in grade combobox
    ui->grade->clear();
    ui->grade->addItem("Choose...");
    for (int i = 0; i < grade_scale.size(); i++) {
        ui->grade->addItem(toQString(grade_scale[i]));
    }
    ui->target_grade->clear();
    ui->target_grade->addItem("Choose...");
    for (int i = 0; i < grade_scale.size() - 1; i++) {
        ui->target_grade->addItem(toQString(grade_scale[i]));
    }

    ui->glassContainer->setCurrentIndex(0);
    ui->updateBtn->hide();
    ui->messageLabel->hide();

    ui->has_practical->setChecked(false);
    ui->practical_label->hide();
    ui->practical_line->hide();

    ui->tableWidget->setAlternatingRowColors(true);

    ui->progressBar->setRange(0, 100);
    ui->progressBar->setTextVisible(true);

    ui->delete_btn->style()->unpolish(ui->delete_btn);
    ui->delete_btn->style()->polish(ui->delete_btn);

    ui->title_lbl->style()->unpolish(ui->title_lbl);
    ui->title_lbl->style()->polish(ui->title_lbl);
}



// dash board functions

void MainWindow::update_dashBoard() {
    // update capsules
    ui->regist_limit->setText(toQString(to_string(registration_limit())) + " hours");

    ui->academic_level->setText(toQString(academic_level()));
    string token;
    if (academic_alert > 1) token = " alerts";
    else token = " alert";
    ui->academic_alert->setText(toQString(to_string(academic_alert)) + toQString(token));

    QString cgpa = QString::number(calculate_gpa(), 'f', 3);
    ui->cgpa->setText(cgpa);

    ui->achieved_hours->setText(toQString(to_string(total_hours())) + " hours");


    // update table

    ui->tableWidget->setRowCount(0);
    for (int i = 0; i < courses.size(); i++) {
        ui->tableWidget->insertRow(i);

        QString courseCode = toQString(courses[i].code);
        QString courseName = toQString(courses[i].name);
        QString credits = QString::number(courses[i].credit_hours);
        QString grade = toQString(courses[i].grade);
        QString semester = QString::number(courses[i].semester);

        bool latest_version = courses[i].is_latest_version;
        QString statusText = latest_version ? "Included" : "Retake";

        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(courseCode));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(courseName));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(credits));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(grade));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(semester));

        QTableWidgetItem *statusItem = new QTableWidgetItem(statusText);

        if (latest_version) {
            statusItem->setForeground(QBrush(QColor("#00FF66")));
        } else {
            statusItem->setForeground(QBrush(QColor("#A0A0A0")));
        }

        ui->tableWidget->setItem(i, 5, statusItem);
    }


    // update chart
    QChart *chart = new QChart();
    chart->setTheme(QChart::ChartThemeDark);
    chart->legend()->hide();
    chart->setBackgroundBrush(QBrush(QColor("#2A2A2A")));

    QBarSet *sgpaSet = new QBarSet("SGPA");
    sgpaSet->setColor(QColor("#00FF66"));
    QBarSeries *barSeries = new QBarSeries();
    barSeries->append(sgpaSet);

    QLineSeries *cgpaSeries = new QLineSeries();
    QPen linePen(QColor("#00BFFF"));
    linePen.setWidth(3);
    cgpaSeries->setPen(linePen);
    cgpaSeries->setPointsVisible(true);
    cgpaSeries->setMarkerSize(8.0);

    QStringList termsCategories;
    int max_slots = std::max(8, (int)term_gpas.size());

    for (int i = 1; i <= max_slots; i++) {
        termsCategories << QString::number(i);
    }

    for (int i = 0; i < term_gpas.size(); i++) {
        *sgpaSet << term_gpas[i];
        cgpaSeries->append(i, cgpas[i]);
    }

    chart->addSeries(barSeries);
    chart->addSeries(cgpaSeries);

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(termsCategories);
    chart->addAxis(axisX, Qt::AlignBottom);
    barSeries->attachAxis(axisX);
    cgpaSeries->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0.0, 4.0);
    axisY->setLabelFormat("%.2f");
    chart->addAxis(axisY, Qt::AlignLeft);
    barSeries->attachAxis(axisY);
    cgpaSeries->attachAxis(axisY);

    ui->chartWidget->setChart(chart);
    ui->chartWidget->setRenderHint(QPainter::Antialiasing);
}

void MainWindow::clear_dashBoard_inputs() {
    ui->code->clear();
    ui->name->clear();
    ui->hours->clear();
    ui->semester->clear();
    ui->grade->setCurrentIndex(0);
    ui->count_in_gpa->setChecked(false);
}

int selectedIndex;
bool edit = false;


void MainWindow::on_add_button_clicked()
{
    if (ui->code->text().isEmpty() || ui->name->text().isEmpty() || ui->hours->text().isEmpty() || ui->semester->text().isEmpty() || ui->grade->currentIndex() == 0) {
        QMessageBox::warning(this, "بيانات ناقصة", "في بيانات مهمة ناقصة! كمل باقي الخانات الفاضية الأول عشان نعرف نسجل المادة صح 📝");
        return;
    }
    course c;
    c.code = toStdString(ui->code->text());
    c.semester = stoi(toStdString(ui->semester->text()));
    c.name = toStdString(ui->name->text());
    c.credit_hours = stoi(toStdString(ui->hours->text()));
    c.grade = toStdString(ui->grade->currentText());
    c.is_latest_version = true;
    c.count_in_gpa = ui->count_in_gpa->isChecked();


    if (edit) {
        edit_course(c,selectedIndex);
        QMessageBox::information(this, "تم", "تم تعديل بيانات المادة بنجاح ✨");
        edit = false;
    }
    else {
        bool is_added = add_course(c);
        if (!is_added){
            QMessageBox::warning(this, "مادة متكررة", "المادة دي متسجلة في الترم ده قبل كده! لو عايز تغير فيها حاجة، اختارها واعملها تعديل 🔄");
        }
    }
    update_dashBoard();
    clear_dashBoard_inputs();
    save_all_to_file();
}


void MainWindow::on_edit_course_clicked()
{
    int selected_rows_count = ui->tableWidget->selectionModel()->selectedRows().count();
    if (selected_rows_count == 0) {
        QMessageBox::warning(this, "مفيش مادة متحددة", "اختار المادة اللي عايز تعدلها الأول من الجدول 📌");
        return;
    }
    selectedIndex = ui->tableWidget->currentRow();
    course& c = courses[selectedIndex];
    ui->code->setText(toQString(c.code));
    ui->name->setText(toQString(c.name));
    ui->hours->setText(QString::number(c.credit_hours));
    ui->semester->setText(QString::number(c.semester));
    ui->grade->setCurrentText(QString::fromStdString(c.grade));
    ui->count_in_gpa->setChecked(c.count_in_gpa);
    edit = true;
}


void MainWindow::on_delete_btn_clicked()
{
    int selected_rows_count = ui->tableWidget->selectionModel()->selectedRows().count();
    if (selected_rows_count == 0) {
        QMessageBox::warning(this, "مفيش مادة متحددة", "اختار المادة اللي عايز تمسحها الأول من الجدول 🗑️");
        return;
    }
    selectedIndex = ui->tableWidget->currentRow();
    remove_course(selectedIndex);
    QMessageBox::information(this, "تم", "المادة اتمسحت من الجدول بنجاح 🧹");
    update_dashBoard();
    clear_dashBoard_inputs();
    save_all_to_file();
}


// semester progress handeling

void MainWindow::update_semester_progress(){
    // update table
    ui->registered_courses->setRowCount(0);
    int semester_credits = 0;
    for (int i = 0; i < current_semester_courses.size(); i++) {

        ui->registered_courses->insertRow(i);
        semester_credits += current_semester_courses[i].credit_hours;

        QString code = toQString(current_semester_courses[i].course_code);
        QString name = toQString(current_semester_courses[i].course_name);
        QString credits = QString::number(current_semester_courses[i].credit_hours);
        QString grade = toQString(current_semester_courses[i].target_grade);
        QString midterm = QString::number(current_semester_courses[i].midterm);
        QString quiz = QString::number(current_semester_courses[i].quiz);
        QString year_work = QString::number(current_semester_courses[i].year_work);
        QString practical = QString::number(current_semester_courses[i].practical);
        QString needed = QString::number(current_semester_courses[i].required_final_grade);

        ui->registered_courses->setItem(i, 0, new QTableWidgetItem(code));
        ui->registered_courses->setItem(i, 1, new QTableWidgetItem(name));
        ui->registered_courses->setItem(i, 2, new QTableWidgetItem(credits));
        ui->registered_courses->setItem(i, 3, new QTableWidgetItem(grade));
        ui->registered_courses->setItem(i, 4, new QTableWidgetItem(needed));
        ui->registered_courses->setItem(i, 5, new QTableWidgetItem(midterm));
        ui->registered_courses->setItem(i, 6, new QTableWidgetItem(quiz));
        ui->registered_courses->setItem(i, 7, new QTableWidgetItem(year_work));
        ui->registered_courses->setItem(i, 8, new QTableWidgetItem(practical));
    }


    // update progress bar

    QString state;
    double progress_percentage = calculate_semester_progress();
    if (progress_percentage < 60.0) state = "bad";
    else if (progress_percentage >= 60.0 && progress_percentage < 85.0) state = "mid";
    else state = "good";


    ui->progressBar->setProperty("progress_state", state);

    ui->progressBar->style()->unpolish(ui->progressBar);
    ui->progressBar->style()->polish(ui->progressBar);
    ui->progressBar->setValue(progress_percentage);


    // update target and plane status

    double current_CGPA = calculate_gpa();
    int current_hours = total_hours();
    double target_CGPA = target_cgpa;

    double plan_gpa = calculate_plan_gpa();


    if (target_cgpa != 0) ui->target_textBox->setText(QString::number(target_cgpa, 'f', 3));
    else {
        ui->target_textBox->setText("");
        ui->target_sgpa->setText("");

        if (current_semester_courses.empty()) {
            ui->plan_statue->setText("دخل التارجت بتاعك الأول عشان نبدأ نحسب الخطة 🎯");
            ui->planned_gpa->setText("");
        } else {
            ui->plan_statue->setText("المواد اتضافت، ناقص بس تكتب التارجت عشان نقيم الخطة 🔍");
            ui->planned_gpa->setText(QString::number(plan_gpa, 'f', 3));
        }
        return;
    }

    double required_grade = calculate_target(current_CGPA, current_hours, semester_credits, target_CGPA);

    if (plan_gpa == 0 && target_CGPA != 0) {
        ui->plan_statue->setText("التارجت جاهز، ضيف بقى المواد عشان نشوف هنوصله إزاي 📝");
    }
    else if (required_grade > 4.0) {
        ui->plan_statue->setText("حسابياً، التارجت ده صعب ييجي في ترم واحد. جرب تقلل الرقم شوية أو تزود مواد ترفع معاك 💡");
    }
    else if (plan_gpa == required_grade && required_grade != 0) {
        ui->plan_statue->setText("الخطة دي مظبوطة بالمللي على التارجت بتاعك.. توكل على الله ✨");
    }
    else if (plan_gpa > required_grade) {
        ui->plan_statue->setText("ممتاز، الخطة الحالية هتجيب سكور أعلى من التارجت اللي إنت طالبه 🚀");
    }
    else if (plan_gpa < required_grade) {
        ui->plan_statue->setText("قربنا جداً! الخطة محتاجة زقة بسيطة، جرب تعلي التقدير في مادة كمان وهتظبط معاك ⚖️");
    }

    if (current_semester_courses.empty()) {
        ui->planned_gpa->setText("");
    } else {
        ui->target_sgpa->setText(QString::number(required_grade, 'f', 3));
        ui->planned_gpa->setText(QString::number(plan_gpa, 'f', 3));
    }
}

void MainWindow::clear_sem_progress_input(){
    ui->code_2->clear();
    ui->name_2->clear();
    ui->hours_2->clear();
    ui->target_grade->setCurrentIndex(0);
    ui->has_practical->setChecked(false);
    ui->mid_term->clear();
    ui->quiz->clear();
    ui->year_work->clear();
    ui->practical_line->clear();
}

int semester_selectedIndex;
bool semester_edit = false;

void MainWindow::on_add_button_2_clicked()
{
    if (ui->code_2->text().isEmpty() || ui->name_2->text().isEmpty() || ui->hours_2->text().isEmpty() || ui->target_grade->currentIndex() == 0) {
        QMessageBox::warning(this, "بيانات ناقصة", "في بيانات مهمة ناقصة! كمل باقي الخانات الفاضية الأول عشان نعرف نسجل المادة صح 📝");
        return;
    }

    semester_course c;
    c.course_code = toStdString(ui->code_2->text());
    c.course_name = toStdString(ui->name_2->text());
    c.credit_hours = stoi(toStdString(ui->hours_2->text()));
    c.target_grade = toStdString(ui->target_grade->currentText());
    c.has_practical = ui->has_practical->isChecked();


    if (!ui->mid_term->text().isEmpty()) c.midterm = stod(toStdString(ui->mid_term->text()));
    else c.midterm = 0.0;
    if (!ui->quiz->text().isEmpty()) c.quiz = stod(toStdString(ui->quiz->text()));
    else c.quiz = 0.0;
    if (!ui->year_work->text().isEmpty()) c.year_work = stod(toStdString(ui->year_work->text()));
    else c.year_work = 0.0;
    if (!ui->practical_line->text().isEmpty()) c.practical = stod(toStdString(ui->practical_line->text()));
    else c.practical = 0.0;


    CourseStatus status = process_semester_course(c, semester_edit, semester_selectedIndex);

    if (status == CourseStatus::RETAKE_ERROR) {
        QMessageBox::warning(this, "مادة تحسين/إعادة", "خلي بالك، المادة دي متسجلة قبل كده فـ أقصى تقدير مسموح بيه هو B 🎯");
        return;
    }
    else if (status == CourseStatus::DUPLICATE_ERROR) {
        QMessageBox::warning(this, "مادة متكررة", "المادة دي متسجلة في الترم ده قبل كده! 🔄");
        return;
    }

    if (semester_edit) {
        QMessageBox::information(this, "تم", "تم تعديل بيانات المادة بنجاح ✨");
        semester_edit = false;
    }

    update_semester_progress();
    clear_sem_progress_input();
}
void MainWindow::on_edit_course_2_clicked()
{
    QModelIndexList selectedRows = ui->registered_courses->selectionModel()->selectedRows();
    if (selectedRows.isEmpty()) {
        QMessageBox::warning(this, "مفيش مادة متحددة", "اختار المادة اللي عايز تعدلها الأول من الجدول 📌");
        return;
    }
    semester_selectedIndex = selectedRows.first().row();

    semester_course& c = current_semester_courses[semester_selectedIndex];
    ui->code_2->setText(QString::fromStdString(c.course_code));
    ui->name_2->setText(QString::fromStdString(c.course_name));
    ui->hours_2->setText(QString::number(c.credit_hours));
    ui->target_grade->setCurrentText(QString::fromStdString(c.target_grade));

    ui->has_practical->setChecked(c.has_practical);
    ui->practical_label->setVisible(c.has_practical);
    ui->practical_line->setVisible(c.has_practical);

    ui->mid_term->setText((c.midterm != 0.0) ? QString::number(c.midterm) : "");
    ui->quiz->setText((c.quiz != 0.0) ? QString::number(c.quiz) : "");
    ui->year_work->setText((c.year_work != 0.0) ? QString::number(c.year_work) : "");
    ui->practical_line->setText((c.practical != 0.0) ? QString::number(c.practical) : "");

    semester_edit = true;
}
void MainWindow::on_delete_btn_2_clicked()
{
    QModelIndexList selectedRows = ui->registered_courses->selectionModel()->selectedRows();
    if (selectedRows.isEmpty()) {
        QMessageBox::warning(this, "مفيش مادة متحددة", "اختار المادة اللي عايز تمسحها الأول من الجدول 🗑️");
        return;
    }
    int selectedIndex = selectedRows.first().row();
    remove_semester_course(selectedIndex);
    QMessageBox::information(this, "تم", "المادة اتمسحت من الجدول بنجاح 🧹");
    update_semester_progress();
    clear_sem_progress_input();
    save_all_to_file();
}
void MainWindow::on_has_practical_toggled(bool checked)
{
    ui->practical_label->setVisible(checked);
    ui->practical_line->setVisible(checked);
}
void MainWindow::on_submit_clicked()
{
    if (current_semester_courses.empty()) {
        QMessageBox::warning(this, "الترم فاضي", "مفيش أي مواد متسجلة في الترم ده عشان تترحل.. ضيف موادك الأول 🤷‍♂️");
        return;
    }
    final_grades grades_form(this);
    grades_form.exec();

    update_dashboard();
    update_dashBoard();
    update_semester_progress();
}
void MainWindow::on_target_textBox_editingFinished()
{
    if (ui->target_textBox->text().isEmpty()) {
        ui->plan_statue->setText("دخل التارجت بتاعك الأول عشان نبدأ نحسب الخطة 🎯");
        return;
    }
    if (stod(toStdString(ui->target_textBox->text())) < stod(toStdString(ui->cgpa->text()))) {
        QMessageBox::warning(this, "تارجت مش منطقي", "التارجت اللي كتبته أقل من الـ GPA بتاعك دلوقتي! إحنا بنعمل خطة عشان نعلى مش ننزل، ظبط الرقم 🚀");
        ui->target_textBox->text().clear();
        ui->target_sgpa->text().clear();
        ui->plan_statue->text().clear();
        return;
    }
    target_cgpa = stod(toStdString(ui->target_textBox->text()));
    update_semester_progress();
}



// navigation bar

void MainWindow::on_dashboard_clicked()
{
    ui->glassContainer->setCurrentIndex(0);

}
void MainWindow::on_current_semester_clicked()
{
    ui->glassContainer->setCurrentIndex(1);
}
void MainWindow::on_about_clicked()
{
    ui->glassContainer->setCurrentIndex(2);
}


// about
void MainWindow::on_linkedin_clicked()
{
    QString linkedin = "www.linkedin.com/in/mustafa-elqady";
    QDesktopServices::openUrl(QUrl(linkedin));
}
void MainWindow::on_github_clicked()
{
    QString github = "https://github.com/mostafa-hussain-1";
    QDesktopServices::openUrl(QUrl(github));
}
void MainWindow::on_complaints_clicked()
{
    QString form = "https://docs.google.com/forms/d/e/1FAIpQLSen9Q5RbkHqKpQbfR1toD6z2DVqfTSOT6-c_vw8PSLZO-IIQQ/viewform";
    QDesktopServices::openUrl(QUrl(form));
}
