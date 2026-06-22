#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QDesktopServices>
#include <QUrl>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *networkManager;
    QString download_link;
private slots:
    void update_dashBoard();
    void fixed_properties();
    void clear_dashBoard_inputs();
    void on_add_button_clicked();
    void on_edit_course_clicked();
    void on_delete_btn_clicked();
    void on_dashboard_clicked();
    void on_current_semester_clicked();
    void on_about_clicked();
    void onNetworkReply(QNetworkReply *reply);
    void check_updates();
    void on_updateBtn_clicked();
    void on_add_button_2_clicked();
    void on_has_practical_checkStateChanged(const Qt::CheckState &arg1);

    void update_semester_progress();
    void clear_sem_progress_input();
    void on_target_textBox_editingFinished();
    void on_linkedin_clicked();
    void on_github_clicked();
    void on_complaints_clicked();
    void on_edit_course_2_clicked();
    void on_delete_btn_2_clicked();
    void on_submit_clicked();
};
#endif // MAINWINDOW_H
