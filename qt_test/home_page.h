#ifndef HOME_PAGE_H
#define HOME_PAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class home_page;
}
QT_END_NAMESPACE

class home_page : public QMainWindow
{
    Q_OBJECT

public:
    home_page(QWidget *parent = nullptr);
    ~home_page();

private:
    Ui::home_page *ui;
};
#endif // HOME_PAGE_H
