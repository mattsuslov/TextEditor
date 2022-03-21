#include "textcontainer.h"

TextContainer::TextContainer()
{

}

std::vector<QString> TextContainer::text;

QString TextContainer::getText() {
    QString res;
    for (size_t i = 0; i < TextContainer::text.size(); ++i) {
        res.append(TextContainer::text[i]);
        res += '\n';
    }
    return res;
}

void TextContainer::setText(const QString& t) {
    TextContainer::text.clear();
    QString buffer = "";
    buffer.reserve(80);
    for (int i = 0; i < t.size(); ++i) {
        if (t[i] == '\n') {
//            if (t[i] == '\n') {
//                while (buffer.size() != 80) {
//                    buffer.append(QString(80 - buffer.size(), ' '));
//                }
//            }
            TextContainer::text.push_back(buffer);
            buffer = "";
        } else {
            buffer += t[i];
        }
    }
    if (buffer != "") {
        while (buffer.size() != 80) {
            buffer.append(QString(80 - buffer.size(), ' '));
        }
        TextContainer::text.push_back(buffer);
    }
}

void TextContainer::insertString(const QString& str, int n) {
    TextContainer::text.insert(TextContainer::text.begin() + n, str);
}

void TextContainer::deleteString(int n) {
    TextContainer::text.erase(TextContainer::text.begin() + n - 1);
}
