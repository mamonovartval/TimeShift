#ifndef TASK_H
#define TASK_H

#include <QObject>
#include <QString>
#include <QDate>
#include <QTime>

class Task
{  
public:
    const QString &getCount() const;
    void setCount(const QString &newCount);

    const QDate &getDate() const;
    void setDate(const QDate &newDate);

    const QString &getNotes() const;
    void setNotes(const QString &newNotes);

    const QTime &getStart() const;
    void setStart(const QTime &newStart);

    const QTime &getFinish() const;
    void setFinish(const QTime &newFinish);

    const QTime &getDuration() const;
    void setDuration();

private:
    QString count;
    QDate date;
    QString notes;
    QTime start;
    QTime finish;
    QTime duration;
};

#endif // TASK_H
