#ifndef DIALOGDELETEGROUPS_H
#define DIALOGDELETEGROUPS_H

#include <QDialog>
#include "textcontainer.h"

namespace Ui {
class DialogDeleteGroups;
}

class DialogDeleteGroups : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDeleteGroups(QWidget *parent = nullptr);
    ~DialogDeleteGroups();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogDeleteGroups *ui;
};

#endif // DIALOGDELETEGROUPS_H
