#include <QCoreApplication>

/**
 * @brief Assignment 10 for Qt5 Design Patterns Tutorial on Udemy.
 * @details Simple application to demonstrate how to use the interpreter pattern.
 * @author edgecrusher8074
 */

#include "stringlistinterpreter.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    auto list = StringListInterpreter::toList("I am busy compiling stuff");
    qDebug() << list;

    auto str = StringListInterpreter::toString(list);
    qDebug() << str;

    return a.exec();
}
