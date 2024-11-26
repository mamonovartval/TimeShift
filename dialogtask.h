#ifndef DIALOGTASK_H
#define DIALOGTASK_H

#include <QDialog>
#include "task.h"

namespace Ui {
class DialogTask;
}

class DialogTask : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTask(QWidget *parent = nullptr);
    ~DialogTask();

    const Task &task() const;
    void setTask(const Task &newTask);

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::DialogTask *ui;    
    Task m_task;
};

#endif // DIALOGTASK_H
