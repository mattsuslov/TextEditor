#ifndef EDITORWINDOW_H
#define EDITORWINDOW_H

#pragma once

#include <QMainWindow>
#include "textcontainer.h"
#include "dialoginsertstring.h"
#include "dialogmuliplyinsert.h"
#include "dialogdeletestring.h"
#include "dialoginsertsubstring.h"
#include "dialogchangeletter.h"
#include "dialogchangesubstring.h"
#include "dialogcompessnumbers.h"
#include "dialogdeletegroups.h"

QT_BEGIN_NAMESPACE
namespace Ui { class EditorWindow; }
QT_END_NAMESPACE


class EditorWindow : public QMainWindow
{
    Q_OBJECT

public:
    EditorWindow(QWidget *parent = nullptr);
    ~EditorWindow();

private slots:
    void on_actionInsert_string_triggered();

    void on_actionInsert_many_strings_triggered();

    void on_actionDelete_string_triggered();

    void on_actionInsert_substring_triggered();

    void on_actionChange_letter_triggered();

    void on_actionChange_substring_triggered();

    void on_actionCompress_numbers_triggered();

    void on_actionMake_cool_number_sequance_triggered();

    void on_actionChange_stars_triggered();

    void on_actionDelete_groups_triggered();

    void on_textEdit_textChanged();

private:
    Ui::EditorWindow *ui;
};
#endif // EDITORWINDOW_H
