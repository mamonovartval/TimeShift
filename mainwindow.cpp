#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newTask()
{

}

void MainWindow::init()
{
    //remind();

}

void MainWindow::load()
{
    //QStandardItem
}

void MainWindow::remind()
{
    QTime zero = QTime(0,0,0,0);
    QTime t = m_pause;
    while(t != zero)
    {
        t = t.addSecs(-1);
    }

    QMessageBox::information(this, "Remind You", "You haven't did anything useful still!!! Come On!!!");
}

void MainWindow::on_actionNew_Task_triggered()
{
    DialogTask *dt = new DialogTask(this);
    dt->exec();

    m_task = dt->task();

    qDebug() << "Task of counter: " << m_task.getCount();
    qDebug() << "Task of date: " << m_task.getDate();
    qDebug() << "Task notes: " << m_task.getNotes();
    qDebug() << "Task starts: " << m_task.getStart();
    qDebug() << "Tasl stops: " << m_task.getFinish();
    qDebug() << "Task duration: " << m_task.getDuration();

    delete dt;
}

