#ifndef DIALOGDELETESTRING_H
#define DIALOGDELETESTRING_H

#include <QDialog>
#include "textcontainer.h"

namespace Ui {
class DialogDeleteString;
}

class DialogDeleteString : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDeleteString(QWidget *parent = nullptr);
    ~DialogDeleteString();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogDeleteString *ui;
};

#endif // DIALOGDELETESTRING_H
