#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QPalette>
#include <QTimer>


class MainWindow : public QMainWindow
{
    Q_OBJECT

    QLabel  *mainLabel;
    QLabel *rogueLabel;
    int pose;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void standing();

public slots:
    bool stateChanged();
    void animation();
};

#endif // MAINWINDOW_H
