#ifndef TEXTCONTAINER_H
#define TEXTCONTAINER_H

#pragma once
#include <QString>
#include <vector>

class TextContainer
{
public:
    TextContainer();

    static void insertString(const QString& str, int n);
    static void deleteString(int n);
    static void setText(const QString& text);
    static QString getText();
    static std::vector<QString> text;
};

#endif // TEXTCONTAINER_H
