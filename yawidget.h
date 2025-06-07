#ifndef YAWIDGET_H
#define YAWIDGET_H

#include <QWidget>
#include "yearnedarea.h"
namespace Ui {
class YAwidget;
}

class YAwidget : public QWidget
{
    Q_OBJECT
    YearnedArea* YA;

public:
    explicit YAwidget(QWidget *parent = nullptr, YearnedArea* = nullptr);
    ~YAwidget();

private slots:
    void on_addBtn_clicked();

private:
    Ui::YAwidget *ui;
};

#endif // YAWIDGET_H
