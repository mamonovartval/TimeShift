#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "dialogtask.h"
#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void newTask();
    void on_actionNew_Task_triggered();

private:
    Ui::MainWindow *ui;

    Task m_task;
    int m_countTask = 0;

    QTime m_pause = QTime(0,1,0,0);

    void init();
    void load();
    void remind();
};
#endif // MAINWINDOW_H
