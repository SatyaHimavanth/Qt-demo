#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(&mainPage);
    layout->addWidget(&logBox);
    setLayout(layout);

    connect(&mainPage, &MainPage::buttonClicked, this, &MainWindow::logButtonClick);
}

void MainWindow::logButtonClick(int buttonIndex) {
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString buttonName = button ? button->text() : QString("Button %1").arg(buttonIndex);
    logBox.appendPlainText(QString("Button clicked: %1").arg(buttonName));
}
