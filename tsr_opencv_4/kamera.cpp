#include "dialog.h"
#include "ui_dialog.h"


void Dialog::numberofframes()
{
	QString klatki = QString("Frame #%1").arg(QString::number(counter));
	ui->frame_counter->setText(klatki);
}

void Dialog::kamerka()
{

	capWebcam.read(image);
	cvtColor(image, image, COLOR_BGR2RGB);
	counter++;
	numberofframes();
	QImage qimg((uchar*)image.data, image.cols, image.rows, image.step, QImage::Format_RGB888);

	ui->display_screen->setPixmap(QPixmap::fromImage(qimg));

	QString klatki = QString("Frames: %1").arg(QString::number(counter));




}




void Dialog::svm_predict(Mat& image)
{

	//cv::resize(image, image, Size(50, 50));//resize image
	int img_area = 50 * 50;

	Mat test_image(1, img_area, CV_32FC1);        //Creates a 1 x 30000 matrix to house the test image. 

	int jj = 0;
	for (int i = 0; i < image.rows; i++)
	{
		for (int j = 0; j < image.cols; j++)
		{
			test_image.at<float>(0, jj) = image.at<uchar>(i, j);    //Fills the training_mat
			jj++;
		}
	}

	imwrite("lol.jpg", test_image);
	result = svm->predict(test_image);
}

