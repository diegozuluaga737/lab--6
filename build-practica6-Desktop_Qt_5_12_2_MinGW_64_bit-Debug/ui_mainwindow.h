/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QSplitter *splitter_2;
    QPushButton *save;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *add;
    QPushButton *view;
    QPushButton *play;
    QPushButton *stop;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QDoubleSpinBox *posx;
    QDoubleSpinBox *velx;
    QLabel *label_6;
    QDoubleSpinBox *radio;
    QDoubleSpinBox *posy;
    QDoubleSpinBox *vely;
    QDoubleSpinBox *masa;
    QLabel *label_3;
    QPushButton *delete_;
    QPushButton *next;
    QPushButton *back;
    QPushButton *ok;
    QSplitter *splitter;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 1030);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 71, 21));
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(0, 0, 51, 21));
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(390, 180, 171, 31));
        splitter_2->setOrientation(Qt::Horizontal);
        save = new QPushButton(splitter_2);
        save->setObjectName(QString::fromUtf8("save"));
        splitter_2->addWidget(save);
        pushButton_3 = new QPushButton(splitter_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        splitter_2->addWidget(pushButton_3);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1010, 0, 141, 301));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        add = new QPushButton(layoutWidget);
        add->setObjectName(QString::fromUtf8("add"));

        gridLayout->addWidget(add, 0, 0, 1, 1);

        view = new QPushButton(layoutWidget);
        view->setObjectName(QString::fromUtf8("view"));

        gridLayout->addWidget(view, 1, 0, 1, 1);

        play = new QPushButton(layoutWidget);
        play->setObjectName(QString::fromUtf8("play"));

        gridLayout->addWidget(play, 2, 0, 1, 1);

        stop = new QPushButton(layoutWidget);
        stop->setObjectName(QString::fromUtf8("stop"));

        gridLayout->addWidget(stop, 3, 0, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, -20, 830, 181));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 3, 1, 1);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 4, 1, 1);

        posx = new QDoubleSpinBox(layoutWidget1);
        posx->setObjectName(QString::fromUtf8("posx"));
        posx->setMinimum(-8000.000000000000000);
        posx->setMaximum(8000.000000000000000);
        posx->setValue(0.000000000000000);

        gridLayout_2->addWidget(posx, 1, 0, 1, 1);

        velx = new QDoubleSpinBox(layoutWidget1);
        velx->setObjectName(QString::fromUtf8("velx"));
        velx->setMinimum(-1000000000000000013946113804119924437974165856986638331112094170909680489426130543638408513078605724209795153399497011464465488473637220910340574757582946907032347746826714825234078949864321840610832155574248213693581484614981956096327942144.000000000000000);
        velx->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);

        gridLayout_2->addWidget(velx, 1, 4, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 5, 1, 1);

        radio = new QDoubleSpinBox(layoutWidget1);
        radio->setObjectName(QString::fromUtf8("radio"));
        radio->setMinimum(100.000000000000000);
        radio->setMaximum(300.000000000000000);

        gridLayout_2->addWidget(radio, 1, 3, 1, 1);

        posy = new QDoubleSpinBox(layoutWidget1);
        posy->setObjectName(QString::fromUtf8("posy"));
        posy->setMinimum(-8000.000000000000000);
        posy->setMaximum(8000.000000000000000);

        gridLayout_2->addWidget(posy, 1, 1, 1, 1);

        vely = new QDoubleSpinBox(layoutWidget1);
        vely->setObjectName(QString::fromUtf8("vely"));
        vely->setReadOnly(false);
        vely->setAccelerated(false);
        vely->setProperty("showGroupSeparator", QVariant(false));
        vely->setMinimum(-100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        vely->setMaximum(100000000000000001097906362944045541740492309677311846336810682903157585404911491537163328978494688899061249669721172515611590283743140088328307009198146046031271664502933027185697489699588559043338384466165001178426897626212945177628091195786707458122783970171784415105291802893207873272974885715430223118336.000000000000000);
        vely->setValue(0.000000000000000);

        gridLayout_2->addWidget(vely, 1, 5, 1, 1);

        masa = new QDoubleSpinBox(layoutWidget1);
        masa->setObjectName(QString::fromUtf8("masa"));
        masa->setMinimum(20.000000000000000);
        masa->setMaximum(100000.000000000000000);

        gridLayout_2->addWidget(masa, 1, 2, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);

        delete_ = new QPushButton(centralwidget);
        delete_->setObjectName(QString::fromUtf8("delete_"));
        delete_->setGeometry(QRect(680, 240, 83, 31));
        next = new QPushButton(centralwidget);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(790, 240, 83, 31));
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(40, 240, 83, 31));
        ok = new QPushButton(centralwidget);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(790, 240, 83, 31));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(360, 239, 280, 91));
        splitter->setOrientation(Qt::Vertical);
        label_7 = new QLabel(splitter);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        splitter->addWidget(label_7);
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        splitter->addWidget(lineEdit);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        save->setText(QApplication::translate("MainWindow", "Save", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Close", nullptr));
        add->setText(QApplication::translate("MainWindow", "Add Planet", nullptr));
        view->setText(QApplication::translate("MainWindow", "view planets", nullptr));
        play->setText(QApplication::translate("MainWindow", "Play", nullptr));
        stop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Radio:", nullptr));
        label->setText(QApplication::translate("MainWindow", "Posicion X:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Posicion Y:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Vel X:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Vel y:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Masa:", nullptr));
        delete_->setText(QApplication::translate("MainWindow", "delete", nullptr));
        next->setText(QApplication::translate("MainWindow", "next", nullptr));
        back->setText(QApplication::translate("MainWindow", "back", nullptr));
        ok->setText(QApplication::translate("MainWindow", "OK", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Ingrese nombre del archivo txt donde\n"
"guardar las posciones de los planetas:\n"
"\n"
"", nullptr));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
