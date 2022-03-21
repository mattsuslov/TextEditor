#include "dialogchangesubstring.h"
#include "ui_dialogchangesubstring.h"


DialogChangeSubstring::DialogChangeSubstring(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogChangeSubstring)
{
    ui->setupUi(this);
}

DialogChangeSubstring::~DialogChangeSubstring()
{
    delete ui;
}

void DialogChangeSubstring::on_buttonBox_accepted()
{
    QString from = ui->lineEdit->text();
    QString to = ui->lineEdit_2->text();
    std::vector<QString>& txt = TextContainer::text;
    for (size_t i = 0; i < txt.size(); ++i) {
        txt[i].replace(from, to);
    }
}
