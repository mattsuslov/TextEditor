#include "dialogdeletestring.h"
#include "ui_dialogdeletestring.h"

DialogDeleteString::DialogDeleteString(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDeleteString)
{
    ui->setupUi(this);
}

DialogDeleteString::~DialogDeleteString()
{
    delete ui;
}

void DialogDeleteString::on_buttonBox_accepted()
{
    if (TextContainer::text.size() <= ui->spinBox->value()) return;
    TextContainer::deleteString(ui->spinBox->value());
}
