/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_44;
    QHBoxLayout *horizontalLayout_14;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget_5;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_9;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_43;
    QLabel *labelDate1;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_46;
    QLabel *labelDate2;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_47;
    QLabel *labelDate3;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_48;
    QLabel *labelDate4;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_49;
    QLabel *labelDate5;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_50;
    QLabel *labelDate6;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_19;
    QLabel *label_20;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_21;
    QLabel *label_22;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_29;
    QLabel *label_30;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_25;
    QLabel *label_26;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_23;
    QLabel *label_24;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_27;
    QLabel *label_28;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_36;
    QLabel *label_35;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_25;
    QLabel *labelhigh;
    QLabel *labellow;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_51;
    QLabel *labelFl_1;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_52;
    QLabel *labelFl_2;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_53;
    QLabel *labelFl_3;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_54;
    QLabel *labelFl_4;
    QVBoxLayout *verticalLayout_23;
    QLabel *label_55;
    QLabel *labelFl_5;
    QVBoxLayout *verticalLayout_24;
    QLabel *label_56;
    QLabel *labelFl_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(789, 511);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 791, 511));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-image: url(:/res/background.png);\n"
"}\n"
"QLabel{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius:4px;\n"
"	background-color: rgba(60, 60, 60,0);\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        horizontalLayout_16 = new QHBoxLayout(widget);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"	}"));

        horizontalLayout_13->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout_13->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_4);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_44 = new QLabel(widget);
        label_44->setObjectName("label_44");
        label_44->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	font: 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));

        horizontalLayout_12->addWidget(label_44);


        horizontalLayout_13->addLayout(horizontalLayout_12);


        verticalLayout_12->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        widget_11 = new QWidget(widget);
        widget_11->setObjectName("widget_11");
        verticalLayout_11 = new QVBoxLayout(widget_11);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(4);
        verticalLayout_10->setObjectName("verticalLayout_10");
        widget_2 = new QWidget(widget_11);
        widget_2->setObjectName("widget_2");
        horizontalLayout_7 = new QHBoxLayout(widget_2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/type/ZhenYu.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(label);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	font: 36pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_7->addWidget(widget_3);


        verticalLayout_10->addWidget(widget_2);

        widget_4 = new QWidget(widget_11);
        widget_4->setObjectName("widget_4");
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);

        plainTextEdit = new QPlainTextEdit(widget_4);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setMinimumSize(QSize(0, 40));
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(60, 60, 60,0);\n"
"border-radius:5px;\n"
"border: none;\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(plainTextEdit);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        widget_5->setMinimumSize(QSize(200, 100));
        widget_5->setMaximumSize(QSize(400, 300));
        widget_5->setStyleSheet(QString::fromUtf8("\n"
"QWidget{\n"
"	background-color: rgb(170, 170, 255);\n"
"	border-radius:6px;\n"
"}"));
        gridLayout = new QGridLayout(widget_5);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(widget_5);
        label_7->setObjectName("label_7");
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/res/humidity.png")));
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(label_7);

        label_11 = new QLabel(widget_5);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(label_11);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(widget_5);
        label_5->setObjectName("label_5");
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/res/wind.png")));
        label_5->setScaledContents(true);

        horizontalLayout_3->addWidget(label_5);

        label_13 = new QLabel(widget_5);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_13);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_6 = new QLabel(widget_5);
        label_6->setObjectName("label_6");
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/res/pm25.png")));
        label_6->setScaledContents(true);

        horizontalLayout_5->addWidget(label_6);

        label_10 = new QLabel(widget_5);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(label_10);


        gridLayout->addLayout(horizontalLayout_5, 0, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_8 = new QLabel(widget_5);
        label_8->setObjectName("label_8");
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/res/aqi.png")));
        label_8->setScaledContents(true);

        horizontalLayout_6->addWidget(label_8);

        label_12 = new QLabel(widget_5);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_6->addWidget(label_12);


        gridLayout->addLayout(horizontalLayout_6, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        verticalLayout_2->addWidget(widget_5);


        verticalLayout_10->addWidget(widget_4);


        verticalLayout_11->addLayout(verticalLayout_10);


        horizontalLayout_14->addWidget(widget_11);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName("widget_6");
        verticalLayout_9 = new QVBoxLayout(widget_6);
        verticalLayout_9->setObjectName("verticalLayout_9");
        widget_12 = new QWidget(widget_6);
        widget_12->setObjectName("widget_12");
        widget_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: rgb(80, 255, 255);\n"
"	border - radius: 10px;\n"
"}"));
        horizontalLayout_15 = new QHBoxLayout(widget_12);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_43 = new QLabel(widget_12);
        label_43->setObjectName("label_43");
        label_43->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_13->addWidget(label_43);

        labelDate1 = new QLabel(widget_12);
        labelDate1->setObjectName("labelDate1");
        labelDate1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_13->addWidget(labelDate1);


        horizontalLayout_15->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName("verticalLayout_14");
        label_46 = new QLabel(widget_12);
        label_46->setObjectName("label_46");
        label_46->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_14->addWidget(label_46);

        labelDate2 = new QLabel(widget_12);
        labelDate2->setObjectName("labelDate2");
        labelDate2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_14->addWidget(labelDate2);


        horizontalLayout_15->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setObjectName("verticalLayout_15");
        label_47 = new QLabel(widget_12);
        label_47->setObjectName("label_47");
        label_47->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_15->addWidget(label_47);

        labelDate3 = new QLabel(widget_12);
        labelDate3->setObjectName("labelDate3");
        labelDate3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_15->addWidget(labelDate3);


        horizontalLayout_15->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setObjectName("verticalLayout_16");
        label_48 = new QLabel(widget_12);
        label_48->setObjectName("label_48");
        label_48->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_16->addWidget(label_48);

        labelDate4 = new QLabel(widget_12);
        labelDate4->setObjectName("labelDate4");
        labelDate4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_16->addWidget(labelDate4);


        horizontalLayout_15->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName("verticalLayout_17");
        label_49 = new QLabel(widget_12);
        label_49->setObjectName("label_49");
        label_49->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_17->addWidget(label_49);

        labelDate5 = new QLabel(widget_12);
        labelDate5->setObjectName("labelDate5");
        labelDate5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_17->addWidget(labelDate5);


        horizontalLayout_15->addLayout(verticalLayout_17);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(0);
        verticalLayout_18->setObjectName("verticalLayout_18");
        label_50 = new QLabel(widget_12);
        label_50->setObjectName("label_50");
        label_50->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_18->addWidget(label_50);

        labelDate6 = new QLabel(widget_12);
        labelDate6->setObjectName("labelDate6");
        labelDate6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_18->addWidget(labelDate6);


        horizontalLayout_15->addLayout(verticalLayout_18);


        verticalLayout_9->addWidget(widget_12);

        widget_8 = new QWidget(widget_6);
        widget_8->setObjectName("widget_8");
        widget_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background - size: 50px 50px;\n"
