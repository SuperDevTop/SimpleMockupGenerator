/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *openFile;
    QPushButton *save;
    QPushButton *openFolder;
    QSpacerItem *horizontalSpacer;
    QPushButton *generate;
    QLabel *width_label;
    QLabel *height_label;
    QLineEdit *leWidth;
    QLineEdit *leHeight;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(615, 396);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        title = new QLabel(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(170, 0, 271, 71));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        title->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("MPH 2B Damase"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(100, 120, 411, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        openFile = new QPushButton(gridLayoutWidget);
        openFile->setObjectName(QString::fromUtf8("openFile"));
        openFile->setMinimumSize(QSize(0, 50));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        openFile->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Black"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        openFile->setFont(font1);

        gridLayout->addWidget(openFile, 0, 0, 1, 1);

        save = new QPushButton(gridLayoutWidget);
        save->setObjectName(QString::fromUtf8("save"));
        save->setMinimumSize(QSize(100, 50));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        save->setPalette(palette2);
        save->setFont(font1);

        gridLayout->addWidget(save, 0, 2, 1, 1);

        openFolder = new QPushButton(gridLayoutWidget);
        openFolder->setObjectName(QString::fromUtf8("openFolder"));
        openFolder->setMinimumSize(QSize(0, 50));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        openFolder->setPalette(palette3);
        openFolder->setFont(font1);

        gridLayout->addWidget(openFolder, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        generate = new QPushButton(gridLayoutWidget);
        generate->setObjectName(QString::fromUtf8("generate"));
        generate->setMinimumSize(QSize(0, 50));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        generate->setPalette(palette4);
        generate->setFont(font1);

        gridLayout->addWidget(generate, 1, 2, 1, 1);

        width_label = new QLabel(centralwidget);
        width_label->setObjectName(QString::fromUtf8("width_label"));
        width_label->setGeometry(QRect(100, 80, 81, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(18);
        width_label->setFont(font2);
        height_label = new QLabel(centralwidget);
        height_label->setObjectName(QString::fromUtf8("height_label"));
        height_label->setGeometry(QRect(330, 80, 91, 31));
        height_label->setFont(font2);
        leWidth = new QLineEdit(centralwidget);
        leWidth->setObjectName(QString::fromUtf8("leWidth"));
        leWidth->setGeometry(QRect(180, 80, 91, 31));
        QFont font3;
        font3.setPointSize(16);
        leWidth->setFont(font3);
        leHeight = new QLineEdit(centralwidget);
        leHeight->setObjectName(QString::fromUtf8("leHeight"));
        leHeight->setGeometry(QRect(420, 80, 91, 31));
        leHeight->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 615, 20));
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
        title->setText(QApplication::translate("MainWindow", "Mockup Generator", nullptr));
        openFile->setText(QApplication::translate("MainWindow", "Open File", nullptr));
        save->setText(QApplication::translate("MainWindow", "Save", nullptr));
        openFolder->setText(QApplication::translate("MainWindow", "Open Folder", nullptr));
        generate->setText(QApplication::translate("MainWindow", "Generate", nullptr));
        width_label->setText(QApplication::translate("MainWindow", "width:", nullptr));
        height_label->setText(QApplication::translate("MainWindow", "height:", nullptr));
        leWidth->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
