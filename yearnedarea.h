#ifndef YEARNEDAREA_H
#define YEARNEDAREA_H
#include <QString>
enum Priority {
    BLUE, GREEN, YELLOW, RED
};

class YearnedArea
{
    Priority priority;
    int progress;
    int target;
    QString title;

public:
    //Constructors
    YearnedArea();
    YearnedArea(Priority, int, int, QString);

    //Setters & Getters
    void setPriority(Priority);
    Priority getPriority();

    void setProgress(int);
    int getProgress();

    void setTarget(int);
    int getTarget();

    void setTitle(QString);
    QString getTitle();

    //Functions
    float getIndex();
    void addProgress(int);
    int getPercent();
    void printInfo();
};

#endif // YEARNEDAREA_H