"	\n"
"	background-color: rgb(40, 147, 228);\n"
"}"));
        horizontalLayout_9 = new QHBoxLayout(widget_8);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_19 = new QLabel(widget_8);
        label_19->setObjectName("label_19");
        label_19->setMinimumSize(QSize(0, 30));
        label_19->setStyleSheet(QString::fromUtf8(""));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        label_19->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_19);

        label_20 = new QLabel(widget_8);
        label_20->setObjectName("label_20");
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_20);


        horizontalLayout_9->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_21 = new QLabel(widget_8);
        label_21->setObjectName("label_21");
        label_21->setMinimumSize(QSize(0, 30));
        label_21->setStyleSheet(QString::fromUtf8(""));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/res/type/XiaoYu.png")));
        label_21->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_21);

        label_22 = new QLabel(widget_8);
        label_22->setObjectName("label_22");
        label_22->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_22);


        horizontalLayout_9->addLayout(verticalLayout_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_29 = new QLabel(widget_8);
        label_29->setObjectName("label_29");
        label_29->setMinimumSize(QSize(0, 30));
        label_29->setStyleSheet(QString::fromUtf8(""));
        label_29->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Qing.png")));
        label_29->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(label_29);

        label_30 = new QLabel(widget_8);
        label_30->setObjectName("label_30");
        label_30->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(label_30);


        horizontalLayout_9->addLayout(verticalLayout_8);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_25 = new QLabel(widget_8);
        label_25->setObjectName("label_25");
        label_25->setMinimumSize(QSize(0, 30));
        label_25->setStyleSheet(QString::fromUtf8(""));
        label_25->setPixmap(QPixmap(QString::fromUtf8(":/res/type/ZhongYu.png")));
        label_25->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_25);

        label_26 = new QLabel(widget_8);
        label_26->setObjectName("label_26");
        label_26->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_26);


        horizontalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_23 = new QLabel(widget_8);
        label_23->setObjectName("label_23");
        label_23->setMinimumSize(QSize(0, 30));
        label_23->setStyleSheet(QString::fromUtf8(""));
        label_23->setPixmap(QPixmap(QString::fromUtf8(":/res/type/LeiZhenYu.png")));
        label_23->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_23);

        label_24 = new QLabel(widget_8);
        label_24->setObjectName("label_24");
        label_24->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_24);


        horizontalLayout_9->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_27 = new QLabel(widget_8);
        label_27->setObjectName("label_27");
        label_27->setMinimumSize(QSize(0, 30));
        label_27->setStyleSheet(QString::fromUtf8(""));
        label_27->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        label_27->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(label_27);

        label_28 = new QLabel(widget_8);
        label_28->setObjectName("label_28");
        label_28->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(label_28);


        horizontalLayout_9->addLayout(verticalLayout_7);


        verticalLayout_9->addWidget(widget_8);

        widget_9 = new QWidget(widget_6);
        widget_9->setObjectName("widget_9");
        widget_9->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_10 = new QHBoxLayout(widget_9);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_31 = new QLabel(widget_9);
        label_31->setObjectName("label_31");
        label_31->setMinimumSize(QSize(0, 0));
        label_31->setMaximumSize(QSize(16777215, 35));
        label_31->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background-color: rgb(0, 170, 0);\n"
