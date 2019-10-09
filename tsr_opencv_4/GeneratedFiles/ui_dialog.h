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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
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
    QLabel *frame_counter;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QDoubleSpinBox *spin1;
    QCheckBox *checkBox2;
    QDoubleSpinBox *spin2;
    QCheckBox *checkBox3;
    QDoubleSpinBox *spin3;
    QCheckBox *checkBox4;
    QDoubleSpinBox *spin4;
    QCheckBox *checkBox1;
    QPushButton *nagraj;
    QPushButton *zdjecie;
    QPushButton *videooff;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setWindowModality(Qt::NonModal);
        Dialog->resize(981, 750);
        Dialog->setMinimumSize(QSize(981, 621));
        QIcon icon;
        icon.addFile(QString::fromUtf8("obrazy/006-roundabout.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        Dialog->setAutoFillBackground(false);
        Dialog->setSizeGripEnabled(false);
        Dialog->setModal(false);
        display_screen = new QLabel(Dialog);
        display_screen->setObjectName(QString::fromUtf8("display_screen"));
        display_screen->setEnabled(true);
        display_screen->setGeometry(QRect(10, 10, 640, 480));
        display_screen->setAutoFillBackground(true);
        display_screen->setFrameShape(QFrame::WinPanel);
        display_screen->setFrameShadow(QFrame::Raised);
        display_screen->setLineWidth(4);
        display_screen->setMidLineWidth(4);
        display_screen->setMargin(0);
        horizontalLayoutWidget = new QWidget(Dialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 500, 361, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        film_Button = new QPushButton(horizontalLayoutWidget);
        film_Button->setObjectName(QString::fromUtf8("film_Button"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("obrazy/movie_clapboard_cinema_clapper_studio_equipment_flat_icon_symbol-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        film_Button->setIcon(icon1);
        film_Button->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(film_Button);

        kamera_Button = new QPushButton(horizontalLayoutWidget);
        kamera_Button->setObjectName(QString::fromUtf8("kamera_Button"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("obrazy/webcam-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        kamera_Button->setIcon(icon2);
        kamera_Button->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(kamera_Button);

        zdjecie_Button = new QPushButton(horizontalLayoutWidget);
        zdjecie_Button->setObjectName(QString::fromUtf8("zdjecie_Button"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("obrazy/camera-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        zdjecie_Button->setIcon(icon3);
        zdjecie_Button->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(zdjecie_Button);

        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(390, 500, 151, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        wykrywanie_Button = new QPushButton(verticalLayoutWidget);
        wykrywanie_Button->setObjectName(QString::fromUtf8("wykrywanie_Button"));
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
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("obrazy/039-no-entry.png"), QSize(), QIcon::Normal, QIcon::Off);
        stop_Button->setIcon(icon5);
        stop_Button->setIconSize(QSize(40, 40));
        stop_Button->setCheckable(false);
        stop_Button->setAutoDefault(true);
        stop_Button->setFlat(false);

        verticalLayout->addWidget(stop_Button);

        tableWidget = new QTableWidget(Dialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(660, 10, 301, 481));
        tableWidget->setFrameShape(QFrame::WinPanel);
        tableWidget->setFrameShadow(QFrame::Raised);
        tableWidget->setTextElideMode(Qt::ElideLeft);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::NoPen);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setVisible(false);
        frame_counter = new QLabel(Dialog);
        frame_counter->setObjectName(QString::fromUtf8("frame_counter"));
        frame_counter->setGeometry(QRect(540, 500, 121, 41));
        formLayoutWidget = new QWidget(Dialog);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(550, 500, 211, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        spin1 = new QDoubleSpinBox(formLayoutWidget);
        spin1->setObjectName(QString::fromUtf8("spin1"));

        formLayout->setWidget(1, QFormLayout::FieldRole, spin1);

        checkBox2 = new QCheckBox(formLayoutWidget);
        checkBox2->setObjectName(QString::fromUtf8("checkBox2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, checkBox2);

        spin2 = new QDoubleSpinBox(formLayoutWidget);
        spin2->setObjectName(QString::fromUtf8("spin2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, spin2);

        checkBox3 = new QCheckBox(formLayoutWidget);
        checkBox3->setObjectName(QString::fromUtf8("checkBox3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, checkBox3);

        spin3 = new QDoubleSpinBox(formLayoutWidget);
        spin3->setObjectName(QString::fromUtf8("spin3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, spin3);

        checkBox4 = new QCheckBox(formLayoutWidget);
        checkBox4->setObjectName(QString::fromUtf8("checkBox4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, checkBox4);

        spin4 = new QDoubleSpinBox(formLayoutWidget);
        spin4->setObjectName(QString::fromUtf8("spin4"));

        formLayout->setWidget(4, QFormLayout::FieldRole, spin4);

        checkBox1 = new QCheckBox(formLayoutWidget);
        checkBox1->setObjectName(QString::fromUtf8("checkBox1"));

        formLayout->setWidget(1, QFormLayout::LabelRole, checkBox1);

        nagraj = new QPushButton(Dialog);
        nagraj->setObjectName(QString::fromUtf8("nagraj"));
        nagraj->setGeometry(QRect(770, 530, 75, 23));
        zdjecie = new QPushButton(Dialog);
        zdjecie->setObjectName(QString::fromUtf8("zdjecie"));
        zdjecie->setGeometry(QRect(770, 560, 75, 23));
        videooff = new QPushButton(Dialog);
        videooff->setObjectName(QString::fromUtf8("videooff"));
        videooff->setGeometry(QRect(770, 500, 75, 23));

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
        frame_counter->setText(QString());
        checkBox2->setText(QApplication::translate("Dialog", "Strefa zamieszkania", nullptr));
        checkBox3->setText(QApplication::translate("Dialog", "Dzieci", nullptr));
        checkBox4->setText(QApplication::translate("Dialog", "Przej. dla pieszych", nullptr));
        checkBox1->setText(QApplication::translate("Dialog", "Ogr. Pr\304\231dko\305\233ci", nullptr));
        nagraj->setText(QApplication::translate("Dialog", "Nagraj", nullptr));
        zdjecie->setText(QApplication::translate("Dialog", "Zr\303\263b zdj\304\231cie", nullptr));
        videooff->setText(QApplication::translate("Dialog", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
