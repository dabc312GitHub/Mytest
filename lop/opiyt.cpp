#include "opiyt.h"
#include "ui_opiyt.h"

opiyt::opiyt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::opiyt)
{
    ui->setupUi(this);
}

opiyt::~opiyt()
{
    delete ui;
}
