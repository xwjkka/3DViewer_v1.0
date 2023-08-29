/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <myopenglwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    MyOpenGLWidget *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *polygons;
    QPushButton *applySettings;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *saveImage;
    QPushButton *recordScreencast;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QComboBox *vertexDisplayBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QComboBox *vertexColorBox;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QComboBox *lineBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QComboBox *lineColorBox;
    QPushButton *transformButton;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_16;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_17;
    QDoubleSpinBox *doubleSpinBox_3;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_18;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_21;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_22;
    QDoubleSpinBox *doubleSpinBox_6;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_7;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *projectionBox;
    QCheckBox *checkBox;
    QPushButton *SelectFileButton;
    QLabel *fileName;
    QLabel *label_4;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *vertices;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
    QComboBox *backgroundColorBox;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QSpinBox *vertexSizeBox;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QSpinBox *lineWidthBox;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1109, 619);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #4D504F;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new MyOpenGLWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 601, 581));
        widget->setCursor(QCursor(Qt::OpenHandCursor));
        widget->setStyleSheet(QString::fromUtf8("background-color: #3F4241;\n"
"color: red;"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(650, 110, 171, 31));
        verticalLayout = new QVBoxLayout(layoutWidget);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(-1);
#endif
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_4->addWidget(label_6);

        polygons = new QLabel(layoutWidget);
        polygons->setObjectName("polygons");
        polygons->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_4->addWidget(polygons);


        verticalLayout->addLayout(horizontalLayout_4);

        applySettings = new QPushButton(centralwidget);
        applySettings->setObjectName("applySettings");
        applySettings->setGeometry(QRect(650, 520, 151, 31));
        applySettings->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"padding: 5px;\n"
"border: none;\n"
"border-radius: 2px;\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 13px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:   #6E7170;;\n"
"}\n"
"QPushButton:pressed {\n"
"background: #3F4241;\n"
"}"));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(650, 570, 411, 38));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        saveImage = new QPushButton(layoutWidget1);
        saveImage->setObjectName("saveImage");
        saveImage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"padding: 5px;\n"
"border: none;\n"
"border-radius: 2px;\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 13px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:   #6E7170;;\n"
"}\n"
"QPushButton:pressed {\n"
"background: #3F4241;\n"
"}"));

        horizontalLayout_5->addWidget(saveImage);

        recordScreencast = new QPushButton(layoutWidget1);
        recordScreencast->setObjectName("recordScreencast");
        recordScreencast->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"padding: 5px;\n"
"border: none;\n"
"border-radius: 2px;\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 13px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:   #6E7170;;\n"
"}\n"
"QPushButton:pressed {\n"
"background: #3F4241;\n"
"}"));

        horizontalLayout_5->addWidget(recordScreencast);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(860, 400, 231, 71));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_9->addWidget(label_11);

        vertexDisplayBox = new QComboBox(layoutWidget2);
        vertexDisplayBox->addItem(QString());
        vertexDisplayBox->addItem(QString());
        vertexDisplayBox->addItem(QString());
        vertexDisplayBox->setObjectName("vertexDisplayBox");
        vertexDisplayBox->setStyleSheet(QString::fromUtf8("background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"border: none;\n"
"padding: 2px;"));

        horizontalLayout_9->addWidget(vertexDisplayBox);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_10->addWidget(label_12);

        vertexColorBox = new QComboBox(layoutWidget2);
        vertexColorBox->addItem(QString());
        vertexColorBox->addItem(QString());
        vertexColorBox->addItem(QString());
        vertexColorBox->addItem(QString());
        vertexColorBox->setObjectName("vertexColorBox");
        vertexColorBox->setStyleSheet(QString::fromUtf8("background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"border: none;\n"
"padding: 2px;"));

        horizontalLayout_10->addWidget(vertexColorBox);


        verticalLayout_4->addLayout(horizontalLayout_10);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(650, 400, 201, 71));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_13->addWidget(label_8);

        lineBox = new QComboBox(layoutWidget3);
        lineBox->addItem(QString());
        lineBox->addItem(QString());
        lineBox->setObjectName("lineBox");
        lineBox->setStyleSheet(QString::fromUtf8("background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"border: none;\n"
"padding: 2px;"));

        horizontalLayout_13->addWidget(lineBox);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_7->addWidget(label_9);

        lineColorBox = new QComboBox(layoutWidget3);
        lineColorBox->addItem(QString());
        lineColorBox->addItem(QString());
        lineColorBox->addItem(QString());
        lineColorBox->addItem(QString());
        lineColorBox->setObjectName("lineColorBox");
        lineColorBox->setStyleSheet(QString::fromUtf8("background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"border: none;\n"
"padding: 2px;"));

        horizontalLayout_7->addWidget(lineColorBox);


        verticalLayout_3->addLayout(horizontalLayout_7);

        transformButton = new QPushButton(centralwidget);
        transformButton->setObjectName("transformButton");
        transformButton->setGeometry(QRect(650, 310, 150, 30));
        transformButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"padding: 5px;\n"
