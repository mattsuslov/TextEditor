#include "dialogdeletegroups.h"
#include "ui_dialogdeletegroups.h"

#include <QRegularExpression>

DialogDeleteGroups::DialogDeleteGroups(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDeleteGroups)
{
    ui->setupUi(this);
}

DialogDeleteGroups::~DialogDeleteGroups()
{
    delete ui;
}

void DialogDeleteGroups::on_buttonBox_accepted()
{
    std::vector<QString>& txt = TextContainer::text;
    if (int(txt.size()) <= ui->spinBox->value()-1) return;
    txt[ui->spinBox->value()-1].remove(QRegularExpression("{.*}"));
}
