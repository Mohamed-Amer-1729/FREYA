#include "yawidget.h"
#include "ui_yawidget.h"

using namespace std;

YAwidget::YAwidget(QWidget *parent, YearnedArea* ya)
    : QWidget(parent)
    , ui(new Ui::YAwidget)
{
    YA = ya;
    ui->setupUi(this);
    ui->GroupBox->setTitle(YA->getTitle());
    float done = YA->getProgress() / 60.0;
    QString Progress = "Progress: " + QString::number(done) + " / " + QString::number(YA->getTarget());
    ui->ProgresLabel->setText(Progress);
    ui->progressBar->setRange(0, 100);
    ui->progressBar->setValue(YA->getPercent());
}

YAwidget::~YAwidget()
{
    delete ui;
}



void YAwidget::on_addBtn_clicked()
{
    bool num = false;
    auto thing = ui->progressAdd->text().toInt(&num);
    if(num){
        YA->addProgress(thing);
        qDebug ("Working");
        YA->printInfo();
        ui->progressBar->setValue(YA->getPercent());
        float done = YA->getProgress() / 60.0;
        QString FP = QString::number(done, 'f',2);
        QString Progress = "Progress: " + FP + " / " + QString::number(YA->getTarget());
        ui->ProgresLabel->setText(Progress);
    }else{
        qDebug("Not working");
    }
}