"border: none;\n"
"border-radius: 2px;\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 13px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:   #6E7170;;\n"
"}\n"
"QPushButton:pressed {\n"
"background: #3F4241;\n"
"}"));
        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(750, 180, 322, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget4);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_2->addWidget(label_15);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget4);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setStyleSheet(QString::fromUtf8("QObject {\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 15px;\n"
"}"));
        doubleSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        doubleSpinBox->setAccelerated(false);
        doubleSpinBox->setProperty("showGroupSeparator", QVariant(true));
        doubleSpinBox->setMinimum(-99.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);

        label_16 = new QLabel(layoutWidget4);
        label_16->setObjectName("label_16");
        label_16->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_2->addWidget(label_16);

        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget4);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("QObject {\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 15px;\n"
"}"));
        doubleSpinBox_2->setMinimum(-99.000000000000000);
        doubleSpinBox_2->setSingleStep(0.100000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox_2);

        label_17 = new QLabel(layoutWidget4);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_2->addWidget(label_17);

        doubleSpinBox_3 = new QDoubleSpinBox(layoutWidget4);
        doubleSpinBox_3->setObjectName("doubleSpinBox_3");
        doubleSpinBox_3->setStyleSheet(QString::fromUtf8("QObject {\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 15px;\n"
"}"));
        doubleSpinBox_3->setMinimum(-99.000000000000000);
        doubleSpinBox_3->setSingleStep(0.100000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox_3);

        layoutWidget5 = new QWidget(centralwidget);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(750, 220, 321, 41));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget5);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_14->addWidget(label_18);

        doubleSpinBox_4 = new QDoubleSpinBox(layoutWidget5);
        doubleSpinBox_4->setObjectName("doubleSpinBox_4");
        doubleSpinBox_4->setStyleSheet(QString::fromUtf8("QObject {\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 15px;\n"
"}"));
        doubleSpinBox_4->setMinimum(-99.000000000000000);
        doubleSpinBox_4->setSingleStep(0.100000000000000);

        horizontalLayout_14->addWidget(doubleSpinBox_4);

        label_21 = new QLabel(layoutWidget5);
        label_21->setObjectName("label_21");
        label_21->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_14->addWidget(label_21);

        doubleSpinBox_5 = new QDoubleSpinBox(layoutWidget5);
        doubleSpinBox_5->setObjectName("doubleSpinBox_5");
        doubleSpinBox_5->setStyleSheet(QString::fromUtf8("QObject {\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 15px;\n"
"}"));
        doubleSpinBox_5->setMinimum(-99.000000000000000);
        doubleSpinBox_5->setSingleStep(0.100000000000000);

        horizontalLayout_14->addWidget(doubleSpinBox_5);

        label_22 = new QLabel(layoutWidget5);
        label_22->setObjectName("label_22");
        label_22->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_14->addWidget(label_22);

        doubleSpinBox_6 = new QDoubleSpinBox(layoutWidget5);
        doubleSpinBox_6->setObjectName("doubleSpinBox_6");
        doubleSpinBox_6->setStyleSheet(QString::fromUtf8("QObject {\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 15px;\n"
"}"));
        doubleSpinBox_6->setMinimum(-99.000000000000000);
        doubleSpinBox_6->setSingleStep(0.100000000000000);

        horizontalLayout_14->addWidget(doubleSpinBox_6);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(650, 230, 61, 16));
        QFont font;
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(650, 190, 81, 21));
        label->setMinimumSize(QSize(0, 0));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(650, 270, 39, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));
        doubleSpinBox_7 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_7->setObjectName("doubleSpinBox_7");
        doubleSpinBox_7->setGeometry(QRect(780, 270, 90, 20));
        doubleSpinBox_7->setStyleSheet(QString::fromUtf8("QObject {\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 15px;\n"
"}"));
        doubleSpinBox_7->setDecimals(1);
        doubleSpinBox_7->setMinimum(0.000000000000000);
        doubleSpinBox_7->setMaximum(20.000000000000000);
        doubleSpinBox_7->setSingleStep(0.100000000000000);
        doubleSpinBox_7->setValue(1.000000000000000);
        layoutWidget6 = new QWidget(centralwidget);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(650, 360, 201, 34));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_7 = new QLabel(layoutWidget6);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_6->addWidget(label_7);

        projectionBox = new QComboBox(layoutWidget6);
        projectionBox->addItem(QString());
        projectionBox->addItem(QString());
        projectionBox->setObjectName("projectionBox");
        projectionBox->setStyleSheet(QString::fromUtf8("background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"border: none;\n"
"padding: 2px;"));

        horizontalLayout_6->addWidget(projectionBox);


        horizontalLayout_15->addLayout(horizontalLayout_6);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(650, 160, 76, 20));
        checkBox->setStyleSheet(QString::fromUtf8("color:#E5E3DB;\n"
""));
        SelectFileButton = new QPushButton(centralwidget);
        SelectFileButton->setObjectName("SelectFileButton");
        SelectFileButton->setGeometry(QRect(650, 20, 161, 31));
        SelectFileButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"padding: 5px;\n"
