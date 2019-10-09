#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>
#include <QImage>
#include <qtimer.h>
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include "opencv2/opencv.hpp"
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\objdetect\objdetect.hpp>
#include "opencv2/highgui/highgui.hpp"
#include <opencv2\ml.hpp>
#include <QtCore>
#include <qmessagebox.h>
#include <qfiledialog.h>
#include <QTableWidget>
#include <sstream>
#include <QSound>
#include <QSlider>
#include <QThread>
#include <QtTest>
#define myqDebug() qDebug() << fixed << qSetRealNumberPrecision(4)
#include <chrono>
#include <ctime>
#include <opencv2/core/core.hpp>
#include <QCheckBox>





using namespace cv;
using namespace std;
using namespace cv::ml;

namespace Ui {
	class Dialog;

}

class Dialog : public QDialog
{

	Q_OBJECT

public:
	explicit Dialog(QWidget* parent = 0);
	~Dialog();


private:
	enum znaki { negatyw, five, ten, twenty, thirty, fourty, fifty, sixty, seventy, eighty, ninety, hundred, hundred_ten, hundred_twenty };
	QString napis;
	int x;
	QImage zdjecie;
	Rect roi;
	QString videofileName;
	String videopath;
	QImage dest;
	QImage qimg, qimg2, qimg3, qimg4;
	QFileDialog dialog;
	QString imagefileName;
	QTableWidgetItem* item = new QTableWidgetItem;
	QTableWidgetItem* svmr = new QTableWidgetItem;
	QTableWidgetItem* numer_klatki = new QTableWidgetItem;
	Ptr<SVM> svm = SVM::create();
	CascadeClassifier d2, d1, d3, d4, d5, d6;
	vector<Rect>znaki1, znaki2, znaki3, znaki4, znaki5, znaki;
	QTimer* timer = new QTimer;
	QTimer* timer2 = new QTimer;
	QTimer* timer3 = new QTimer;
	QImage* wsk;
	double dt1, dt2, dt3, dt4;
	Mat e;
	Mat image2, image3, image4, image1, image5;
	Mat frameROI, frameROI1, frameROI2, frameROI3, frameROI4, frameROI5;
	Mat image;
	int counter = 0;
	int result;
	Mat sign;
	Mat frame;
	bool playVideo;
	char c;
	VideoCapture capWebcam;
	Ui::Dialog* ui;
private slots:
	//QImage Mat3b2QImage(Mat3b &src);
	void wait_until_next_second();
	void on_stop_Button_clicked();
	void on_zdjecie_Button_clicked();
	void on_nagraj_clicked();
	void on_kamera_Button_clicked();
	void on_videooff_clicked();
	void on_film_Button_clicked();
	void on_wykrywanie_Button_clicked();
	void processFrameAndUpdateGUI();
	void on_zdjecie_clicked();
	//void on_browse_clicked();
	void numberofframes();
	void kamerka();
	void svm_predict(Mat& image);


};

#endif // DIALOG_H
