/********************************************************************************
** Form generated from reading UI file 'final_grades.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINAL_GRADES_H
#define UI_FINAL_GRADES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_final_grades
{
public:
    QScrollArea *scrollArea;
    QWidget *final_grades_panel;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *final_grades)
    {
        if (final_grades->objectName().isEmpty())
            final_grades->setObjectName("final_grades");
        final_grades->resize(410, 512);
        final_grades->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: #FFFFFF;\n"
"\n"
"font-size: 18px;\n"
"\n"
"font-weight: bold;\n"
"\n"
"background: transparent;\n"
"\n"
"border: none;\n"
"}\n"
"QLabel[label_case=\"title\"]{\n"
"color: #00FF66; /* \330\243\330\256\330\266\330\261 \331\206\331\212\331\210\331\206 \\*/\n"
"\n"
"font-size: 28px; /* \330\256\330\267 \331\203\330\250\331\212\330\261 \\*/\n"
"\n"
"font-weight: bold;\n"
"}\n"
"QPushButton {\n"
"    background-color: #05C46B;\n"
"    color: #121212;\n"
"    border-radius: 12px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"    font-size: 18px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #33FF88;\n"
"}\n"
""));
        scrollArea = new QScrollArea(final_grades);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 60, 371, 381));
        scrollArea->setWidgetResizable(true);
        final_grades_panel = new QWidget();
        final_grades_panel->setObjectName("final_grades_panel");
        final_grades_panel->setGeometry(QRect(0, 0, 369, 379));
        verticalLayout = new QVBoxLayout(final_grades_panel);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea->setWidget(final_grades_panel);
        pushButton = new QPushButton(final_grades);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(95, 460, 221, 35));
        label = new QLabel(final_grades);
        label->setObjectName("label");
        label->setGeometry(QRect(115, 20, 181, 31));
        QWidget::setTabOrder(scrollArea, pushButton);

        retranslateUi(final_grades);

        QMetaObject::connectSlotsByName(final_grades);
    } // setupUi

    void retranslateUi(QDialog *final_grades)
    {
        final_grades->setWindowTitle(QCoreApplication::translate("final_grades", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("final_grades", "Submit", nullptr));
        label->setText(QCoreApplication::translate("final_grades", "Final Grades", nullptr));
        label->setProperty("label_case", QVariant(QCoreApplication::translate("final_grades", "title", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class final_grades: public Ui_final_grades {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINAL_GRADES_H
