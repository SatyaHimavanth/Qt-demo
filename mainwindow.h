#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QPlainTextEdit>
#include "mainpage.h"

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

public slots:
    void logButtonClick(int buttonIndex);

private:
    MainPage mainPage;
    QPlainTextEdit logBox;
};

#endif // MAINWINDOW_H