"border: none;\n"
"border-radius: 2px;\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:   #6E7170;;\n"
"}\n"
"QPushButton:pressed {\n"
"background: #3F4241;\n"
"}"));
        fileName = new QLabel(centralwidget);
        fileName->setObjectName("fileName");
        fileName->setGeometry(QRect(840, 20, 240, 30));
        fileName->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(650, 70, 169, 20));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: #E5E3DB;\n"
"font-size: 15px;"));
        layoutWidget7 = new QWidget(centralwidget);
        layoutWidget7->setObjectName("layoutWidget7");
        layoutWidget7->setGeometry(QRect(650, 89, 171, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget7);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_3->addWidget(label_5);

        vertices = new QLabel(layoutWidget7);
        vertices->setObjectName("vertices");
        vertices->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_3->addWidget(vertices);

        layoutWidget8 = new QWidget(centralwidget);
        layoutWidget8->setObjectName("layoutWidget8");
        layoutWidget8->setGeometry(QRect(860, 360, 231, 32));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget8);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_12->addWidget(label_14);

        backgroundColorBox = new QComboBox(layoutWidget8);
        backgroundColorBox->addItem(QString());
        backgroundColorBox->addItem(QString());
        backgroundColorBox->addItem(QString());
        backgroundColorBox->addItem(QString());
        backgroundColorBox->addItem(QString());
        backgroundColorBox->addItem(QString());
        backgroundColorBox->addItem(QString());
        backgroundColorBox->setObjectName("backgroundColorBox");
        backgroundColorBox->setStyleSheet(QString::fromUtf8("background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"border: none;\n"
"padding: 2px;"));

        horizontalLayout_12->addWidget(backgroundColorBox);

        layoutWidget9 = new QWidget(centralwidget);
        layoutWidget9->setObjectName("layoutWidget9");
        layoutWidget9->setGeometry(QRect(860, 480, 221, 29));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget9);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_11->addWidget(label_13);

        vertexSizeBox = new QSpinBox(layoutWidget9);
        vertexSizeBox->setObjectName("vertexSizeBox");
        vertexSizeBox->setStyleSheet(QString::fromUtf8("QObject {\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 15px;\n"
"}"));
        vertexSizeBox->setMinimum(1);
        vertexSizeBox->setMaximum(20);

        horizontalLayout_11->addWidget(vertexSizeBox);

        layoutWidget10 = new QWidget(centralwidget);
        layoutWidget10->setObjectName("layoutWidget10");
        layoutWidget10->setGeometry(QRect(650, 480, 191, 29));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget10);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("color: #E5E3DB;"));

        horizontalLayout_8->addWidget(label_10);

        lineWidthBox = new QSpinBox(layoutWidget10);
        lineWidthBox->setObjectName("lineWidthBox");
        lineWidthBox->setStyleSheet(QString::fromUtf8("QObject {\n"
"background-color: #5B5E5D;\n"
"color:#E5E3DB;\n"
"font-size: 15px;\n"
"}"));
        lineWidthBox->setMinimum(1);
        lineWidthBox->setMaximum(20);

        horizontalLayout_8->addWidget(lineWidthBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1109, 24));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);
        QObject::connect(transformButton, SIGNAL(clicked()), MainWindow, SLOT(on_transformButton_clicked()));
        QObject::connect(checkBox, &QCheckBox::clicked, widget, qOverload<>(&MyOpenGLWidget::on_checkAxes_clicked));
        QObject::connect(SelectFileButton, &QPushButton::clicked, widget, qOverload<>(&MyOpenGLWidget::on_SelectFileButton_clicked));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "3DViewer", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Polygons:", nullptr));
        polygons->setText(QString());
        applySettings->setText(QCoreApplication::translate("MainWindow", "Apply settings", nullptr));
        saveImage->setText(QCoreApplication::translate("MainWindow", "Save image", nullptr));
        recordScreencast->setText(QCoreApplication::translate("MainWindow", "Record screencast", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Display method</span></p></body></html>", nullptr));
        vertexDisplayBox->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        vertexDisplayBox->setItemText(1, QCoreApplication::translate("MainWindow", "Circle", nullptr));
        vertexDisplayBox->setItemText(2, QCoreApplication::translate("MainWindow", "Square", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Vertex color</span></p></body></html>", nullptr));
        vertexColorBox->setItemText(0, QCoreApplication::translate("MainWindow", "White", nullptr));
        vertexColorBox->setItemText(1, QCoreApplication::translate("MainWindow", "Red", nullptr));
        vertexColorBox->setItemText(2, QCoreApplication::translate("MainWindow", "Green", nullptr));
        vertexColorBox->setItemText(3, QCoreApplication::translate("MainWindow", "Blue", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Line type</span></p></body></html>", nullptr));
        lineBox->setItemText(0, QCoreApplication::translate("MainWindow", "Solid", nullptr));
        lineBox->setItemText(1, QCoreApplication::translate("MainWindow", "Dashed", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Line color</span></p></body></html>", nullptr));
        lineColorBox->setItemText(0, QCoreApplication::translate("MainWindow", "White", nullptr));
        lineColorBox->setItemText(1, QCoreApplication::translate("MainWindow", "Red", nullptr));
        lineColorBox->setItemText(2, QCoreApplication::translate("MainWindow", "Green", nullptr));
        lineColorBox->setItemText(3, QCoreApplication::translate("MainWindow", "Blue", nullptr));

        transformButton->setText(QCoreApplication::translate("MainWindow", "Permutation", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">X: </span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Y: </span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Z: </span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">X: </span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Y: </span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Z: </span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Rotation:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Translation:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Scale:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Projection type</span></p></body></html>", nullptr));
        projectionBox->setItemText(0, QCoreApplication::translate("MainWindow", "Parallel", nullptr));
        projectionBox->setItemText(1, QCoreApplication::translate("MainWindow", "Central", nullptr));

        checkBox->setText(QCoreApplication::translate("MainWindow", "Axis", nullptr));
        SelectFileButton->setText(QCoreApplication::translate("MainWindow", "select the model file", nullptr));
        fileName->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Model info", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Vertices:", nullptr));
        vertices->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Background color</span></p></body></html>", nullptr));
        backgroundColorBox->setItemText(0, QCoreApplication::translate("MainWindow", "Black", nullptr));
        backgroundColorBox->setItemText(1, QCoreApplication::translate("MainWindow", "White", nullptr));
        backgroundColorBox->setItemText(2, QCoreApplication::translate("MainWindow", "Pink", nullptr));
        backgroundColorBox->setItemText(3, QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        backgroundColorBox->setItemText(4, QCoreApplication::translate("MainWindow", "Red", nullptr));
        backgroundColorBox->setItemText(5, QCoreApplication::translate("MainWindow", "Green", nullptr));
        backgroundColorBox->setItemText(6, QCoreApplication::translate("MainWindow", "Blue", nullptr));

        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Vertex size</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Line width</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
