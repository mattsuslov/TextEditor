#ifndef DIALOGMULIPLYINSERT_H
#define DIALOGMULIPLYINSERT_H

#include <QDialog>
#include "textcontainer.h"

namespace Ui {
class DialogMuliplyInsert;
}

class DialogMuliplyInsert : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMuliplyInsert(QWidget *parent = nullptr);
    ~DialogMuliplyInsert();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogMuliplyInsert *ui;
};

#endif // DIALOGMULIPLYINSERT_H
