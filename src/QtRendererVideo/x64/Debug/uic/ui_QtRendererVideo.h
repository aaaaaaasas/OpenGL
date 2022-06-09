/********************************************************************************
** Form generated from reading UI file 'QtRendererVideo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRENDERERVIDEO_H
#define UI_QTRENDERERVIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtRendererVideoClass
{
public:

    void setupUi(QWidget *QtRendererVideoClass)
    {
        if (QtRendererVideoClass->objectName().isEmpty())
            QtRendererVideoClass->setObjectName(QString::fromUtf8("QtRendererVideoClass"));
        QtRendererVideoClass->resize(600, 400);

        retranslateUi(QtRendererVideoClass);

        QMetaObject::connectSlotsByName(QtRendererVideoClass);
    } // setupUi

    void retranslateUi(QWidget *QtRendererVideoClass)
    {
        QtRendererVideoClass->setWindowTitle(QApplication::translate("QtRendererVideoClass", "QtRendererVideo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtRendererVideoClass: public Ui_QtRendererVideoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRENDERERVIDEO_H
