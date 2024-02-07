#include "subpage.h"
#include "ui_subpage.h"

SubPage::SubPage(int pageNumber, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubPage)
{
    ui->setupUi(this);
    setWindowTitle("SubPage " + QString::number(pageNumber));
}

SubPage::~SubPage()
{
    delete ui;
}
