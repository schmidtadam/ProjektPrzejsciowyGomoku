/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    GLWidget *pole;
    QLabel *tekst;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QPushButton *b2;
    QVBoxLayout *verticalLayout;
    QPushButton *b3;
    QPushButton *b1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(640, 518);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pole = new GLWidget(centralWidget);
        pole->setObjectName(QStringLiteral("pole"));
        pole->setGeometry(QRect(10, 10, 501, 501));
        tekst = new QLabel(centralWidget);
        tekst->setObjectName(QStringLiteral("tekst"));
        tekst->setGeometry(QRect(530, 450, 111, 31));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(517, 90, 120, 107));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        b2 = new QPushButton(widget);
        b2->setObjectName(QStringLiteral("b2"));

        verticalLayout_2->addWidget(b2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        b3 = new QPushButton(widget);
        b3->setObjectName(QStringLiteral("b3"));

        verticalLayout->addWidget(b3);

        b1 = new QPushButton(widget);
        b1->setObjectName(QStringLiteral("b1"));

        verticalLayout->addWidget(b1);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Siema", 0));
        tekst->setText(QApplication::translate("MainWindow", "Domy\305\233lna strategia", 0));
        label->setText(QApplication::translate("MainWindow", "Poziom trudno\305\233ci", 0));
        b2->setText(QApplication::translate("MainWindow", "\305\201atwy", 0));
        b3->setText(QApplication::translate("MainWindow", "Normalny", 0));
        b1->setText(QApplication::translate("MainWindow", "Piek\305\202o", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
