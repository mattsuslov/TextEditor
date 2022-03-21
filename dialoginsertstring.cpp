#include "dialoginsertstring.h"
#include "ui_dialoginsertstring.h"

#include <algorithm>

DialogInsertString::DialogInsertString(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInsertString)
{
    ui->setupUi(this);
}

DialogInsertString::~DialogInsertString()
{
    delete ui;
}

void DialogInsertString::on_buttonBox_accepted()
{
    TextContainer::insertString(ui->lineEdit->text(), std::min(int(TextContainer::text.size()), ui->spinBox->value()));
}

