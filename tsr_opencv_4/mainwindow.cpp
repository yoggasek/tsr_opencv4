#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"



MainWindow::MainWindow(QWidget* parent) :
	QMainWindow(parent)
{
	ui.setupUi(this);
}


void MainWindow::on_pushButton_clicked()
{
	this->close();
	Dialog dialog;
	dialog.setModal(true);
	dialog.exec();
}
