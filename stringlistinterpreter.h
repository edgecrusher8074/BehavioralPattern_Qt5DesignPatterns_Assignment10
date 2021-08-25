#pragma once

#include <QString>
#include <QStringList>

class StringListInterpreter
{
public:
    static QStringList toList(const QString& text);

    static QString toString(const QStringList& list);

};



