#ifndef DIALOGCHANGESUBSTRING_H
#define DIALOGCHANGESUBSTRING_H

#include <QDialog>
#include "textcontainer.h"

namespace Ui {
class DialogChangeSubstring;
}

class DialogChangeSubstring : public QDialog
{
    Q_OBJECT

public:
    explicit DialogChangeSubstring(QWidget *parent = nullptr);
    ~DialogChangeSubstring();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogChangeSubstring *ui;
};

#endif // DIALOGCHANGESUBSTRING_H
