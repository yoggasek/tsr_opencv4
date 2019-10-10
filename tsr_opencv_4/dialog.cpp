#include "dialog.h"
#include "ui_dialog.h"


using namespace cv;


Dialog::Dialog(QWidget* parent) :QDialog(parent), ui(new Ui::Dialog)
{
	ui->setupUi(this);
	setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);
	d1.load("xml/kaskada.xml");
	svm = SVM::load("xml/svm2.xml");
	ui->wykrywanie_Button->setEnabled(false);
	ui->stop_Button->setEnabled(false);
	ui->display_screen->setScaledContents(true);
	ui->display_screen->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	ui->display_screen->setPixmap(noimg);
}


void Dialog::on_wykrywanie_Button_clicked()
{
	switch (tryb)
	{
	case 1:
		connect(timer2, SIGNAL(timeout()), this, SLOT(processFrameAndUpdateGUI()));
		timer2->start(500);
		break;
	case 0:
		QTimer::singleShot(1, this, SLOT(processFrameAndUpdateGUI()));
		break;
	default:
		break;
	}
}

void Dialog::on_nagraj_clicked()
{
	VideoWriter video("film3.avi", VideoWriter::fourcc('M', 'J', 'P', 'G'), 30, Size(640, 480), true);

	for (;;)
	{
		video.write(image);
		c = (char)waitKey(33);
		if (c == 27)break;
	}
}
void Dialog::on_videooff_clicked()
{
	c = 27;
}

void Dialog::on_zdjecie_clicked()
{
	imwrite("zdjecie.jpg", image);
}

void Dialog::on_stop_Button_clicked()
{
	timer->stop();
	timer2->stop();
	counter = 0;
	capWebcam.release();
	image.release();

	ui->display_screen->clear();
	ui->kamera_Button->setEnabled(true);
	ui->zdjecie_Button->setEnabled(true);
	ui->wykrywanie_Button->setEnabled(false);
	ui->stop_Button->setEnabled(false);
	
}


void Dialog::on_kamera_Button_clicked()
{
	ui->kamera_Button->setStyleSheet("QPushButton{background-color: green}");
	image.release();
	ui->display_screen->clear();
	ui->tableWidget->clear();

	capWebcam.open(0);
	if (capWebcam.isOpened() == false) {
		QMessageBox::critical(this, tr("B³¹d"), tr("brak kamerki"));
		return;
	}

	ui->wykrywanie_Button->setEnabled(true);
	ui->stop_Button->setEnabled(true);
	connect(timer, SIGNAL(timeout()), this, SLOT(kamerka()));
	timer->start(100);
}

void Dialog::on_zdjecie_Button_clicked()
{
	tryb = 0;
	ui->tableWidget->clear();
	timer->stop();
	capWebcam.release();
	image.release();
	ui->display_screen->clear();
	x = 0;
	
	dialog.setNameFilter(tr("Zdjêcie (*.jpg *.jpeg *.png *.bmp)"));
	dialog.setViewMode(QFileDialog::Detail);
	imagefileName = QFileDialog::getOpenFileName(this, tr("Open File"), "C:/Users/Patryk/Desktop/badania/ogr predk/1024 ", tr("Zdjêcie(*.jpg *.jpeg *.png *.bmp)"));


	if (!imagefileName.isEmpty())
	{
		napis = QString("%1").arg(QString::number(counter));
		image = imread(imagefileName.toStdString());
		cvtColor(image, image, COLOR_BGR2RGB);
		qimg = QImage((uchar*)image.data, image.cols, image.rows, image.step, QImage::Format_RGB888);
		ui->display_screen->setPixmap(QPixmap::fromImage(qimg));
		ui->wykrywanie_Button->setEnabled(true);
		ui->stop_Button->setEnabled(true);
	}

}


Dialog::~Dialog()
{
	delete ui;
}

/* zdjecie
auto start = std::chrono::system_clock::now();
napis = QString("%1").arg(QString::number(counter));
image = imread(imagefileName.toStdString());
cvtColor(image, image, COLOR_BGR2RGB);
cvtColor(image, image2, COLOR_RGB2GRAY);

equalizeHist(image2, image2);
zdjecie = QImage((uchar*)image.data, image.cols, image.rows, image.step, QImage::Format_RGB888);
ui->display_screen->setPixmap(QPixmap::fromImage(zdjecie));


ui->wykrywanie_Button->setEnabled(false);
ui->stop_Button->setEnabled(false);

d1.detectMultiScale(image2, znaki1, 1.02, 3, 0, Size(20, 20));
ui->tableWidget->setRowCount(10);
ui->tableWidget->setColumnCount(3);


for (size_t i = 0; i < znaki1.size(); i++)
{
	Point pt1(znaki1[i].x + znaki1[i].width, znaki1[i].y + znaki1[i].height);
	Point pt2(znaki1[i].x, znaki1[i].y);

	//rectangle(image, pt1, pt2, cvScalar(0, 255, 0, 0), 1, 8, 0);

	frameROI1 = image(znaki1[i]);


	qimg = QImage((uchar*)frameROI1.data, frameROI1.cols, frameROI1.rows, frameROI1.step, QImage::Format_RGB888);
	item = new QTableWidgetItem;
	item->setData(Qt::DecorationRole, QPixmap::fromImage(qimg).scaled(100, 100));

	cvtColor(frameROI1, frameROI1, COLOR_RGB2HSV);

	cv::resize(frameROI1, frameROI1, Size(50, 50));
	roi = Rect(8, 11, 35, 30);

	frameROI1 = frameROI1(roi);
	inRange(frameROI1, Scalar(0, 0, 0, 0), Scalar(180, 255, 100, 0), frameROI1);

	svm_predict(frameROI1);



	svmr = new QTableWidgetItem;
	numer_klatki = new QTableWidgetItem;
	numer_klatki->setData(0, QString::number(x));
	numer_klatki->setTextAlignment(Qt::AlignCenter);
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
	case negatyw:
		continue;
	default:
		continue;
	}

	svmr->setTextAlignment(Qt::AlignCenter);
	ui->tableWidget->setItem(x, 2, svmr);
	ui->tableWidget->setItem(x, 1, item);
	ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	x++;

}

*/
	