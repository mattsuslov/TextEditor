#include "dialoginsertsubstring.h"
#include "ui_dialoginsertsubstring.h"

#include <algorithm>

DialogInsertSubstring::DialogInsertSubstring(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInsertSubstring)
{
    ui->setupUi(this);
}

DialogInsertSubstring::~DialogInsertSubstring()
{
    delete ui;
}

void DialogInsertSubstring::on_buttonBox_accepted()
{
    int row = ui->spinBox->value();
    int col = ui->spinBox_2->value();
    QString str = ui->lineEdit->text();
    row--;
    col--;
    if (TextContainer::text.size()) return;
    QString& src = TextContainer::text[row];
    src.insert(std::min(col, str.size()), str);
}