void Dialog::processFrameAndUpdateGUI()
{

	cvtColor(image, image2, COLOR_BGR2GRAY);
	cvtColor(image, e, COLOR_BGR2RGB);
	equalizeHist(image2, image2);

	if (ui->checkBox1->isChecked())
	{
		dt1 = ui->spin1->value();
		d1.detectMultiScale(image2, znaki1, dt1, 3, 0, Size(40, 40));
	}
	if (ui->checkBox2->isChecked())
	{
		dt2 = ui->spin2->value();
		d2.detectMultiScale(image2, znaki2, dt2, 3, 0, Size(40, 40));
	}
	if (ui->checkBox3->isChecked())
	{
		dt3 = ui->spin3->value();
		d3.detectMultiScale(image2, znaki3, dt3, 3, 0, Size(40, 40));
	}
	if (ui->checkBox4->isChecked())
	{
		dt4 = ui->spin4->value();
		d4.detectMultiScale(image2, znaki4, dt4, 3, 0, Size(40, 40));
	}

	napis = QString("Frame #%1").arg(QString::number(counter));

	x = 0;
	ui->tableWidget->setRowCount(10);
	ui->tableWidget->setColumnCount(3);



	for (size_t i = 0; i < znaki1.size(); i++)
	{
		Point pt1(znaki1[i].x + znaki1[i].width, znaki1[i].y + znaki1[i].height);
		Point pt2(znaki1[i].x, znaki1[i].y);
		frameROI1 = e(znaki1[i]);

		cvtColor(frameROI1, frameROI1, COLOR_BGR2RGB);
		qimg = QImage((uchar*)frameROI1.data, frameROI1.cols, frameROI1.rows, frameROI1.step, QImage::Format_RGB888);
		item = new QTableWidgetItem;
		item->setData(Qt::DecorationRole, QPixmap::fromImage(qimg).scaled(100, 100));

		cvtColor(frameROI1, frameROI1, COLOR_RGB2HSV);

		cv::resize(frameROI1, frameROI1, Size(50, 50));
		Rect roi = Rect(8, 11, 35, 30);
		frameROI1 = frameROI1(roi);
		inRange(frameROI1, Scalar(0, 0, 0, 0), Scalar(180, 255, 100, 0), frameROI1);

		//namedWindow("", WINDOW_NORMAL);
		imshow("", frameROI1);
		svm_predict(frameROI1);


		svmr = new QTableWidgetItem;
		numer_klatki = new QTableWidgetItem;
		numer_klatki->setData(0, QString(napis));
		ui->tableWidget->setItem(x, 0, numer_klatki);

		switch (result)
		{
		case 1:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x5.jpg").scaled(100, 100));
			QSound::play("dzwieki/5.wav");
			break;
		case 2:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x10.jpg").scaled(100, 100));
			QSound::play("dzwieki/10.wav");
			break;
		case 3:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x20.jpg").scaled(100, 100));
			QSound::play("dzwieki/20.wav");
			break;
		case 4:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x30.jpg").scaled(100, 100));
			QSound::play("dzwieki/30.wav");
			break;
		case 5:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x40.jpg").scaled(100, 100));
			QSound::play("dzwieki/40.wav");
			break;
		case 6:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x50.jpg").scaled(100, 100));
			QSound::play("dzwieki/50.wav");
			break;
		case 7:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x60.jpg").scaled(100, 100));
			QSound::play("dzwieki/60.wav");
			break;
		case 8:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x70.jpg").scaled(100, 100));
			QSound::play("dzwieki/70.wav");
			break;
		case 9:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x80.jpg").scaled(100, 100));
			QSound::play("dzwieki/80.wav");
			break;
		case -1:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x90.jpg").scaled(100, 100));
			QSound::play("dzwieki/90.wav");
			break;
		case -2:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x100.jpg").scaled(100, 100));
			QSound::play("dzwieki/100.wav");
			break;
		case -3:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x110.jpg").scaled(100, 100));
			QSound::play("dzwieki/110.wav");
			break;
		case -4:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x120.jpg").scaled(100, 100));
			QSound::play("dzwieki/120.wav");
			break;
		case 0:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x120.jpg").scaled(100, 100));
		default:
			break;
		}

		svmr->setTextAlignment(Qt::AlignCenter);
		ui->tableWidget->setItem(x, 2, svmr);
		ui->tableWidget->setItem(x, 1, item);
		ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		x++;
		//waitKey(3000);

	}

	for (size_t i = 0; i < znaki2.size(); i++)
	{

		Point pt1(znaki2[i].x + znaki2[i].width, znaki2[i].y + znaki2[i].height);
		Point pt2(znaki2[i].x, znaki2[i].y);
		frameROI2 = e(znaki2[i]);

		cvtColor(frameROI2, frameROI2, COLOR_BGR2RGB);
		qimg = QImage((uchar*)frameROI2.data, frameROI2.cols, frameROI2.rows, frameROI2.step, QImage::Format_RGB888);
		item = new QTableWidgetItem;
		item->setData(Qt::DecorationRole, QPixmap::fromImage(qimg).scaled(100, 100));

		//svm_predict(frameROI2);


		svmr = new QTableWidgetItem;
		numer_klatki = new QTableWidgetItem;
		numer_klatki->setData(0, QString(napis));
		ui->tableWidget->setItem(x, 0, numer_klatki);

		/*
		switch (result)
		{

		case -5:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/strefa.jpg").scaled(100, 100));
			QSound::play("dzwieki/strefa.wav");
			break;
		default:
			break;
		}*/
		QSound::play("dzwieki/strefa.wav");
		svmr->setData(Qt::DecorationRole, QPixmap("obrazy/strefa.jpg").scaled(100, 100));
		svmr->setTextAlignment(Qt::AlignCenter);
		ui->tableWidget->setItem(x, 2, svmr);
		ui->tableWidget->setItem(x, 1, item);
		ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		x++;
		//waitKey(3000);
	}
	for (size_t i = 0; i < znaki3.size(); i++)
	{

		Point pt1(znaki3[i].x + znaki3[i].width, znaki3[i].y + znaki3[i].height);
		Point pt2(znaki3[i].x, znaki3[i].y);
		frameROI3 = e(znaki3[i]);

		cvtColor(frameROI3, frameROI3, COLOR_BGR2RGB);
		qimg = QImage((uchar*)frameROI3.data, frameROI3.cols, frameROI3.rows, frameROI3.step, QImage::Format_RGB888);
		item = new QTableWidgetItem;
		item->setData(Qt::DecorationRole, QPixmap::fromImage(qimg).scaled(100, 100));

		//svm_predict(frameROI2);


		svmr = new QTableWidgetItem;
		numer_klatki = new QTableWidgetItem;
		numer_klatki->setData(0, QString(napis));
		ui->tableWidget->setItem(x, 0, numer_klatki);

		/*switch (result)
		{

		case -5:
		svmr->setData(Qt::DecorationRole, QPixmap("obrazy/strefa.jpg").scaled(100, 100));
		QSound::play("dzwieki/strefa.wav");
		break;
		default:
		break;
		}*/

		svmr->setData(Qt::DecorationRole, QPixmap("obrazy/a17.jpg").scaled(100, 100));
		QSound::play("dzwieki/a17.wav");

		svmr->setTextAlignment(Qt::AlignCenter);
		ui->tableWidget->setItem(x, 2, svmr);
		ui->tableWidget->setItem(x, 1, item);
		ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		x++;
		//waitKey(3000);

	}

	for (size_t i = 0; i < znaki4.size(); i++)
	{
		Point pt1(znaki4[i].x + znaki4[i].width, znaki4[i].y + znaki4[i].height);
		Point pt2(znaki4[i].x, znaki4[i].y);
		frameROI4 = e(znaki4[i]);

		cvtColor(frameROI4, frameROI4, COLOR_BGR2RGB);
		qimg = QImage((uchar*)frameROI4.data, frameROI4.cols, frameROI4.rows, frameROI4.step, QImage::Format_RGB888);
		item = new QTableWidgetItem;
		item->setData(Qt::DecorationRole, QPixmap::fromImage(qimg).scaled(100, 100));

		//svm_predict(frameROI4);

		svmr = new QTableWidgetItem;
		numer_klatki = new QTableWidgetItem;
		numer_klatki->setData(0, QString(napis));
		ui->tableWidget->setItem(x, 0, numer_klatki);

		/*switch (result)
		{

		case -5:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/d6.jpg").scaled(100, 100));
			QSound::play("dzwieki/d6.wav");
			break;
		default:
			break;
		}*/
		QSound::play("dzwieki/d6.wav");
		svmr->setData(Qt::DecorationRole, QPixmap("obrazy/d6.jpg").scaled(100, 100));
		svmr->setTextAlignment(Qt::AlignCenter);
		ui->tableWidget->setItem(x, 2, svmr);
		ui->tableWidget->setItem(x, 1, item);
		ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		x++;
		//waitKey(3000);
	}

}


