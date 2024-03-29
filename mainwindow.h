/**
  Katherine Wang
  Assignment 5
  Description: Main window
  */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();                   ///< Pushbutton Begin that starts the game when clicked

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
