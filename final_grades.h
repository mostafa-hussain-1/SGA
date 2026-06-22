#ifndef FINAL_GRADES_H
#define FINAL_GRADES_H

#include <QDialog>

namespace Ui {
class final_grades;
}

class final_grades : public QDialog
{
    Q_OBJECT

public:
    explicit final_grades(QWidget *parent = nullptr);
    ~final_grades();

private slots:

    void on_pushButton_clicked();

private:
    Ui::final_grades *ui;
    void load();
};

#endif // FINAL_GRADES_H
