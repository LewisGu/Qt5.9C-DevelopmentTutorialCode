#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_samp1_2.h"

class samp1_2 : public QMainWindow
{
	Q_OBJECT

public:
	samp1_2(QWidget *parent = Q_NULLPTR);

private:
	Ui::samp1_2Class ui;
};
