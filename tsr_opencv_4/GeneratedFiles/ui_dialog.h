/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QLabel *display_screen;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *film_Button;
    QPushButton *kamera_Button;
    QPushButton *zdjecie_Button;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *wykrywanie_Button;
    QPushButton *stop_Button;
    QTableWidget *tableWidget;
    QPushButton *videooff;
    QLabel *frame_counter;
    QPushButton *nagraj;
    QCheckBox *podglad;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setWindowModality(Qt::NonModal);
        Dialog->resize(981, 636);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        Dialog->setMinimumSize(QSize(981, 621));
        QIcon icon;
        icon.addFile(QString::fromUtf8("obrazy/006-roundabout.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        Dialog->setAutoFillBackground(false);
        Dialog->setSizeGripEnabled(false);
        Dialog->setModal(false);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        display_screen = new QLabel(widget);
        display_screen->setObjectName(QString::fromUtf8("display_screen"));
        display_screen->setEnabled(true);
        display_screen->setGeometry(QRect(0, 0, 641, 491));
        sizePolicy.setHeightForWidth(display_screen->sizePolicy().hasHeightForWidth());
        display_screen->setSizePolicy(sizePolicy);
        display_screen->setAutoFillBackground(true);
        display_screen->setFrameShape(QFrame::WinPanel);
        display_screen->setFrameShadow(QFrame::Raised);
        display_screen->setLineWidth(4);
        display_screen->setMidLineWidth(4);
        display_screen->setMargin(0);
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 500, 361, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        film_Button = new QPushButton(horizontalLayoutWidget);
        film_Button->setObjectName(QString::fromUtf8("film_Button"));
        film_Button->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.767136, y2:0.688, stop:0.0397727 rgba(0, 0, 0, 255), stop:0.789773 rgba(255, 255, 255, 255));"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("obrazy/movie_clapboard_cinema_clapper_studio_equipment_flat_icon_symbol-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        film_Button->setIcon(icon1);
        film_Button->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(film_Button);

        kamera_Button = new QPushButton(horizontalLayoutWidget);
        kamera_Button->setObjectName(QString::fromUtf8("kamera_Button"));
        kamera_Button->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.767136, y2:0.688, stop:0.0397727 rgba(0, 0, 0, 255), stop:0.789773 rgba(255, 255, 255, 255));"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("obrazy/webcam-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        kamera_Button->setIcon(icon2);
        kamera_Button->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(kamera_Button);

        zdjecie_Button = new QPushButton(horizontalLayoutWidget);
        zdjecie_Button->setObjectName(QString::fromUtf8("zdjecie_Button"));
        zdjecie_Button->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.767136, y2:0.688, stop:0.0397727 rgba(0, 0, 0, 255), stop:0.789773 rgba(255, 255, 255, 255));"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("obrazy/camera-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        zdjecie_Button->setIcon(icon3);
        zdjecie_Button->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(zdjecie_Button);

        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(370, 500, 151, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        wykrywanie_Button = new QPushButton(verticalLayoutWidget);
        wykrywanie_Button->setObjectName(QString::fromUtf8("wykrywanie_Button"));
        wykrywanie_Button->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.767136, y2:0.688, stop:0.0397727 rgba(0, 0, 0, 255), stop:0.789773 rgba(255, 255, 255, 255));"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("obrazy/017-turn-right-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        wykrywanie_Button->setIcon(icon4);
        wykrywanie_Button->setIconSize(QSize(40, 40));

        verticalLayout->addWidget(wykrywanie_Button);

        stop_Button = new QPushButton(verticalLayoutWidget);
        stop_Button->setObjectName(QString::fromUtf8("stop_Button"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setItalic(true);
        stop_Button->setFont(font);
        stop_Button->setLayoutDirection(Qt::LeftToRight);
        stop_Button->setAutoFillBackground(false);
        stop_Button->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.767136, y2:0.688, stop:0.0397727 rgba(0, 0, 0, 255), stop:0.789773 rgba(255, 255, 255, 255));"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("obrazy/039-no-entry.png"), QSize(), QIcon::Normal, QIcon::Off);
        stop_Button->setIcon(icon5);
        stop_Button->setIconSize(QSize(40, 40));
        stop_Button->setCheckable(false);
        stop_Button->setAutoDefault(true);
        stop_Button->setFlat(false);

        verticalLayout->addWidget(stop_Button);

        tableWidget = new QTableWidget(widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(650, 0, 311, 491));
        tableWidget->setFrameShape(QFrame::WinPanel);
        tableWidget->setFrameShadow(QFrame::Raised);
        tableWidget->setTextElideMode(Qt::ElideLeft);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::NoPen);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setVisible(false);
        videooff = new QPushButton(widget);
        videooff->setObjectName(QString::fromUtf8("videooff"));
        videooff->setGeometry(QRect(820, 500, 141, 51));
        videooff->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.767136, y2:0.688, stop:0.0397727 rgba(0, 0, 0, 255), stop:0.789773 rgba(255, 255, 255, 255));"));
        frame_counter = new QLabel(widget);
        frame_counter->setObjectName(QString::fromUtf8("frame_counter"));
        frame_counter->setEnabled(false);
        frame_counter->setGeometry(QRect(530, 560, 121, 41));
        nagraj = new QPushButton(widget);
        nagraj->setObjectName(QString::fromUtf8("nagraj"));
        nagraj->setGeometry(QRect(660, 500, 151, 51));
        nagraj->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0.767136, y2:0.688, stop:0.0397727 rgba(0, 0, 0, 255), stop:0.789773 rgba(255, 255, 255, 255));"));
        podglad = new QCheckBox(widget);
        podglad->setObjectName(QString::fromUtf8("podglad"));
        podglad->setGeometry(QRect(540, 510, 83, 17));
        podglad->setBaseSize(QSize(5, 5));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(Dialog);

        stop_Button->setDefault(false);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Traffic Sign Recognition", nullptr));
        display_screen->setText(QString());
        film_Button->setText(QApplication::translate("Dialog", "Film", nullptr));
        kamera_Button->setText(QApplication::translate("Dialog", "Kamera", nullptr));
        zdjecie_Button->setText(QApplication::translate("Dialog", "Zdj\304\231cie", nullptr));
        wykrywanie_Button->setText(QApplication::translate("Dialog", "Wykrywaj Znaki", nullptr));
        stop_Button->setText(QApplication::translate("Dialog", "STOP", nullptr));
        videooff->setText(QApplication::translate("Dialog", "Stop", nullptr));
        frame_counter->setText(QString());
        nagraj->setText(QApplication::translate("Dialog", "Nagraj", nullptr));
        podglad->setText(QApplication::translate("Dialog", "Podgl\304\205d", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
