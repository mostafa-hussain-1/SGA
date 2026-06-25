/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *head_lbl;
    QPushButton *dashboard;
    QPushButton *about;
    QPushButton *current_semester;
    QFrame *frame_1;
    QLabel *label_4;
    QLabel *academic_alert;
    QLabel *label_9;
    QFrame *frame_2;
    QLabel *label_3;
    QLabel *label_11;
    QLabel *cgpa;
    QFrame *frame_3;
    QLabel *label_2;
    QLabel *academic_level;
    QLabel *achieved_hours;
    QLabel *label_7;
    QFrame *frame_4;
    QLabel *label;
    QLabel *regist_limit;
    QLabel *label_8;
    QStackedWidget *glassContainer;
    QWidget *page;
    QFrame *frame_5;
    QLabel *title_lbl;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *add_button;
    QCheckBox *count_in_gpa;
    QLineEdit *code;
    QLineEdit *semester;
    QLineEdit *hours;
    QLineEdit *name;
    QComboBox *grade;
    QFrame *frame_6;
    QTableWidget *tableWidget;
    QPushButton *delete_btn;
    QPushButton *edit_course;
    QLabel *label_5;
    QChartView *chartWidget;
    QLabel *messageLabel;
    QPushButton *updateBtn;
    QWidget *page_3;
    QFrame *frame_7;
    QLabel *title_lbl_2;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QPushButton *add_button_2;
    QCheckBox *has_practical;
    QLineEdit *code_2;
    QLineEdit *quiz;
    QLineEdit *hours_2;
    QLineEdit *name_2;
    QLabel *practical_label;
    QLineEdit *practical_line;
    QLabel *label_24;
    QLineEdit *year_work;
    QLabel *label_25;
    QLineEdit *mid_term;
    QComboBox *target_grade;
    QFrame *frame_8;
    QTableWidget *registered_courses;
    QPushButton *delete_btn_2;
    QPushButton *edit_course_2;
    QLabel *label_6;
    QPushButton *submit;
    QFrame *frame_9;
    QLabel *regist_limit_2;
    QLineEdit *target_textBox;
    QLabel *regist_limit_3;
    QLabel *regist_limit_4;
    QLabel *target_sgpa;
    QLabel *planned_gpa;
    QFrame *frame_10;
    QProgressBar *progressBar;
    QLabel *label_10;
    QLabel *plan_statue;
    QLabel *label_12;
    QWidget *page_2;
    QPushButton *complaints;
    QPushButton *linkedin;
    QLabel *label_23;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *about_message;
    QPushButton *github;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1289, 817);
        MainWindow->setAcceptDrops(true);
        MainWindow->setStyleSheet(QString::fromUtf8("/* 1. \330\247\331\204\331\202\330\247\330\271\330\257\330\251 \330\247\331\204\330\271\330\247\331\205\330\251 (\330\247\331\204\330\256\331\204\331\201\331\212\330\251 \331\210\330\247\331\204\330\243\330\263\330\247\330\263\331\212\330\247\330\252) */\n"
"QMainWindow {\n"
"    background-color: #121212;\n"
"}\n"
"\n"
"/* \330\263\330\252\330\247\331\212\331\204 \330\247\331\204\331\200 Frames \330\247\331\204\331\207\330\247\330\257\331\212 (\330\247\331\204\331\204\331\212 \331\205\330\256\330\257\330\252\330\264 \331\203\331\204\330\247\330\263 \331\206\331\212\331\210\331\206) */\n"
"QFrame {\n"
"    background-color: #1E1E1E;\n"
"    border: 1px solid #2D2D2D;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"/* 2. \330\263\330\252\330\247\331\212\331\204 \330\247\331\204\331\206\331\212\331\210\331\206 \330\247\331\204\331\205\330\256\330\265\330\265 (\330\247\330\263\330\252\330\256\330\257\331\205\331\207 \331\204\330\243\331\212 Frame \330\271\330\247\331\212\330\262 \330\252\330\270\331\207\330\261\331\207"
                        "\330\214 \330\255\330\267 \331\201\331\212 \330\247\331\204\331\200 StyleSheet \330\250\330\252\330\247\330\271\331\207: .neon_frame) */\n"
"QFrame[style_type=\"neon\"] {\n"
"    background-color: #252525;\n"
"    border: 2px solid #00FF66;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"\n"
"/* 3. \330\247\331\204\331\206\330\265\331\210\330\265 */\n"
"QLabel {\n"
"    color: #FFFFFF;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    background: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QLabel[label_case=\"title\"]{\n"
"    color: #00FF66; /* \330\243\330\256\330\266\330\261 \331\206\331\212\331\210\331\206 */\n"
"    font-size: 20px; /* \330\256\330\267 \331\203\330\250\331\212\330\261 */\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QLabel[label_case = \"head\"]{\n"
"    color: #FFFFFF;\n"
"    font-size: 30px;\n"
"    font-weight: bold;\n"
"    background: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QLabel[label_case = \"icon\"]{\n"
"    color: #FFFFFF;\n"
"    font-size: 30px;\n"
"    font"
                        "-weight: bold;\n"
"    background: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QLabel[style_type = \"about\"] {\n"
"    color: #FFFFFF;\n"
"    font-size: 17px;\n"
"    font-weight: bold;\n"
"    background: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"/* 4. \330\247\331\204\330\262\330\261\330\247\331\212\330\261 */\n"
"QPushButton {\n"
"    background-color: #05C46B;\n"
"    color: #121212;\n"
"    border-radius: 12px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #33FF88;\n"
"}\n"
"\n"
"QPushButton[style_type=\"delete\"]{\n"
"    background-color: #FF4757;\n"
"    color: white;\n"
"}\n"
"QPushButton[case=\"social_media\"]{\n"
"    background-color: transparent;\n"
"    color: white;\n"
"}\n"
"QPushButton[style_type=\"delete\"]:hover {\n"
"    background-color: #FF5555;\n"
"}\n"
"\n"
"/* \330\247\331\204\330\255\330\247\331\204\330\251 \330\247\331\204\330\247\331\201\330\252\330\261\330\247\330\266\331\212"
                        "\330\251 \331\204\331\204\330\262\330\261\330\247\330\261 */\n"
"QPushButton#updateBtn {\n"
"    /* \330\252\330\257\330\261\330\254 \331\204\331\210\331\206\331\212 \331\205\331\206 \330\247\331\204\330\250\330\261\330\252\331\202\330\247\331\204\331\212 \330\247\331\204\330\272\330\247\331\205\331\202 \331\204\331\204\330\250\330\261\330\252\331\202\330\247\331\204\331\212 \330\247\331\204\331\201\330\247\330\252\330\255/\330\247\331\204\330\260\331\207\330\250\331\212 */\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                                stop: 0 #FF7A00, stop: 1 #FF9D00);\n"
"    color: #FFFFFF;\n"
"    font-weight: bold;\n"
"    font-size: 20px;\n"
"    border-radius: 8px; /* \330\255\331\210\330\247\331\201 \331\206\330\247\330\271\331\205\330\251 */\n"
"    border: 1px solid #FF9D00;\n"
"    padding: 6px 15px;\n"
"}\n"
"\n"
"/* \331\204\331\205\330\247 \330\247\331\204\331\205\330\247\331\210\330\263 \331\212\330\261\331\210\330\255 \330\271\331\204\331\212\331\207 (\330\245"
                        "\330\255\330\263\330\247\330\263 \330\247\331\204\331\210\331\207\330\254 \330\243\331\210 \330\247\331\204\331\200 Glow) */\n"
"QPushButton#updateBtn:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, \n"
"                                stop: 0 #FF9D00, stop: 1 #FFB732);\n"
"    border: 1px solid #FFE066; /* \330\252\330\255\330\257\331\212\330\257 \330\243\331\201\330\252\330\255 \330\271\330\264\330\247\331\206 \331\212\331\206\331\210\330\261 */\n"
"}\n"
"\n"
"/* \331\204\331\205\330\247 \330\247\331\204\331\212\331\210\330\262\330\261 \331\212\330\257\331\210\330\263 \330\271\331\204\331\212\331\207 */\n"
"QPushButton#updateBtn:pressed {\n"
"    background: #E66A00; /* \331\204\331\210\331\206 \330\250\330\261\330\252\331\202\330\247\331\204\331\212 \331\205\330\267\331\201\331\212 \330\264\331\210\331\212\330\251 \331\212\330\257\331\212 \330\245\330\255\330\263\330\247\330\263 \330\247\331\204\330\266\330\272\330\267\330\251 */\n"
"    border: 1px solid #E66A00;\n"
"    padding-top"
                        ": 8px; /* \330\252\330\261\331\212\331\203\330\251 \330\265\330\247\331\212\330\271\330\251 \330\250\330\252\330\256\331\204\331\212 \330\247\331\204\331\206\330\265 \331\212\331\206\330\262\331\204 \331\205\331\204\331\212 \331\204\330\252\330\255\330\252 \331\203\330\243\331\206\331\207 \330\262\330\261\330\247\330\261 \330\255\331\202\331\212\331\202\331\212 */\n"
"    padding-bottom: 4px;\n"
"}\n"
"\n"
"QPushButton[style_type=\"emoji_btn\"] {\n"
"    background-color: transparent; /* \330\264\331\201\330\247\331\201 \330\252\331\205\330\247\331\205\330\247\331\213 \330\271\330\264\330\247\331\206 \331\212\330\247\330\256\330\257 \331\204\331\210\331\206 \330\247\331\204\331\201\330\261\331\212\331\205 \330\247\331\204\331\204\331\212 \330\252\330\255\330\252\331\207 */\n"
"    border: none;                  /* \331\205\330\264 \330\271\330\247\331\212\330\262\331\212\331\206 \330\245\330\267\330\247\330\261 \331\205\330\266\330\247\331\212\331\202 \330\247\331\204\330\271\331\212\331\206 */\n"
"    font-si"
                        "ze: 40px;               /* \331\203\330\250\330\261 \330\255\330\254\331\205 \330\247\331\204\330\245\331\212\331\205\331\210\330\254\331\212 \330\271\330\264\330\247\331\206 \331\212\330\250\331\202\331\211 \331\210\330\247\330\266\330\255 */\n"
"    border-radius: 8px;            /* \330\252\331\206\330\271\331\212\331\205 \330\247\331\204\330\255\331\210\330\247\331\201 \331\204\331\204\330\255\330\247\331\204\330\251 \330\250\330\252\330\247\330\271\330\251 \330\247\331\204\331\200 Hover */\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* \331\204\331\205\330\247 \330\247\331\204\331\205\330\247\331\210\330\263 \331\212\330\261\331\210\330\255 \330\271\331\204\331\211 \330\247\331\204\330\262\330\261\330\247\330\261 (Hover) */\n"
"QPushButton[style_type=\"emoji_btn\"]:hover {\n"
"    background-color: #252525;     /* \330\245\330\266\330\247\330\241\330\251 \330\256\331\201\331\212\331\201\330\251 \330\254\330\257\330\247\331\213 \330\261\331\205\330\247\330\257\331\212 \330\272\330\247\331\205\331\202 \330\256\331"
                        "\204\331\201 \330\247\331\204\330\245\331\212\331\205\331\210\330\254\331\212 */\n"
"    border: 1px solid #00FF66;     /* \330\256\330\267 \331\206\331\212\331\210\331\206 \330\243\330\256\330\266\330\261 \330\261\331\201\331\212\330\271 \331\212\330\255\330\257\330\257 \330\247\331\204\330\262\330\261\330\247\330\261 */\n"
"}\n"
"\n"
"/* \331\204\331\205\330\247 \331\212\330\257\331\210\330\263 \330\271\331\204\331\211 \330\247\331\204\330\262\330\261\330\247\330\261 (Pressed) */\n"
"QPushButton[style_type=\"emoji_btn\"]:pressed {\n"
"    background-color: #1A1A1A;     /* \331\212\330\272\331\205\331\202 \330\263\331\212\331\203\330\251 \330\271\330\264\330\247\331\206 \331\212\330\255\330\263 \330\250\330\247\331\204\330\257\331\210\330\263\330\251 */\n"
"}\n"
"\n"
"\n"
"/* 5. \330\256\330\247\331\206\330\247\330\252 \330\247\331\204\330\245\330\257\330\256\330\247\331\204 */\n"
"QLineEdit {\n"
"    background-color: #2A2A2A;\n"
"    color: #FFFFFF;\n"
"    border: 1px solid #444444;\n"
"    border-radius: "
                        "5px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #00FF66;\n"
"}\n"
"\n"
"/* 6. \330\247\331\204\330\254\330\257\331\210\331\204 (QTableWidget) */\n"
"QTableWidget {\n"
"    background-color: #1E1E1E; /* \331\204\331\210\331\206 \330\247\331\204\330\256\331\204\331\201\331\212\330\251 \330\247\331\204\330\272\330\247\331\205\331\202 \330\250\330\252\330\247\330\271 \330\247\331\204\330\264\330\247\330\264\330\251 */\n"
"    alternate-background-color: #2A2A2A; /* \331\204\331\210\331\206 \330\247\331\204\330\254\330\261\330\247\331\201 \330\247\331\204\331\204\331\212 \331\207\331\212\331\203\330\263\330\261 \330\247\331\204\330\272\331\205\331\202\330\247\331\206 */\n"
"    color: #FFFFFF;\n"
"    gridline-color: #444444; /* \330\256\330\267\331\210\330\267 \330\247\331\204\330\254\330\257\331\210\331\204 */\n"
"    border: none;\n"
"}\n"
"\n"
"/* \331\204\331\210 \330\271\330\247\331\212\330\262 \330\252\331\204\331\210\331\206 \330\247\331\204\331\207\331\212\330\257\330\261"
                        " (\330\247\331\204\330\271\331\206\330\247\331\210\331\212\331\206 \330\247\331\204\331\204\331\212 \331\201\331\210\331\202) \330\250\331\206\331\201\330\263 \330\247\331\204\331\204\331\210\331\206 \330\271\330\264\330\247\331\206 \330\252\331\202\331\201\331\204 \330\247\331\204\330\264\331\212\330\247\331\203\330\251 */\n"
"QHeaderView::section {\n"
"    background-color: #2A2A2A; \n"
"    color: #00FF66;\n"
"    border: 1px solid #444444;\n"
"    padding: 4px;\n"
"}\n"
"QTableWidget::item {\n"
"    border-bottom: 1px solid #2D2D2D;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #00FF66;\n"
"    color: #121212;\n"
"}\n"
"\n"
"QStackedWidget {\n"
"    background-color: rgba(30, 30, 30, 180); \n"
"    border: 1px solid rgba(255, 255, 255, 40);\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QProgressBar {\n"
"    background-color: transparent;\n"
"    border: 1px solid #2D2D2D; /* \330\245\330\267\330\247\330\261 \330\256\331\201\331\212\331\201 \330\271\330\264\330\247"
                        "\331\206 \331\212\330\255\330\257\330\257 \331\205\330\263\330\247\330\261 \330\247\331\204\330\264\330\261\331\212\330\267 */\n"
"    border-radius: 5px;\n"
"    text-align: center; /* \330\250\331\212\330\263\331\206\330\252\330\261 \330\247\331\204\331\206\330\263\330\250\330\251 \331\201\331\212 \330\247\331\204\331\206\330\265 */\n"
"	font-size: 30px;\n"
"    color: #FFFFFF;/* \331\204\331\210\331\206 \330\247\331\204\331\206\330\263\330\250\330\251 */\n"
"    font-weight: bold;\n"
"}\n"
"QProgressBar::chunk {\n"
"    background-color: #05C46B; /* \331\204\331\210\331\206 \330\247\331\204\330\264\330\261\331\212\330\267 \330\247\331\204\330\243\330\256\330\266\330\261 */\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* 2. \330\255\330\247\331\204\330\251 \330\247\331\204\330\256\330\267\330\261 (\330\243\331\202\331\204 \331\205\331\206 60) */\n"
"QProgressBar[progress_state=\"bad\"]::chunk { background-color: #FF4757; }\n"
"QProgressBar[progress_state=\"bad\"] { color: #FFFFFF; }\n"
"\n"
"/* 3. \330\255\330"
                        "\247\331\204\330\251 \330\247\331\204\331\205\330\252\331\210\330\263\330\267 (\331\205\331\206 60 \331\204\331\200 85) */\n"
"QProgressBar[progress_state=\"mid\"]::chunk { background-color: #FFA502; }\n"
"QProgressBar[progress_state=\"mid\"] { color: #FFFFFF; }\n"
"\n"
"/* 4. \330\255\330\247\331\204\330\251 \330\247\331\204\330\247\331\205\330\252\331\212\330\247\330\262 (\331\201\331\210\331\202 85) */\n"
"QProgressBar[progress_state=\"good\"]::chunk { background-color: #00FF66; }\n"
"QProgressBar[progress_state=\"good\"] { color: #121212; }\n"
"\n"
"/* 1. \330\247\331\204\330\263\330\267\330\261 \330\257\331\207 \331\207\331\212\331\204\330\272\331\212 \330\247\331\204\331\205\330\261\330\250\330\271 \330\247\331\204\330\243\330\262\330\261\331\202 \330\247\331\204\331\205\331\206\331\202\330\267 \331\205\331\206 \330\271\331\204\331\211 \330\243\331\212 \330\271\331\206\330\265\330\261 \331\201\331\212 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254 \331\206\331\207\330\247\330\246\331\212"
                        "\330\247\331\213 */\n"
"* {\n"
"    outline: none;\n"
"}\n"
"\n"
"/* 2. \330\252\330\270\330\250\331\212\330\267 \330\264\331\203\331\204 \330\247\331\204\331\200 ComboBox \330\271\330\264\330\247\331\206 \331\205\331\212\330\247\330\256\330\257\330\264 \330\264\331\203\331\204 \330\247\331\204\331\210\331\212\331\206\330\257\331\210\330\262 \330\247\331\204\331\202\330\257\331\212\331\205 */\n"
"QComboBox {\n"
"    border: 1px solid #333;\n"
"    border-radius: 4px;\n"
"    padding: 5px;\n"
"    background-color: #1e1e1e; /* \330\257\330\261\330\254\330\251 \330\272\330\247\331\205\331\202\330\251 \330\264\331\212\331\203 */\n"
"    color: white;\n"
"}\n"
"QComboBox::drop-down {\n"
"    border: none;\n"
"}\n"
"\n"
"/* 3. \330\252\330\270\330\250\331\212\330\267 \330\264\331\203\331\204 \330\247\331\204\331\200 CheckBox \330\271\330\264\330\247\331\206 \331\212\330\250\331\202\331\211 \331\205\331\210\330\255\330\257 \331\210\330\253\330\247\330\250\330\252 */\n"
"QCheckBox {\n"
"    color: white;\n"
"    spac"
                        "ing: 5px;\n"
"}\n"
"QCheckBox::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border: 1px solid #555;\n"
"    border-radius: 3px;\n"
"    background-color: #1e1e1e;\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #2ea44f; /* \331\204\331\210\331\206 \330\243\330\256\330\266\330\261 \331\204\330\260\331\212\330\260 \331\204\331\205\330\247 \331\212\330\252\330\271\331\204\331\205 \330\271\331\204\331\212\331\207 */\n"
"    border: 1px solid #2ea44f;\n"
"}\n"
"/* \330\252\330\270\330\250\331\212\330\267 \330\247\331\204\331\202\330\247\331\212\331\205\330\251 \330\247\331\204\331\205\331\206\330\263\330\257\331\204\330\251 \331\205\331\206 \330\254\331\210\331\207 \330\271\330\264\330\247\331\206 \330\247\331\204\330\252\330\255\330\257\331\212\330\257 \331\212\330\250\330\247\331\206 \330\250\331\210\330\266\331\210\330\255 */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #1e1e1e; /* \331\204\331\210\331\206 \330\256\331\204\331\201\331\212\330\251 \330\247\331\204"
                        "\331\202\330\247\331\212\331\205\330\251 */\n"
"    color: white; /* \331\204\331\210\331\206 \330\247\331\204\331\203\331\204\330\247\331\205 \330\247\331\204\330\271\330\247\330\257\331\212 */\n"
"    \n"
"    /* \330\257\331\207 \330\247\331\204\330\263\330\267\330\261 \330\247\331\204\330\263\330\255\330\261\331\212 \330\247\331\204\331\204\331\212 \330\250\331\212\330\271\331\205\331\204 \330\247\331\204\331\204\331\210\331\206 \330\247\331\204\331\205\330\250\331\207\330\254 \331\204\331\205\330\247 \330\252\331\202\331\201 \330\250\330\247\331\204\331\205\330\247\331\210\330\263 */\n"
"    selection-background-color: #0078D7; /* \330\247\331\204\331\204\331\210\331\206 \330\247\331\204\330\243\330\262\330\261\331\202 \330\250\330\252\330\247\330\271 \330\247\331\204\331\210\331\212\331\206\330\257\331\210\330\262 \330\247\331\204\330\243\330\265\331\204\331\212 */\n"
"    selection-color: white; /* \331\204\331\210\331\206 \330\247\331\204\331\203\331\204\330\247\331\205 \330\254\331\210\331\207 \330\247"
                        "\331\204\330\252\330\255\330\257\331\212\330\257 */\n"
"    \n"
"    outline: none; /* \330\271\330\264\330\247\331\206 \331\206\331\204\330\272\331\212 \330\247\331\204\331\205\330\261\330\250\330\271 \330\247\331\204\331\205\331\206\331\202\330\267 \330\247\331\204\331\202\330\257\331\212\331\205 */\n"
"}\n"
"\n"
"/* \331\204\331\210 \330\255\330\247\330\250\330\250 \330\252\330\257\331\212 \330\252\330\243\330\253\331\212\330\261 \331\203\331\205\330\247\331\206 \331\204\331\204\331\200 Item \331\206\331\201\330\263\331\207 \331\204\331\205\330\247 \330\252\331\205\330\264\331\212 \330\271\331\204\331\212\331\207 \330\250\330\247\331\204\331\205\330\247\331\210\330\263 */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    background-color: #005a9e; /* \330\257\330\261\330\254\330\251 \330\243\330\262\330\261\331\202 \330\243\330\272\331\205\331\202 \330\264\331\210\331\212\330\251 \331\204\331\204\331\200 Hover */\n"
"    color: white;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 388, 114));
        frame->setMaximumSize(QSize(388, 114));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        head_lbl = new QLabel(frame);
        head_lbl->setObjectName("head_lbl");
        head_lbl->setGeometry(QRect(18, 4, 360, 43));
        QFont font;
        font.setBold(true);
        head_lbl->setFont(font);
        dashboard = new QPushButton(frame);
        dashboard->setObjectName("dashboard");
        dashboard->setGeometry(QRect(22, 45, 60, 56));
        about = new QPushButton(frame);
        about->setObjectName("about");
        about->setGeometry(QRect(293, 45, 65, 56));
        current_semester = new QPushButton(frame);
        current_semester->setObjectName("current_semester");
        current_semester->setGeometry(QRect(150, 45, 64, 56));
        frame_1 = new QFrame(centralwidget);
        frame_1->setObjectName("frame_1");
        frame_1->setEnabled(false);
        frame_1->setGeometry(QRect(898, 12, 211, 111));
        frame_1->setStyleSheet(QString::fromUtf8(".neon_frame {}"));
        frame_1->setFrameShape(QFrame::Shape::StyledPanel);
        frame_1->setFrameShadow(QFrame::Shadow::Raised);
        label_4 = new QLabel(frame_1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(56, 21, 141, 20));
        label_4->setFont(font);
        academic_alert = new QLabel(frame_1);
        academic_alert->setObjectName("academic_alert");
        academic_alert->setGeometry(QRect(17, 69, 141, 20));
        academic_alert->setFont(font);
        label_9 = new QLabel(frame_1);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(9, 7, 37, 45));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setEnabled(false);
        frame_2->setGeometry(QRect(1118, 12, 165, 111));
        frame_2->setStyleSheet(QString::fromUtf8(".neon_frame {}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(52, 21, 51, 20));
        label_3->setFont(font);
        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(16, 16, 28, 29));
        label_11->setFont(font);
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/calculator-8-64.png")));
        label_11->setScaledContents(true);
        cgpa = new QLabel(frame_2);
        cgpa->setObjectName("cgpa");
        cgpa->setGeometry(QRect(20, 69, 61, 20));
        cgpa->setFont(font);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setEnabled(false);
        frame_3->setGeometry(QRect(678, 12, 211, 111));
        frame_3->setStyleSheet(QString::fromUtf8(".neon_frame {}"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 20, 149, 20));
        label_2->setFont(font);
        academic_level = new QLabel(frame_3);
        academic_level->setObjectName("academic_level");
        academic_level->setGeometry(QRect(14, 81, 141, 20));
        academic_level->setFont(font);
        achieved_hours = new QLabel(frame_3);
        achieved_hours->setObjectName("achieved_hours");
        achieved_hours->setGeometry(QRect(14, 54, 141, 20));
        achieved_hours->setFont(font);
        label_7 = new QLabel(frame_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(8, 6, 37, 45));
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName("frame_4");
        frame_4->setEnabled(false);
        frame_4->setGeometry(QRect(430, 12, 239, 111));
        frame_4->setStyleSheet(QString::fromUtf8(".neon_frame {}"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame_4);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 21, 171, 20));
        label->setFont(font);
        regist_limit = new QLabel(frame_4);
        regist_limit->setObjectName("regist_limit");
        regist_limit->setGeometry(QRect(20, 69, 171, 20));
        regist_limit->setFont(font);
        label_8 = new QLabel(frame_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(9, 7, 37, 45));
        glassContainer = new QStackedWidget(centralwidget);
        glassContainer->setObjectName("glassContainer");
        glassContainer->setGeometry(QRect(10, 130, 1273, 641));
        page = new QWidget();
        page->setObjectName("page");
        frame_5 = new QFrame(page);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(7, 45, 380, 586));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        title_lbl = new QLabel(frame_5);
        title_lbl->setObjectName("title_lbl");
        title_lbl->setGeometry(QRect(30, 31, 177, 20));
        title_lbl->setFont(font);
        title_lbl->setStyleSheet(QString::fromUtf8(""));
        label_13 = new QLabel(frame_5);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(24, 104, 124, 20));
        label_13->setFont(font);
        label_14 = new QLabel(frame_5);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(24, 320, 124, 20));
        label_14->setFont(font);
        label_15 = new QLabel(frame_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(24, 398, 124, 20));
        label_15->setFont(font);
        label_16 = new QLabel(frame_5);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(24, 242, 124, 20));
        label_16->setFont(font);
        label_17 = new QLabel(frame_5);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(24, 172, 124, 20));
        label_17->setFont(font);
        add_button = new QPushButton(frame_5);
        add_button->setObjectName("add_button");
        add_button->setGeometry(QRect(50, 520, 280, 35));
        count_in_gpa = new QCheckBox(frame_5);
        count_in_gpa->setObjectName("count_in_gpa");
        count_in_gpa->setGeometry(QRect(24, 460, 163, 23));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        count_in_gpa->setFont(font1);
        code = new QLineEdit(frame_5);
        code->setObjectName("code");
        code->setGeometry(QRect(159, 102, 207, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        code->setFont(font2);
        semester = new QLineEdit(frame_5);
        semester->setObjectName("semester");
        semester->setGeometry(QRect(159, 318, 207, 29));
        semester->setFont(font2);
        hours = new QLineEdit(frame_5);
        hours->setObjectName("hours");
        hours->setGeometry(QRect(159, 240, 207, 29));
        hours->setFont(font2);
        name = new QLineEdit(frame_5);
        name->setObjectName("name");
        name->setGeometry(QRect(159, 170, 207, 29));
        name->setFont(font2);
        grade = new QComboBox(frame_5);
        grade->setObjectName("grade");
        grade->setGeometry(QRect(158, 390, 207, 33));
        grade->setFont(font2);
        frame_6 = new QFrame(page);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(392, 46, 869, 289));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        tableWidget = new QTableWidget(frame_6);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(6, 50, 858, 227));
        delete_btn = new QPushButton(frame_6);
        delete_btn->setObjectName("delete_btn");
        delete_btn->setGeometry(QRect(704, 9, 160, 35));
        delete_btn->setStyleSheet(QString::fromUtf8(""));
        edit_course = new QPushButton(frame_6);
        edit_course->setObjectName("edit_course");
        edit_course->setGeometry(QRect(550, 9, 149, 35));
        label_5 = new QLabel(frame_6);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(18, 17, 178, 20));
        label_5->setFont(font);
        chartWidget = new QChartView(page);
        chartWidget->setObjectName("chartWidget");
        chartWidget->setGeometry(QRect(392, 339, 869, 293));
        messageLabel = new QLabel(page);
        messageLabel->setObjectName("messageLabel");
        messageLabel->setGeometry(QRect(402, 11, 861, 25));
        messageLabel->setFont(font);
        messageLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        messageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        updateBtn = new QPushButton(page);
        updateBtn->setObjectName("updateBtn");
        updateBtn->setEnabled(true);
        updateBtn->setGeometry(QRect(64, 4, 254, 35));
        glassContainer->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        frame_7 = new QFrame(page_3);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(8, 9, 379, 623));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        title_lbl_2 = new QLabel(frame_7);
        title_lbl_2->setObjectName("title_lbl_2");
        title_lbl_2->setGeometry(QRect(30, 30, 177, 26));
        title_lbl_2->setFont(font);
        label_18 = new QLabel(frame_7);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(15, 94, 124, 20));
        label_18->setFont(font);
        label_19 = new QLabel(frame_7);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(200, 421, 52, 20));
        label_19->setFont(font);
        label_20 = new QLabel(frame_7);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(15, 290, 143, 20));
        label_20->setFont(font);
        label_21 = new QLabel(frame_7);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(15, 222, 124, 20));
        label_21->setFont(font);
        label_22 = new QLabel(frame_7);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(15, 160, 124, 20));
        label_22->setFont(font);
        add_button_2 = new QPushButton(frame_7);
        add_button_2->setObjectName("add_button_2");
        add_button_2->setGeometry(QRect(50, 560, 280, 35));
        has_practical = new QCheckBox(frame_7);
        has_practical->setObjectName("has_practical");
        has_practical->setGeometry(QRect(15, 350, 300, 23));
        has_practical->setFont(font1);
        code_2 = new QLineEdit(frame_7);
        code_2->setObjectName("code_2");
        code_2->setGeometry(QRect(160, 92, 207, 30));
        code_2->setFont(font2);
        quiz = new QLineEdit(frame_7);
        quiz->setObjectName("quiz");
        quiz->setGeometry(QRect(290, 419, 80, 29));
        quiz->setFont(font2);
        hours_2 = new QLineEdit(frame_7);
        hours_2->setObjectName("hours_2");
        hours_2->setGeometry(QRect(160, 220, 207, 29));
        hours_2->setFont(font2);
        name_2 = new QLineEdit(frame_7);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(160, 158, 207, 29));
        name_2->setFont(font2);
        practical_label = new QLabel(frame_7);
        practical_label->setObjectName("practical_label");
        practical_label->setGeometry(QRect(200, 489, 83, 20));
        practical_label->setFont(font);
        practical_line = new QLineEdit(frame_7);
        practical_line->setObjectName("practical_line");
        practical_line->setGeometry(QRect(290, 483, 80, 29));
        practical_line->setFont(font2);
        label_24 = new QLabel(frame_7);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(10, 489, 115, 20));
        label_24->setFont(font);
        year_work = new QLineEdit(frame_7);
        year_work->setObjectName("year_work");
        year_work->setGeometry(QRect(110, 483, 80, 29));
        year_work->setFont(font2);
        label_25 = new QLabel(frame_7);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(10, 421, 92, 20));
        label_25->setFont(font);
        mid_term = new QLineEdit(frame_7);
        mid_term->setObjectName("mid_term");
        mid_term->setGeometry(QRect(110, 419, 80, 29));
        mid_term->setFont(font2);
        target_grade = new QComboBox(frame_7);
        target_grade->setObjectName("target_grade");
        target_grade->setGeometry(QRect(160, 283, 207, 33));
        target_grade->setFont(font2);
        frame_8 = new QFrame(page_3);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(396, 195, 868, 332));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        registered_courses = new QTableWidget(frame_8);
        if (registered_courses->columnCount() < 9)
            registered_courses->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        registered_courses->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        registered_courses->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        registered_courses->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        registered_courses->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        registered_courses->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        registered_courses->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        registered_courses->setHorizontalHeaderItem(6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        registered_courses->setHorizontalHeaderItem(7, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        registered_courses->setHorizontalHeaderItem(8, __qtablewidgetitem14);
        registered_courses->setObjectName("registered_courses");
        registered_courses->setGeometry(QRect(6, 50, 858, 268));
        delete_btn_2 = new QPushButton(frame_8);
        delete_btn_2->setObjectName("delete_btn_2");
        delete_btn_2->setGeometry(QRect(694, 9, 160, 35));
        edit_course_2 = new QPushButton(frame_8);
        edit_course_2->setObjectName("edit_course_2");
        edit_course_2->setGeometry(QRect(530, 9, 149, 35));
        label_6 = new QLabel(frame_8);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(18, 17, 178, 20));
        label_6->setFont(font);
        submit = new QPushButton(frame_8);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(308, 9, 211, 35));
        frame_9 = new QFrame(page_3);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(396, 10, 868, 48));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        regist_limit_2 = new QLabel(frame_9);
        regist_limit_2->setObjectName("regist_limit_2");
        regist_limit_2->setGeometry(QRect(18, 13, 125, 20));
        regist_limit_2->setFont(font);
        target_textBox = new QLineEdit(frame_9);
        target_textBox->setObjectName("target_textBox");
        target_textBox->setGeometry(QRect(160, 10, 93, 29));
        target_textBox->setFont(font2);
        regist_limit_3 = new QLabel(frame_9);
        regist_limit_3->setObjectName("regist_limit_3");
        regist_limit_3->setGeometry(QRect(600, 13, 112, 20));
        regist_limit_3->setFont(font);
        regist_limit_4 = new QLabel(frame_9);
        regist_limit_4->setObjectName("regist_limit_4");
        regist_limit_4->setGeometry(QRect(310, 13, 135, 20));
        regist_limit_4->setFont(font);
        target_sgpa = new QLabel(frame_9);
        target_sgpa->setObjectName("target_sgpa");
        target_sgpa->setGeometry(QRect(450, 13, 107, 20));
        target_sgpa->setFont(font);
        planned_gpa = new QLabel(frame_9);
        planned_gpa->setObjectName("planned_gpa");
        planned_gpa->setGeometry(QRect(720, 13, 108, 20));
        planned_gpa->setFont(font);
        frame_10 = new QFrame(page_3);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(396, 533, 868, 98));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        progressBar = new QProgressBar(frame_10);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(6, 35, 855, 55));
        progressBar->setValue(24);
        label_10 = new QLabel(frame_10);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(16, 7, 178, 20));
        label_10->setFont(font);
        plan_statue = new QLabel(page_3);
        plan_statue->setObjectName("plan_statue");
        plan_statue->setGeometry(QRect(396, 109, 868, 77));
        plan_statue->setFont(font);
        plan_statue->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        plan_statue->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_12 = new QLabel(page_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(775, 72, 109, 20));
        label_12->setFont(font);
        glassContainer->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        complaints = new QPushButton(page_2);
        complaints->setObjectName("complaints");
        complaints->setGeometry(QRect(870, 359, 245, 219));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/Screenshot_20260619_132542.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        complaints->setIcon(icon);
        complaints->setIconSize(QSize(250, 250));
        linkedin = new QPushButton(page_2);
        linkedin->setObjectName("linkedin");
        linkedin->setGeometry(QRect(150, 359, 245, 220));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/2459101-426374013.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        linkedin->setIcon(icon1);
        linkedin->setIconSize(QSize(245, 280));
        label_23 = new QLabel(page_2);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(598, 590, 69, 20));
        label_23->setFont(font);
        label_26 = new QLabel(page_2);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(885, 590, 216, 20));
        label_26->setFont(font);
        label_27 = new QLabel(page_2);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(228, 590, 89, 20));
        label_27->setFont(font);
        about_message = new QLabel(page_2);
        about_message->setObjectName("about_message");
        about_message->setGeometry(QRect(-30, 6, 1279, 335));
        about_message->setTextFormat(Qt::TextFormat::AutoText);
        about_message->setScaledContents(false);
        about_message->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        github = new QPushButton(page_2);
        github->setObjectName("github");
        github->setGeometry(QRect(510, 359, 245, 220));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/Screenshot_20260620_153737.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        github->setIcon(icon2);
        github->setIconSize(QSize(245, 280));
        glassContainer->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1289, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(code, name);
        QWidget::setTabOrder(name, hours);
        QWidget::setTabOrder(hours, semester);
        QWidget::setTabOrder(semester, grade);
        QWidget::setTabOrder(grade, count_in_gpa);
        QWidget::setTabOrder(count_in_gpa, add_button);
        QWidget::setTabOrder(add_button, code_2);
        QWidget::setTabOrder(code_2, name_2);
        QWidget::setTabOrder(name_2, hours_2);
        QWidget::setTabOrder(hours_2, target_grade);
        QWidget::setTabOrder(target_grade, has_practical);
        QWidget::setTabOrder(has_practical, mid_term);
        QWidget::setTabOrder(mid_term, quiz);
        QWidget::setTabOrder(quiz, year_work);
        QWidget::setTabOrder(year_work, practical_line);
        QWidget::setTabOrder(practical_line, add_button_2);
        QWidget::setTabOrder(add_button_2, target_textBox);
        QWidget::setTabOrder(target_textBox, dashboard);
        QWidget::setTabOrder(dashboard, current_semester);
        QWidget::setTabOrder(current_semester, about);
        QWidget::setTabOrder(about, delete_btn);
        QWidget::setTabOrder(delete_btn, edit_course);
        QWidget::setTabOrder(edit_course, tableWidget);
        QWidget::setTabOrder(tableWidget, registered_courses);
        QWidget::setTabOrder(registered_courses, delete_btn_2);
        QWidget::setTabOrder(delete_btn_2, edit_course_2);
        QWidget::setTabOrder(edit_course_2, submit);
        QWidget::setTabOrder(submit, updateBtn);
        QWidget::setTabOrder(updateBtn, complaints);
        QWidget::setTabOrder(complaints, linkedin);
        QWidget::setTabOrder(linkedin, github);

        retranslateUi(MainWindow);

        glassContainer->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SGA", nullptr));
        head_lbl->setText(QCoreApplication::translate("MainWindow", "Smart GPA Assistant  \360\237\216\223", nullptr));
        head_lbl->setProperty("label_case", QVariant(QCoreApplication::translate("MainWindow", "head", nullptr)));
