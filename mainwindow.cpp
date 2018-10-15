#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(1000,900);
    setStyleSheet("background: #befabe");
//    mainLabel = new QLabel(this);
//    mainLabel->setGeometry(5,5,990,750);
//    mainLabel->setStyleSheet("background: #bfcaff");


    rogueLabel = new QLabel(this);
    QPixmap roguePixmap("sprites/standing/my_elf_rogue.PNG");

    rogueLabel->setPixmap(roguePixmap);
    rogueLabel->setGeometry(50,350,200,500);

    pose = 0;

    QTimer *timer = new QTimer(this);
//    connect(timer, SIGNAL(timeout()), this, SLOT(animation()));
//    timer->start(1000);

//    switch(pose)
//    {
//     case 0 :
//        while(!stateChanged())
//        {

//            roguePixmap.load("sprites/standing/my_elf_rogue.PNG");

//            roguePixmap.load("sprites/standing/standing2.PNG");

//            roguePixmap.load("sprites/standing/standing3.PNG");

//            roguePixmap.load("sprites/standing/standing4.PNG");
//        }
//    }






}

MainWindow::~MainWindow()
{

}

void MainWindow::standing()
{

}

bool MainWindow::stateChanged()
{
    return true;
}

void MainWindow::animation()
{

}
