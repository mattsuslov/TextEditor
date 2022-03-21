#include "dialogcompessnumbers.h"
#include "ui_dialogcompessnumbers.h"
#include <algorithm>

DialogCompessNumbers::DialogCompessNumbers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCompessNumbers)
{
    ui->setupUi(this);
}

DialogCompessNumbers::~DialogCompessNumbers()
{
    delete ui;
}

void DialogCompessNumbers::on_buttonBox_accepted()
{
    std::vector<QString>& txt = TextContainer::text;
    int from = ui->spinBox->value()-1, to = std::min(ui->spinBox_2->value()-1, int(txt.size()));
    for (int i = from; i < to; ++i) {
        bool changing = true;
        for (int j = 0; j < txt[i].size()-1; ) {
            if (!(txt[i][j] >= '0' && txt[i][j] <= '9')) changing = true;
            if (txt[i][j] >= '1' && txt[i][j] <= '9') changing = false;
            if (changing && txt[i][j] == '0' && txt[i][j+1] >= '0' && txt[i][j+1] <= '9') {
                txt[i].remove(j, 1);
            } else {
                ++j;
            }
        }
    }
}
