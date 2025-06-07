#include "yearnedarea.h"
#include <QDebug>
YearnedArea::YearnedArea() {}

YearnedArea::YearnedArea(Priority p, int prog, int tar, QString t)
{
    priority = p;
    progress = prog;
    target = tar;
    title = t;
}

void YearnedArea::setPriority(Priority p)
{
    priority = p;
}

Priority YearnedArea::getPriority()
{
    return priority;
}

void YearnedArea::setProgress(int p)
{
    progress = p;
}

int YearnedArea::getProgress()
{
    return progress;
}

void YearnedArea::setTarget(int t)
{
    target = t;
}

int YearnedArea::getTarget()
{
    return target;
}

void YearnedArea::setTitle(QString t)
{
    title = t;
}

QString YearnedArea::getTitle()
{
    return title;
}

float YearnedArea::getIndex()
{
    int prio = priority;
    float index = ((prio+1)/4.0) * ((60*target - progress)/(60.0*target));
    return index;
}

void YearnedArea::addProgress(int add)
{
    progress += add;
}

int YearnedArea::getPercent()
{
    if(((progress)/(60.0*target))*100 > 100)
        return 100;
    return ((progress)/(60.0*target))*100;
}

void YearnedArea::printInfo()
{
    qDebug() << "Title: " << title;
    qDebug() << "Progress: " << QString::number(progress);
    qDebug() << "Target: " << QString::number(target);
    qDebug() << "Percent: " << QString::number(getPercent());
    qDebug() << "Priority: " << QString::number(priority);
}