"}\n"
"\n"
""));
        label_31->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_31);

        label_32 = new QLabel(widget_9);
        label_32->setObjectName("label_32");
        label_32->setMinimumSize(QSize(0, 10));
        label_32->setMaximumSize(QSize(16777215, 35));
        label_32->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 127,0.7);"));
        label_32->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_32);

        label_33 = new QLabel(widget_9);
        label_33->setObjectName("label_33");
        label_33->setMinimumSize(QSize(0, 10));
        label_33->setMaximumSize(QSize(16777215, 35));
        label_33->setStyleSheet(QString::fromUtf8("background-color:rgba(170, 0, 0,0.5);"));
        label_33->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_33);

        label_34 = new QLabel(widget_9);
        label_34->setObjectName("label_34");
        label_34->setMinimumSize(QSize(0, 10));
        label_34->setMaximumSize(QSize(16777215, 35));
        label_34->setStyleSheet(QString::fromUtf8("background-color:rgba(170, 0, 0,0.7);"));
        label_34->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_34);

        label_36 = new QLabel(widget_9);
        label_36->setObjectName("label_36");
        label_36->setMinimumSize(QSize(0, 10));
        label_36->setMaximumSize(QSize(16777215, 35));
        label_36->setStyleSheet(QString::fromUtf8("background-color:rgba(170, 0, 0,0.85);"));
        label_36->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_36);

        label_35 = new QLabel(widget_9);
        label_35->setObjectName("label_35");
        label_35->setMinimumSize(QSize(0, 10));
        label_35->setMaximumSize(QSize(16777215, 35));
        label_35->setStyleSheet(QString::fromUtf8("background-color:rgba(170, 0, 0,1);"));
        label_35->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_35);


        verticalLayout_9->addWidget(widget_9);

        widget_7 = new QWidget(widget_6);
        widget_7->setObjectName("widget_7");
        verticalLayout_25 = new QVBoxLayout(widget_7);
        verticalLayout_25->setSpacing(0);
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        labelhigh = new QLabel(widget_7);
        labelhigh->setObjectName("labelhigh");
        labelhigh->setMinimumSize(QSize(0, 90));
        labelhigh->setMaximumSize(QSize(16777215, 100));
        labelhigh->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(89, 89, 89);"));

        verticalLayout_25->addWidget(labelhigh);

        labellow = new QLabel(widget_7);
        labellow->setObjectName("labellow");
        labellow->setMinimumSize(QSize(0, 90));
        labellow->setMaximumSize(QSize(16777215, 100));
        labellow->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 89, 89);"));

        verticalLayout_25->addWidget(labellow);


        verticalLayout_9->addWidget(widget_7);

        widget_13 = new QWidget(widget_6);
        widget_13->setObjectName("widget_13");
        widget_13->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	background-color: rgb(85, 170, 255);\n"
