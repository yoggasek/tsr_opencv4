#pragma once

#include <QLabel>
#include <QMainWindow>
#include <QDialog>
#include "ui_mainwindow.h"


class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget* parent = Q_NULLPTR);
	


private slots:
	void on_pushButton_clicked();


private:
	Ui::MainWindowClass ui;
};