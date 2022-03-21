#ifndef DIALOGCOMPESSNUMBERS_H
#define DIALOGCOMPESSNUMBERS_H

#include <QDialog>
#include "textcontainer.h"

namespace Ui {
class DialogCompessNumbers;
}

class DialogCompessNumbers : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCompessNumbers(QWidget *parent = nullptr);
    ~DialogCompessNumbers();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogCompessNumbers *ui;
};

#endif // DIALOGCOMPESSNUMBERS_H
