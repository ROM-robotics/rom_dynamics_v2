/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *mappingBtn;
    QPushButton *navigationBtn;
    QPushButton *remappingBtn;
    QPushButton *btnForward;
    QPushButton *btnStop;
    QPushButton *btnRight;
    QPushButton *btnLeft;
    QPushButton *btnEstop;
    QPushButton *shutdownBtn;
    QLabel *statusLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *myVerticalLayout;
    QGraphicsView *graphicsView;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *xLabel;
    QLabel *yLabel;
    QLabel *phiLabel;
    QLabel *xValueLabel;
    QLabel *yValueLabel;
    QLabel *phiValueLabel;
    QPushButton *openMapBtn;
    QPushButton *selectMapBtn;
    QPushButton *saveMapBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1085);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mappingBtn = new QPushButton(centralwidget);
        mappingBtn->setObjectName(QString::fromUtf8("mappingBtn"));
        mappingBtn->setGeometry(QRect(70, 80, 261, 71));
        navigationBtn = new QPushButton(centralwidget);
        navigationBtn->setObjectName(QString::fromUtf8("navigationBtn"));
        navigationBtn->setGeometry(QRect(390, 80, 261, 71));
        navigationBtn->setStyleSheet(QString::fromUtf8("background-color: green;"));
        remappingBtn = new QPushButton(centralwidget);
        remappingBtn->setObjectName(QString::fromUtf8("remappingBtn"));
        remappingBtn->setGeometry(QRect(710, 80, 261, 71));
        btnForward = new QPushButton(centralwidget);
        btnForward->setObjectName(QString::fromUtf8("btnForward"));
        btnForward->setGeometry(QRect(2550, 1250, 101, 101));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        btnForward->setFont(font1);
        btnStop = new QPushButton(centralwidget);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setGeometry(QRect(2550, 1560, 101, 101));
        btnStop->setFont(font1);
        btnRight = new QPushButton(centralwidget);
        btnRight->setObjectName(QString::fromUtf8("btnRight"));
        btnRight->setGeometry(QRect(2730, 1400, 101, 101));
        btnRight->setFont(font1);
        btnLeft = new QPushButton(centralwidget);
        btnLeft->setObjectName(QString::fromUtf8("btnLeft"));
        btnLeft->setGeometry(QRect(2360, 1400, 101, 101));
        btnLeft->setFont(font1);
        btnEstop = new QPushButton(centralwidget);
        btnEstop->setObjectName(QString::fromUtf8("btnEstop"));
        btnEstop->setGeometry(QRect(70, 1740, 221, 91));
        shutdownBtn = new QPushButton(centralwidget);
        shutdownBtn->setObjectName(QString::fromUtf8("shutdownBtn"));
        shutdownBtn->setGeometry(QRect(380, 1740, 221, 91));
        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(670, 1740, 1101, 91));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        statusLabel->setFont(font2);
        statusLabel->setStyleSheet(QString::fromUtf8("background-color: #000000\n"
";\n"
"color: rgb(246, 245, 244);"));
        statusLabel->setMargin(10);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 210, 1701, 1461));
        myVerticalLayout = new QVBoxLayout(verticalLayoutWidget);
        myVerticalLayout->setObjectName(QString::fromUtf8("myVerticalLayout"));
        myVerticalLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(verticalLayoutWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        myVerticalLayout->addWidget(graphicsView);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(1870, 210, 1161, 961));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1810, 1420, 271, 34));
        label->setText(QString::fromUtf8("Robot Position"));
        xLabel = new QLabel(centralwidget);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setGeometry(QRect(1810, 1490, 129, 34));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        xLabel->setFont(font3);
        yLabel = new QLabel(centralwidget);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        yLabel->setGeometry(QRect(1810, 1570, 129, 34));
        yLabel->setFont(font3);
        phiLabel = new QLabel(centralwidget);
        phiLabel->setObjectName(QString::fromUtf8("phiLabel"));
        phiLabel->setGeometry(QRect(1810, 1640, 129, 34));
        phiLabel->setFont(font3);
        xValueLabel = new QLabel(centralwidget);
        xValueLabel->setObjectName(QString::fromUtf8("xValueLabel"));
        xValueLabel->setGeometry(QRect(1868, 1490, 271, 34));
        yValueLabel = new QLabel(centralwidget);
        yValueLabel->setObjectName(QString::fromUtf8("yValueLabel"));
        yValueLabel->setGeometry(QRect(1868, 1570, 271, 34));
        phiValueLabel = new QLabel(centralwidget);
        phiValueLabel->setObjectName(QString::fromUtf8("phiValueLabel"));
        phiValueLabel->setGeometry(QRect(1868, 1640, 271, 34));
        openMapBtn = new QPushButton(centralwidget);
        openMapBtn->setObjectName(QString::fromUtf8("openMapBtn"));
        openMapBtn->setGeometry(QRect(1030, 80, 171, 71));
        selectMapBtn = new QPushButton(centralwidget);
        selectMapBtn->setObjectName(QString::fromUtf8("selectMapBtn"));
        selectMapBtn->setGeometry(QRect(1250, 80, 171, 71));
        saveMapBtn = new QPushButton(centralwidget);
        saveMapBtn->setObjectName(QString::fromUtf8("saveMapBtn"));
        saveMapBtn->setGeometry(QRect(1480, 80, 171, 71));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ROM Dynamics's Robot Suite", nullptr));
        mappingBtn->setText(QCoreApplication::translate("MainWindow", "Mapping", nullptr));
        navigationBtn->setText(QCoreApplication::translate("MainWindow", "Navigation", nullptr));
        remappingBtn->setText(QCoreApplication::translate("MainWindow", "Remapping", nullptr));
        btnForward->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        btnStop->setText(QCoreApplication::translate("MainWindow", "\342\233\224", nullptr));
        btnRight->setText(QCoreApplication::translate("MainWindow", "\342\237\263", nullptr));
        btnLeft->setText(QCoreApplication::translate("MainWindow", "\342\237\262", nullptr));
        btnEstop->setText(QCoreApplication::translate("MainWindow", "E-Stop", nullptr));
        shutdownBtn->setText(QCoreApplication::translate("MainWindow", "Shutdown", nullptr));
        statusLabel->setText(QString());
        xLabel->setText(QCoreApplication::translate("MainWindow", "x :", nullptr));
        yLabel->setText(QCoreApplication::translate("MainWindow", "y :", nullptr));
        phiLabel->setText(QCoreApplication::translate("MainWindow", "\317\225 :", nullptr));
        xValueLabel->setText(QCoreApplication::translate("MainWindow", "sync ...", nullptr));
        yValueLabel->setText(QCoreApplication::translate("MainWindow", "sync ...", nullptr));
        phiValueLabel->setText(QCoreApplication::translate("MainWindow", "sync ...", nullptr));
        openMapBtn->setText(QCoreApplication::translate("MainWindow", "Open Maps", nullptr));
        selectMapBtn->setText(QCoreApplication::translate("MainWindow", "Select Map", nullptr));
        saveMapBtn->setText(QCoreApplication::translate("MainWindow", "Save Map", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
