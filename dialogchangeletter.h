#ifndef DIALOGCHANGELETTER_H
#define DIALOGCHANGELETTER_H

#include <QDialog>
#include "textcontainer.h"

namespace Ui {
class DialogChangeLetter;
}

class DialogChangeLetter : public QDialog
{
    Q_OBJECT

public:
    explicit DialogChangeLetter(QWidget *parent = nullptr);
    ~DialogChangeLetter();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogChangeLetter *ui;
};

#endif // DIALOGCHANGELETTER_H
