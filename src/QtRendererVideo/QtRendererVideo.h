#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtRendererVideo.h"

class QtRendererVideo : public QWidget
{
    Q_OBJECT

public:
    QtRendererVideo(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtRendererVideoClass ui;
};
