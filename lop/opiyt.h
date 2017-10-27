#ifndef OPIYT_H
#define OPIYT_H

#include <QMainWindow>

namespace Ui {
class opiyt;
}

class opiyt : public QMainWindow
{
    Q_OBJECT

public:
    explicit opiyt(QWidget *parent = 0);
    ~opiyt();

private:
    Ui::opiyt *ui;
};

#endif // OPIYT_H
