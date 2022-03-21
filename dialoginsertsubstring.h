#ifndef DIALOGINSERTSUBSTRING_H
#define DIALOGINSERTSUBSTRING_H

#include <QDialog>
#include "textcontainer.h"

namespace Ui {
class DialogInsertSubstring;
}

class DialogInsertSubstring : public QDialog
{
    Q_OBJECT

public:
    explicit DialogInsertSubstring(QWidget *parent = nullptr);
    ~DialogInsertSubstring();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogInsertSubstring *ui;
};

#endif // DIALOGINSERTSUBSTRING_H
