#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGridLayout>
#include "yawidget.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    YearnedArea* area1 = new YearnedArea(RED, 0, 4, "College");
    YearnedArea* area2 = new YearnedArea(RED, 30, 5, "Art");
    YAwidget* area1w = new YAwidget(this, area1);
    YAwidget* area2w = new YAwidget(this, area2);
    ui->VLayout->addWidget(area1w);
    ui->VLayout->addWidget(area2w);

}

MainWindow::~MainWindow()
{
    delete ui;
}
