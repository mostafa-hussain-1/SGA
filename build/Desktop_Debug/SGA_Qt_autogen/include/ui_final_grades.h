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
"QComboBox QAbstractItemView {\n"
"    background-color: #1e1e1e; /* \331\204\331\210\331\206 \330\256\331\204\331\201\331\212\330\251 \330\247\331\204\331\202\330\247\331\212\331\205\330\251 */\n"
"    color: white; /* \331\204\331\210\331\206 \330\247\331\204\331\203\331\204\330\247\331\205 \330\247\331\204\330\271\330\247\330\257\331\212 */\n"
"    \n"
"    /* \330\257"
                        "\331\207 \330\247\331\204\330\263\330\267\330\261 \330\247\331\204\330\263\330\255\330\261\331\212 \330\247\331\204\331\204\331\212 \330\250\331\212\330\271\331\205\331\204 \330\247\331\204\331\204\331\210\331\206 \330\247\331\204\331\205\330\250\331\207\330\254 \331\204\331\205\330\247 \330\252\331\202\331\201 \330\250\330\247\331\204\331\205\330\247\331\210\330\263 */\n"
"    selection-background-color: #0078D7; /* \330\247\331\204\331\204\331\210\331\206 \330\247\331\204\330\243\330\262\330\261\331\202 \330\250\330\252\330\247\330\271 \330\247\331\204\331\210\331\212\331\206\330\257\331\210\330\262 \330\247\331\204\330\243\330\265\331\204\331\212 */\n"
"    selection-color: white; /* \331\204\331\210\331\206 \330\247\331\204\331\203\331\204\330\247\331\205 \330\254\331\210\331\207 \330\247\331\204\330\252\330\255\330\257\331\212\330\257 */\n"
"    \n"
"    outline: none; /* \330\271\330\264\330\247\331\206 \331\206\331\204\330\272\331\212 \330\247\331\204\331\205\330\261\330\250\330\271 \330\247\331\204\331"
                        "\205\331\206\331\202\330\267 \330\247\331\204\331\202\330\257\331\212\331\205 */\n"
"}\n"
"\n"
"/* \331\204\331\210 \330\255\330\247\330\250\330\250 \330\252\330\257\331\212 \330\252\330\243\330\253\331\212\330\261 \331\203\331\205\330\247\331\206 \331\204\331\204\331\200 Item \331\206\331\201\330\263\331\207 \331\204\331\205\330\247 \330\252\331\205\330\264\331\212 \330\271\331\204\331\212\331\207 \330\250\330\247\331\204\331\205\330\247\331\210\330\263 */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    background-color: #005a9e; /* \330\257\330\261\330\254\330\251 \330\243\330\262\330\261\331\202 \330\243\330\272\331\205\331\202 \330\264\331\210\331\212\330\251 \331\204\331\204\331\200 Hover */\n"
"    color: white;\n"
"}"));
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
        final_grades->setWindowTitle(QCoreApplication::translate("final_grades", "Submit Grades", nullptr));
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
