#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->FileNameGroup->setVisible(0);
    ui->ArchGroup->setVisible(0);
    ui->StartBtn->setVisible(0);
    connect(ui->crypt,SIGNAL(toggled()),this,SLOT(on_crypt_toggled()));
    connect(ui->uncrypt,SIGNAL(toggled()),this,SLOT(on_uncrypt_toggled()));
    connect(ui->print,SIGNAL(toggled()),this,SLOT(on_print_toggled()));
    connect(ui->del,SIGNAL(toggled()),this,SLOT(on_del_toggled()));
    connect(ui->StartBtn,SIGNAL(released()),this,SLOT(on_StartBtn_released()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_crypt_toggled()
{
    key = 1;
    ui->StartBtn->setVisible(1);
    ui->FileNameGroup->setVisible(1);
    ui->ArchGroup->setVisible(1);
}

void MainWindow::on_uncrypt_toggled()
{
    key = 2;
    ui->StartBtn->setVisible(1);
    ui->FileNameGroup->setVisible(1);
    ui->ArchGroup->setVisible(1);
}

void MainWindow::on_print_toggled()
{
    key = 3;
    ui->StartBtn->setVisible(1);
    ui->FileNameGroup->setVisible(1);
    ui->ArchGroup->setVisible(0);
}

void MainWindow::on_del_toggled()
{
    key = 4;
    ui->StartBtn->setVisible(1);
    ui->FileNameGroup->setVisible(1);
    ui->ArchGroup->setVisible(0);
}

void MainWindow::on_StartBtn_released()
{
    QString Fname = ui->FileName->text();
    QString Aname = ui->ArchName->text();
    QByteArray qbfname = Fname.toLocal8Bit();
    QByteArray qbaname = Aname.toLocal8Bit();
    char* f = qbfname.data();
    char* ar = qbaname.data();
    int k;
    if(key == 4){
        k = spawnl(_P_WAIT,"C:\\Users\\User\\Desktop\\GrTst\\shell\\kernel.exe","kernel.exe","-r",f,NULL);

    }else
    if(key == 3){
        k = spawnl(_P_WAIT,"C:\\Users\\User\\Desktop\\GrTst\\shell\\kernel.exe","kernel.exe","-m",f,NULL);

    }else
    if(key == 1){
        k = spawnl(_P_WAIT,"C:\\Users\\User\\Desktop\\GrTst\\shell\\kernel.exe","kernel.exe","-p",f,ar,NULL);

    }else
    if(key == 2){
        k = spawnl(_P_WAIT,"C:\\Users\\User\\Desktop\\GrTst\\shell\\kernel.exe","kernel.exe","-u",ar,f,NULL);

    }
}
