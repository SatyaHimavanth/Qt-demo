#ifndef SUBPAGE_H
#define SUBPAGE_H

#include <QWidget>

namespace Ui {
class SubPage;
}

class SubPage : public QWidget
{
    Q_OBJECT

public:
    explicit SubPage(int pageNumber, QWidget *parent = nullptr);
    ~SubPage();

private:
    Ui::SubPage *ui;
};

#endif // SUBPAGE_H
