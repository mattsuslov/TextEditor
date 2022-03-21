#include "editorwindow.h"
#include "ui_editorwindow.h"

EditorWindow::EditorWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EditorWindow)
{
    ui->setupUi(this);
}

EditorWindow::~EditorWindow()
{
    delete ui;
}


void EditorWindow::on_actionInsert_string_triggered()
{
    TextContainer::setText(ui->textEdit->toPlainText());
    DialogInsertString dialog;
    dialog.setModal(true);
    dialog.exec();
    ui->textEdit->setPlainText(TextContainer::getText());
}

void EditorWindow::on_actionInsert_many_strings_triggered()
{
    TextContainer::setText(ui->textEdit->toPlainText());
    DialogMuliplyInsert dialog;
    dialog.setModal(true);
    dialog.exec();
    ui->textEdit->setPlainText(TextContainer::getText());
}

void EditorWindow::on_actionDelete_string_triggered()
{
    TextContainer::setText(ui->textEdit->toPlainText());
    DialogDeleteString dialog;
    dialog.setModal(true);
    dialog.exec();
    ui->textEdit->setPlainText(TextContainer::getText());
}

void EditorWindow::on_actionInsert_substring_triggered()
{
    TextContainer::setText(ui->textEdit->toPlainText());
    DialogInsertSubstring dialog;
    dialog.setModal(true);
    dialog.exec();
    ui->textEdit->setPlainText(TextContainer::getText());
}

void EditorWindow::on_actionChange_letter_triggered()
{
    TextContainer::setText(ui->textEdit->toPlainText());
    DialogChangeLetter dialog;
    dialog.setModal(true);
    dialog.exec();
    ui->textEdit->setPlainText(TextContainer::getText());
}

void EditorWindow::on_actionChange_substring_triggered()
{
    TextContainer::setText(ui->textEdit->toPlainText());
    DialogChangeSubstring dialog;
    dialog.setModal(true);
    dialog.exec();
    ui->textEdit->setPlainText(TextContainer::getText());
}

void EditorWindow::on_actionCompress_numbers_triggered()
{
    TextContainer::setText(ui->textEdit->toPlainText());
    DialogCompessNumbers dialog;
    dialog.setModal(true);
    dialog.exec();
    ui->textEdit->setPlainText(TextContainer::getText());
}

void EditorWindow::on_actionMake_cool_number_sequance_triggered()
{
    TextContainer::setText(ui->textEdit->toPlainText());
    std::vector<QString>& txt = TextContainer::text;
    for (size_t i = 0; i < txt.size(); ++i) {
        QString& str = txt[i];
        int enter_index = -1;
        bool del = false;
        for (int j = 1; j < str.size(); ++j) {
            if (str[j].isDigit() && str[j-1].isDigit()) {
                if (enter_index == -1) enter_index = j - 1;
                if (str[j] <= str[j-1]) {
                    del = true;
                }
            } else {
                if (enter_index != -1 && del) {
                    str.remove(enter_index, j - enter_index);
                    j = enter_index-1;
                }
                enter_index = -1;
                del = false;
            }
        }
        if (enter_index != -1 && del) {
            str.remove(enter_index, str.size() - enter_index);
        }
    }
    ui->textEdit->setPlainText(TextContainer::getText());
}

void EditorWindow::on_actionChange_stars_triggered()
{
    TextContainer::setText(ui->textEdit->toPlainText());
    std::vector<QString>& txt = TextContainer::text;
    for (size_t i = 0; i < txt.size(); ++i) {
        QString& str = txt[i];
        int enter_index = -1;
        bool del = false;
        for (int j = 1; j < str.size(); ++j) {
            if (str[j] == '*' && str[j-1] == '*') {
                if (enter_index == -1) enter_index = j - 1;
                if (str[j] <= str[j-1]) {
                    del = true;
                }
            } else {
                if (enter_index != -1 && del) {
                    str.replace(enter_index, j - enter_index, QString((j - enter_index)/2, '+'));
                    j = enter_index-1;
                }
                enter_index = -1;
                del = false;
            }
        }
        if (enter_index != -1 && del) {
            str.replace(enter_index, str.size() - enter_index, QString((str.size() - enter_index)/2, '+'));
        }
    }
    ui->textEdit->setPlainText(TextContainer::getText());
}

void EditorWindow::on_actionDelete_groups_triggered()
{
    TextContainer::setText(ui->textEdit->toPlainText());
    DialogDeleteGroups dialog;
    dialog.setModal(true);
    dialog.exec();
    ui->textEdit->setPlainText(TextContainer::getText());
}

void EditorWindow::on_textEdit_textChanged()
{
//    int tmp = ui->textEdit->toPlainText().size();
//    if (tmp % 80 == 1 && tmp != 1) {
//        TextContainer::setText(ui->textEdit->toPlainText());
//        ui->textEdit->setText(TextContainer::getText());
//    }
}
