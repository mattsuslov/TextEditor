#ifndef DIALOGINSERTSTRING_H
#define DIALOGINSERTSTRING_H

#pragma once

#include <QTextEdit>
#include <QDialog>
#include "textcontainer.h"

namespace Ui {
class DialogInsertString;
}

class DialogInsertString : public QDialog
{
    Q_OBJECT

public:
    explicit DialogInsertString(QWidget *parent = nullptr);
    ~DialogInsertString();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogInsertString *ui;
};

#endif // DIALOGINSERTSTRING_H
