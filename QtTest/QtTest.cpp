// QtTest.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <QApplication>
#include "finddialog.h"

int main(int argc, char *argv[])
{
        QApplication app(argc, argv);
        FindDialog *dialog = new FindDialog;
        dialog->show();
        return app.exec();
}