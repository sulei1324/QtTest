#include "stdafx.h"
#ifndef FINDDIALOG_H
#define FINDDIALOG_H
#include <QtGui>
#include <QApplication>
#include <QtCore>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class FindDialog : public QDialog{
    Q_OBJECT
public:
    FindDialog(QWidget *parent = 0);
    ~FindDialog();

signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void findClicked();
    void enableFindButton(const QString &test);
private:
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;
    QPushButton *findButton;
    QPushButton *closeButton;
};

#endif