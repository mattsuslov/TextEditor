#include "dialogmuliplyinsert.h"
#include "ui_dialogmuliplyinsert.h"

#include <algorithm>

DialogMuliplyInsert::DialogMuliplyInsert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMuliplyInsert)
{
    ui->setupUi(this);
}

DialogMuliplyInsert::~DialogMuliplyInsert()
{
    delete ui;
}

void DialogMuliplyInsert::on_buttonBox_accepted()
{
    int row = ui->spinBox->value();
    row = std::min(int(TextContainer::text.size()), row);
    QString buffer = "";
    buffer.reserve(100);
    for (int i = 0; i < ui->textEdit->toPlainText().size(); ++i) {
        if (ui->textEdit->toPlainText().at(i) == '\n') {
            TextContainer::insertString(buffer, row);
            buffer = "";
            ++row;
        } else {
            buffer += ui->textEdit->toPlainText().at(i);
        }
    }
    if (buffer != "") {
        TextContainer::insertString(buffer, row);
    }
}