"}"));
        horizontalLayout_8 = new QHBoxLayout(widget_13);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setObjectName("verticalLayout_19");
        label_51 = new QLabel(widget_13);
        label_51->setObjectName("label_51");
        label_51->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_19->addWidget(label_51);

        labelFl_1 = new QLabel(widget_13);
        labelFl_1->setObjectName("labelFl_1");
        labelFl_1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_19->addWidget(labelFl_1);


        horizontalLayout_8->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(0);
        verticalLayout_20->setObjectName("verticalLayout_20");
        label_52 = new QLabel(widget_13);
        label_52->setObjectName("label_52");
        label_52->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_20->addWidget(label_52);

        labelFl_2 = new QLabel(widget_13);
        labelFl_2->setObjectName("labelFl_2");
        labelFl_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_20->addWidget(labelFl_2);


        horizontalLayout_8->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setObjectName("verticalLayout_21");
        label_53 = new QLabel(widget_13);
        label_53->setObjectName("label_53");
        label_53->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_21->addWidget(label_53);

        labelFl_3 = new QLabel(widget_13);
        labelFl_3->setObjectName("labelFl_3");
        labelFl_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_21->addWidget(labelFl_3);


        horizontalLayout_8->addLayout(verticalLayout_21);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(0);
        verticalLayout_22->setObjectName("verticalLayout_22");
        label_54 = new QLabel(widget_13);
        label_54->setObjectName("label_54");
        label_54->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_22->addWidget(label_54);

        labelFl_4 = new QLabel(widget_13);
        labelFl_4->setObjectName("labelFl_4");
        labelFl_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_22->addWidget(labelFl_4);


        horizontalLayout_8->addLayout(verticalLayout_22);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(0);
        verticalLayout_23->setObjectName("verticalLayout_23");
        label_55 = new QLabel(widget_13);
        label_55->setObjectName("label_55");
        label_55->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_23->addWidget(label_55);

        labelFl_5 = new QLabel(widget_13);
        labelFl_5->setObjectName("labelFl_5");
        labelFl_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_23->addWidget(labelFl_5);


        horizontalLayout_8->addLayout(verticalLayout_23);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(0);
        verticalLayout_24->setObjectName("verticalLayout_24");
        label_56 = new QLabel(widget_13);
        label_56->setObjectName("label_56");
        label_56->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_24->addWidget(label_56);

        labelFl_6 = new QLabel(widget_13);
        labelFl_6->setObjectName("labelFl_6");
        labelFl_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_24->addWidget(labelFl_6);


        horizontalLayout_8->addLayout(verticalLayout_24);


        verticalLayout_9->addWidget(widget_13);


        horizontalLayout_14->addWidget(widget_6);


        verticalLayout_12->addLayout(horizontalLayout_14);


        horizontalLayout_16->addLayout(verticalLayout_12);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "2024/12/20\346\230\237\346\234\237\344\272\224", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "32C\302\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221\350\275\254\346\231\264  19~31C\302\260", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindow", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\350\200\201\344\272\272\345\260\217\345\255\251\344\270\215\345\256\234\345\244\226\345\207\272\351\224\273\347\202\274 ", nullptr));
        label_7->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246\n"
"60%", nullptr));
        label_5->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216\n"
"3\347\272\247", nullptr));
        label_6->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "PM2.5\n"
"10", nullptr));
        label_8->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217\n"
"\344\274\230", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "\346\230\250\345\244\251", nullptr));
        labelDate1->setText(QCoreApplication::translate("MainWindow", "01/01", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        labelDate2->setText(QCoreApplication::translate("MainWindow", "01/02", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "\346\230\216\345\244\251", nullptr));
        labelDate3->setText(QCoreApplication::translate("MainWindow", "01/03", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\233\233", nullptr));
        labelDate4->setText(QCoreApplication::translate("MainWindow", "01/04", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\272\224", nullptr));
        labelDate5->setText(QCoreApplication::translate("MainWindow", "01/05", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\205\255", nullptr));
        labelDate6->setText(QCoreApplication::translate("MainWindow", "01/06", nullptr));
        label_19->setText(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        label_21->setText(QString());
        label_22->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        label_29->setText(QString());
        label_30->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        label_25->setText(QString());
        label_26->setText(QCoreApplication::translate("MainWindow", "\344\270\255\351\233\250", nullptr));
        label_23->setText(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "\351\233\267\351\230\265\351\233\250", nullptr));
        label_27->setText(QString());
        label_28->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\350\211\257", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\350\275\273\345\272\246", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\272\246", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\272\246", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "\344\270\245\351\207\215", nullptr));
        labelhigh->setText(QString());
        labellow->setText(QString());
        label_51->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        labelFl_1->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        labelFl_2->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        labelFl_3->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        labelFl_4->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        labelFl_5->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        labelFl_6->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
