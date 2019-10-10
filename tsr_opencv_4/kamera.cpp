#include "dialog.h"
#include "ui_dialog.h"


void Dialog::numberofframes()
{
	QString klatki = QString("Frame #%1").arg(QString::number(counter));
	ui->frame_counter->setText(klatki);
}

void Dialog::kamerka()
{
	tryb = 1;
	capWebcam.read(image);
	if (ui->podglad->isChecked()==true)
	{
		cvtColor(image, e, COLOR_BGR2RGB);
		QImage qimg((uchar*)e.data, e.cols, e.rows, e.step, QImage::Format_RGB888);
		ui->display_screen->setPixmap(QPixmap::fromImage(qimg));
	}
	else
	{
		ui->display_screen->clear();
		ui->display_screen->setPixmap(noimg);
	}
	//cvtColor(image, image, COLOR_BGR2GRAY);
	counter++;
	numberofframes();
	QString klatki = QString("Frames: %1").arg(QString::number(counter));
	
	
}

void Dialog::svm_predict(Mat& image)
{

	cv::resize(image, image, Size(50, 50));//resize image
	int img_area = 50 * 50;
	imwrite("sample_svm.jpg", image);
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

	imwrite("vector_svm.jpg", test_image);
	result = svm->predict(test_image);
}

void Dialog::processFrameAndUpdateGUI()
{

	cvtColor(image, image2, COLOR_BGR2GRAY);
	cvtColor(image, e, COLOR_BGR2RGB);
	equalizeHist(image2, image2);

	d1.detectMultiScale(image2, znaki1, 1.02, 3, 0, Size(40, 40));

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
		//cv::resize(frameROI1, frameROI1, Size(50, 50));
		//namedWindow("", WINDOW_NORMAL);
		imshow("", frameROI1);
		svm_predict(frameROI1);


		svmr = new QTableWidgetItem;
		numer_klatki = new QTableWidgetItem;
		numer_klatki->setData(0, QString(napis));
		ui->tableWidget->setItem(x, 0, numer_klatki);

		switch (result)
		{
		case five:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x5.jpg").scaled(100, 100));
			QSound::play("dzwieki/5.wav");
			break;
		case ten:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x10.jpg").scaled(100, 100));
			QSound::play("dzwieki/10.wav");
			break;
		case twenty:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x20.jpg").scaled(100, 100));
			QSound::play("dzwieki/20.wav");
			break;
		case thirty:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x30.jpg").scaled(100, 100));
			QSound::play("dzwieki/30.wav");
			break;
		case fourty:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x40.jpg").scaled(100, 100));
			QSound::play("dzwieki/40.wav");
			break;
		case fifty:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x50.jpg").scaled(100, 100));
			QSound::play("dzwieki/50.wav");
			break;
		case sixty:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x60.jpg").scaled(100, 100));
			QSound::play("dzwieki/60.wav");
			break;
		case seventy:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x70.jpg").scaled(100, 100));
			QSound::play("dzwieki/70.wav");
			break;
		case eighty:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x80.jpg").scaled(100, 100));
			QSound::play("dzwieki/80.wav");
			break;
		case ninety:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x90.jpg").scaled(100, 100));
			QSound::play("dzwieki/90.wav");
			break;
		case hundred:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x100.jpg").scaled(100, 100));
			QSound::play("dzwieki/100.wav");
			break;
		case hundred_ten:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x110.jpg").scaled(100, 100));
			QSound::play("dzwieki/110.wav");
			break;
		case hundred_twenty:
			svmr->setData(Qt::DecorationRole, QPixmap("obrazy/x120.jpg").scaled(100, 100));
			QSound::play("dzwieki/120.wav");
			break;
		default:
			break;
		}

		svmr->setTextAlignment(Qt::AlignCenter);
		ui->tableWidget->setItem(x, 2, svmr);
		ui->tableWidget->setItem(x, 1, item);
		ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
		x++;
		waitKey(3000);

	}
	
	
}