#if QT_CONFIG(tooltip)
        dashboard->setToolTip(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
#endif // QT_CONFIG(tooltip)
        dashboard->setText(QCoreApplication::translate("MainWindow", "\360\237\217\240", nullptr));
        dashboard->setProperty("style_type", QVariant(QCoreApplication::translate("MainWindow", "emoji_btn", nullptr)));
#if QT_CONFIG(tooltip)
        about->setToolTip(QCoreApplication::translate("MainWindow", "about", nullptr));
#endif // QT_CONFIG(tooltip)
        about->setText(QCoreApplication::translate("MainWindow", "\360\237\221\250\342\200\215\360\237\222\273", nullptr));
        about->setProperty("style_type", QVariant(QCoreApplication::translate("MainWindow", "emoji_btn", nullptr)));
#if QT_CONFIG(tooltip)
        current_semester->setToolTip(QCoreApplication::translate("MainWindow", "Current Semester", nullptr));
#endif // QT_CONFIG(tooltip)
        current_semester->setText(QCoreApplication::translate("MainWindow", "\360\237\216\257", nullptr));
        current_semester->setProperty("style_type", QVariant(QCoreApplication::translate("MainWindow", "emoji_btn", nullptr)));
        frame_1->setProperty("style_type", QVariant(QCoreApplication::translate("MainWindow", "neon", nullptr)));
        label_4->setText(QCoreApplication::translate("MainWindow", "Academic Alert", nullptr));
        academic_alert->setText(QCoreApplication::translate("MainWindow", "Academic Alert", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\360\237\232\250", nullptr));
        label_9->setProperty("label_case", QVariant(QCoreApplication::translate("MainWindow", "icon", nullptr)));
        frame_2->setProperty("style_type", QVariant(QCoreApplication::translate("MainWindow", "neon", nullptr)));
        label_3->setText(QCoreApplication::translate("MainWindow", "CGPA", nullptr));
        label_11->setText(QString());
        cgpa->setText(QCoreApplication::translate("MainWindow", "CGPA", nullptr));
        frame_3->setProperty("style_type", QVariant(QCoreApplication::translate("MainWindow", "neon", nullptr)));
        label_2->setText(QCoreApplication::translate("MainWindow", "Achieved Hours", nullptr));
        academic_level->setText(QCoreApplication::translate("MainWindow", "Academic Level", nullptr));
        achieved_hours->setText(QCoreApplication::translate("MainWindow", "Achieved Hours", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\360\237\225\222", nullptr));
        label_7->setProperty("label_case", QVariant(QCoreApplication::translate("MainWindow", "icon", nullptr)));
        frame_4->setProperty("style_type", QVariant(QCoreApplication::translate("MainWindow", "neon", nullptr)));
        label->setText(QCoreApplication::translate("MainWindow", "Registeration Limit", nullptr));
        regist_limit->setText(QCoreApplication::translate("MainWindow", "Registeration Limit", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\360\237\224\223", nullptr));
        label_8->setProperty("label_case", QVariant(QCoreApplication::translate("MainWindow", "icon", nullptr)));
#if QT_CONFIG(tooltip)
        glassContainer->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        title_lbl->setText(QCoreApplication::translate("MainWindow", "Add / Edit Course", nullptr));
        title_lbl->setProperty("label_case", QVariant(QCoreApplication::translate("MainWindow", "title", nullptr)));
        label_13->setText(QCoreApplication::translate("MainWindow", "Course Code", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Semester", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Grade ", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Credit Hours", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Course Name", nullptr));
        add_button->setText(QCoreApplication::translate("MainWindow", "Save Course", nullptr));
        count_in_gpa->setText(QCoreApplication::translate("MainWindow", "Counts in GPA", nullptr));
        grade->setProperty("style_type", QVariant(QCoreApplication::translate("MainWindow", "combo", nullptr)));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Credit Hours", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Grade", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Semester", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        delete_btn->setText(QCoreApplication::translate("MainWindow", "Delete Course", nullptr));
        delete_btn->setProperty("style_type", QVariant(QCoreApplication::translate("MainWindow", "delete", nullptr)));
        edit_course->setText(QCoreApplication::translate("MainWindow", "Edit Course", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Completed Courses", nullptr));
        messageLabel->setText(QString());
        updateBtn->setText(QCoreApplication::translate("MainWindow", "Update Now ! ", nullptr));
        title_lbl_2->setText(QCoreApplication::translate("MainWindow", "Register Course", nullptr));
        title_lbl_2->setProperty("label_case", QVariant(QCoreApplication::translate("MainWindow", "title", nullptr)));
        label_18->setText(QCoreApplication::translate("MainWindow", "Course Code", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Quiz", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Targeted Grade ", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Credit Hours", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Course Name", nullptr));
        add_button_2->setText(QCoreApplication::translate("MainWindow", "Save Course", nullptr));
        has_practical->setText(QCoreApplication::translate("MainWindow", "Course has a practical exam?", nullptr));
        practical_label->setText(QCoreApplication::translate("MainWindow", "Practical", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Year Work", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Mid Term", nullptr));
        target_grade->setProperty("style_type", QVariant(QCoreApplication::translate("MainWindow", "combo", nullptr)));
        QTableWidgetItem *___qtablewidgetitem6 = registered_courses->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = registered_courses->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = registered_courses->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Credit Hours", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = registered_courses->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Target Grade", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = registered_courses->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Needed in Final", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = registered_courses->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Mid Term", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = registered_courses->horizontalHeaderItem(6);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Quiz", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = registered_courses->horizontalHeaderItem(7);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "Year Work", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = registered_courses->horizontalHeaderItem(8);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Practical", nullptr));
        delete_btn_2->setText(QCoreApplication::translate("MainWindow", "Delete Course", nullptr));
        delete_btn_2->setProperty("style_type", QVariant(QCoreApplication::translate("MainWindow", "delete", nullptr)));
        edit_course_2->setText(QCoreApplication::translate("MainWindow", "Edit Course", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Registed Courses", nullptr));
        submit->setText(QCoreApplication::translate("MainWindow", "Submit Final Grades", nullptr));
        regist_limit_2->setText(QCoreApplication::translate("MainWindow", "Target CGPA :", nullptr));
        regist_limit_3->setText(QCoreApplication::translate("MainWindow", "Plan's GPA :", nullptr));
        regist_limit_4->setText(QCoreApplication::translate("MainWindow", "Target SGPA :", nullptr));
        target_sgpa->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        planned_gpa->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Semester Progress", nullptr));
        plan_statue->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Plan Status", nullptr));
#if QT_CONFIG(tooltip)
        complaints->setToolTip(QCoreApplication::translate("MainWindow", "\331\201\331\212 \331\205\330\264\331\203\331\204\330\251 \331\207\331\206\330\247 \331\212\330\247 \330\250\330\247\330\264\330\247 \331\210\331\204\330\247 \330\247\331\212\331\207", nullptr));
#endif // QT_CONFIG(tooltip)
        complaints->setText(QString());
        complaints->setProperty("case", QVariant(QCoreApplication::translate("MainWindow", "social_media", nullptr)));
#if QT_CONFIG(tooltip)
        linkedin->setToolTip(QCoreApplication::translate("MainWindow", "\331\210\330\264 \330\260\330\247 \330\247\331\204\330\264\330\261\330\263", nullptr));
#endif // QT_CONFIG(tooltip)
        linkedin->setText(QString());
        linkedin->setProperty("case", QVariant(QCoreApplication::translate("MainWindow", "social_media", nullptr)));
        label_23->setText(QCoreApplication::translate("MainWindow", "GitHub", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Complaints & Feedback", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "LinkedIn", nullptr));
        about_message->setText(QCoreApplication::translate("MainWindow", "<div dir=\"rtl\" align=\"right\" style=\"line-height: 1.5; padding-left: 10px;\">\n"
".     SGA \331\205\330\264 \331\205\330\254\330\261\330\257 \330\247\330\250\331\204\331\203\331\212\330\264\331\206 \330\250\331\212\330\255\330\263\330\250\331\204\331\203 \330\247\331\204\331\200 GPA \330\250\330\252\330\247\330\271\331\203. \330\257\331\207 \330\264\330\261\331\212\331\203 \330\261\330\255\331\204\330\252\331\203 \331\201\331\212 \330\247\331\204\331\203\331\204\331\212\330\251\330\214 \331\205\331\206 \330\247\331\210\331\204 \330\247\331\204\330\256\330\267\330\251 \330\247\331\204\331\204\331\212 \330\250\330\252\330\255\330\267\331\207\330\247 \331\201\331\212 \330\250\330\257\330\247\331\212\330\251 \330\247\331\204\330\252\330\261\331\205 \331\204\330\255\330\257 \331\205\330\247 \330\252\330\247\330\256\330\257 \330\271\331\204\331\211 \331\210\330\264\331\203 \331\201\331\212 \330\247\331\204\331\205\331\212\330\257\330\252\331\212\330\261\331\205 \331\210\330\252\330\256\330\264 <br>\n"
".    \331"
                        "\201\331\212 \331\205\330\261\330\255\331\204\330\251 \"\331\207\331\206\330\271\331\210\330\266 \331\201\331\212 \330\247\331\204\331\201\330\247\331\212\331\206\330\247\331\204\". \331\210\330\271\330\264\330\247\331\206 \331\203\330\257\331\207 \331\207\331\210 \331\205\330\271\331\205\331\210\331\204 \330\271\330\264\330\247\331\206\331\203 \331\205\330\256\330\265\331\210\330\265 \331\210\331\205\330\247\330\264\331\212 \330\271\331\204\331\211 \331\204\330\247\331\212\330\255\330\251 \330\247\331\204\331\203\331\204\331\212\330\251 \330\250\330\247\331\204\331\205\331\204\331\204\331\212\330\214 \331\210\330\263\330\267 \330\262\330\255\331\205\330\251 \330\247\331\204\331\203\331\204\331\212\330\251\330\214 \331\210\330\247\331\204\330\252\330\247\330\263\331\203\330\247\330\252\330\214\331\210\330\247\331\204\330\250\330\261\331\210\330\254\331\212\331\203\330\252\330\247\330\252 \330\247\331\204\331\204\331\212 \330\250\330\252\330\263\330\255\331\204\331\206\330\247 <br>\n"
".    \330\247\331\204\331"
                        "\210\330\247\330\255\330\257 \330\250\331\212\330\250\331\202\331\211 \331\205\330\255\330\252\330\247\330\254 \330\255\330\247\330\254\331\207 \330\252\331\204\331\205\331\204\331\207 \330\247\331\204\331\204\331\212\331\204\330\251 \331\210\330\252\330\271\330\261\331\201\331\207 \331\207\331\210 \331\210\330\247\331\202\331\201 \331\201\331\212\331\206 \330\250\330\247\331\204\330\270\330\250\330\267 \331\201\330\247\331\204\330\243\330\250\331\204\331\203\331\212\330\264\331\206 \330\257\331\207 \331\205\330\271\331\205\331\210\331\204 \330\271\330\264\330\247\331\206 \331\212\330\254\331\212\330\250\331\204\331\203 \330\247\331\204\330\256\331\204\330\247\330\265\330\251\330\233 \331\212\330\252\330\247\330\250\330\271 \331\205\330\271\330\247\331\203 \330\247\331\204\330\252\330\247\330\261\330\254\330\252 \330\250\330\252\330\247\330\271\331\203 \330\243\331\210\331\204 \330\250\330\243\331\210\331\204\330\214 \331\212\331\201\331\210\331\202\331\203 \331\204\331\210 \331\205\330\255\330\252\330\247\330"
                        "\254 <br>\n"
"   \330\252\330\264\330\257 \330\255\331\212\331\204\331\203 \330\264\331\210\331\212\330\251\330\214 \331\210\331\212\330\267\331\205\331\206\331\203 \330\245\331\206\331\203 \330\271\331\204\331\211 \331\205\330\247\330\264\331\212 \330\265\330\255 \331\205\331\206 \330\272\331\212\330\261 \331\210\330\261\331\202\330\251 \331\210\331\202\331\204\331\205 \331\210\331\204\330\247 \331\210\330\254\330\271 \330\257\331\205\330\247\330\272. \330\247\331\204\330\261\330\255\331\204\330\251 \330\267\331\210\331\212\331\204\330\251 \331\210\331\205\330\255\330\252\330\247\330\254\330\251 \331\206\331\201\330\263\330\214 \330\263\331\212\330\250 \330\255\330\263\330\250\330\251 \330\247\331\204\330\257\330\261\330\254\330\247\330\252 \331\210\330\247\331\204\330\243\330\261\331\202\330\247\331\205 \330\271\331\204\331\212\331\206\330\247\330\214 \331\210\330\261\331\203\330\262 \330\247\331\206\330\252 \331\201\331\212 \330\267\330\261\331\212\331\202\331\203.<br>\n"
"   \331\210\330\247\331\210\330\271"
                        "\331\211 \330\252\331\206\330\263\331\211 \330\247\331\206 \330\247\331\204\331\200 <span dir=\"ltr\">A+</span> \331\205\330\250\330\252\330\271\331\205\331\204\330\264 \330\261\330\254\330\247\331\204\330\251 .. \330\247\331\204\330\261\330\254\330\247\331\204\330\251 \331\207\331\212 \330\247\331\204\331\204\331\212 \330\250\330\252\330\271\331\205\331\204 \330\247\331\204\331\200 <span dir=\"ltr\">A+</span>\n"
"</div>", nullptr));
        about_message->setProperty("style_type", QVariant(QCoreApplication::translate("MainWindow", "about", nullptr)));
#if QT_CONFIG(tooltip)
        github->setToolTip(QCoreApplication::translate("MainWindow", "\330\264\331\203\331\204\331\212 \331\212\330\264\330\261\331\201 \331\210\330\247\331\204\331\206\330\250\331\212\330\237", nullptr));
#endif // QT_CONFIG(tooltip)
        github->setText(QString());
        github->setProperty("case", QVariant(QCoreApplication::translate("MainWindow", "social_media", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
