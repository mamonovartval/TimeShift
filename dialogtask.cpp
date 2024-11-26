#include "dialogtask.h"
#include "ui_dialogtask.h"

DialogTask::DialogTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTask)
{
    ui->setupUi(this); 
}

DialogTask::~DialogTask()
{
    delete ui;
}

void DialogTask::on_buttonBox_accepted()
{
    m_task.setDate(ui->dtDateTask->date());
    m_task.setNotes(ui->txtDescription->toPlainText());
    m_task.setStart(ui->tmStartTask->time());
    m_task.setFinish(ui->tmStopTask->time());
    m_task.setDuration();
    accept();
}


void DialogTask::on_buttonBox_rejected()
{
    reject();
}

const Task &DialogTask::task() const
{
    return m_task;
}

void DialogTask::setTask(const Task &newTask)
{
    m_task = newTask;

    ui->lblTaskNumber->setText(m_task.getCount());
    ui->dtDateTask->setDate(m_task.getDate());
    ui->txtDescription->setPlainText(m_task.getNotes());
    ui->tmStartTask->setTime(m_task.getStart());
    ui->tmStopTask->setTime(m_task.getFinish());
}
