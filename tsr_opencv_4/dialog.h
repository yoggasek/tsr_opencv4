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
	Rect roi;
	QString videofileName;
	String videopath;
	QImage dest;
	QPixmap noimg = "C:/Users/yoggas/source/repos/tsr_opencv_4/tsr_opencv_4/obrazy/noimage.png";
	QImage qimg;
	QFileDialog dialog;
	QString imagefileName;
	QTableWidgetItem* item = new QTableWidgetItem;
	QTableWidgetItem* svmr = new QTableWidgetItem;
	QTableWidgetItem* numer_klatki = new QTableWidgetItem;
	Ptr<SVM> svm = SVM::create();
	CascadeClassifier d1;
	vector<Rect> znaki1;
	QTimer* timer = new QTimer;
	QTimer* timer2 = new QTimer;
	QTimer* timer3 = new QTimer;
	QImage* wsk;
	Mat e;
	Mat image, image2;
	Mat frameROI, frameROI1;
	int counter = 0;
	int result;
	Mat sign;
	Mat frame;
	bool podglad=0;
	bool tryb=0;
	bool playVideo;
	char c;
	VideoCapture capWebcam;
	Ui::Dialog* ui;
private slots:
	//QImage Mat3b2QImage(Mat3b &src);
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
