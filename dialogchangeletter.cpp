#include "dialogchangeletter.h"
#include "ui_dialogchangeletter.h"

DialogChangeLetter::DialogChangeLetter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogChangeLetter)
{
    ui->setupUi(this);
}

DialogChangeLetter::~DialogChangeLetter()
{
    delete ui;
}

void DialogChangeLetter::on_buttonBox_accepted()
{
    int row = ui->spinBox->value();
    int col = ui->spinBox_2->value();
    if (row-1 >= TextContainer::text.size() || col-1 >=  TextContainer::text[row-1].size()) return;
    TextContainer::text[row-1][col-1] = ui->lineEdit->text().at(0);
}
