#include "stringlistinterpreter.h"

QStringList StringListInterpreter::toList(const QString &text)
{
    return text.split(" ");
}

QString StringListInterpreter::toString(const QStringList &list)
{
    return list.join(" ");
}
