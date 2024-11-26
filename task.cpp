#include "task.h"


const QString &Task::getCount() const
{
    return count;
}

void Task::setCount(const QString &newCount)
{
    count = newCount;
}

const QDate &Task::getDate() const
{
    return date;
}

void Task::setDate(const QDate &newDate)
{
    date = newDate;
}

const QString &Task::getNotes() const
{
    return notes;
}

void Task::setNotes(const QString &newNotes)
{
    notes = newNotes;
}

const QTime &Task::getStart() const
{
    return start;
}

void Task::setStart(const QTime &newStart)
{
    start = newStart;
}

const QTime &Task::getFinish() const
{
    return finish;
}

void Task::setFinish(const QTime &newFinish)
{
    finish = newFinish;
}

const QTime &Task::getDuration() const
{
    return duration;
}

void Task::setDuration()
{
    int h = this->finish.hour() - start.hour();
    int m = this->finish.minute() - start.minute();
    int s = this->finish.second() - start.second();
    int ms = this->finish.msec() - start.msec();
//duration should count in one units for example in seconds
    duration = QTime(h,m,s,ms);
}
