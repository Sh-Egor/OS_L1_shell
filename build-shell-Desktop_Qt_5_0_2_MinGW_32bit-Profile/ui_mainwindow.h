/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QRadioButton *crypt;
    QRadioButton *uncrypt;
    QRadioButton *print;
    QRadioButton *del;
    QPushButton *StartBtn;
    QGroupBox *ArchGroup;
    QLineEdit *ArchName;
    QGroupBox *FileNameGroup;
    QLineEdit *FileName;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(600, 300));
        MainWindow->setMaximumSize(QSize(600, 300));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(19, 20, 211, 141));
        crypt = new QRadioButton(groupBox);
        crypt->setObjectName(QStringLiteral("crypt"));
        crypt->setGeometry(QRect(10, 30, 181, 19));
        uncrypt = new QRadioButton(groupBox);
        uncrypt->setObjectName(QStringLiteral("uncrypt"));
        uncrypt->setGeometry(QRect(10, 60, 191, 19));
        print = new QRadioButton(groupBox);
        print->setObjectName(QStringLiteral("print"));
        print->setGeometry(QRect(10, 90, 181, 19));
        del = new QRadioButton(groupBox);
        del->setObjectName(QStringLiteral("del"));
        del->setGeometry(QRect(10, 120, 171, 19));
        StartBtn = new QPushButton(centralWidget);
        StartBtn->setObjectName(QStringLiteral("StartBtn"));
        StartBtn->setGeometry(QRect(10, 200, 580, 41));
        ArchGroup = new QGroupBox(centralWidget);
        ArchGroup->setObjectName(QStringLiteral("ArchGroup"));
        ArchGroup->setGeometry(QRect(350, 110, 231, 41));
        ArchName = new QLineEdit(ArchGroup);
        ArchName->setObjectName(QStringLiteral("ArchName"));
        ArchName->setGeometry(QRect(0, 20, 231, 21));
        FileNameGroup = new QGroupBox(centralWidget);
        FileNameGroup->setObjectName(QStringLiteral("FileNameGroup"));
        FileNameGroup->setGeometry(QRect(350, 40, 231, 41));
        FileName = new QLineEdit(FileNameGroup);
        FileName->setObjectName(QStringLiteral("FileName"));
        FileName->setGeometry(QRect(0, 20, 231, 21));
        FileName->setClearButtonEnabled(false);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \321\204\320\260\320\271\320\273\320\276\320\274", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\320\265", 0));
        crypt->setText(QApplication::translate("MainWindow", "\320\250\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214 \320\270 \320\260\321\200\321\205\320\270\320\262\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        uncrypt->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\260\321\200\321\205\320\270\320\262\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\270 \320\264\320\265\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        print->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\277\320\265\321\207\320\260\321\202\320\260\321\202\321\214 \320\275\320\260 \321\215\320\272\321\200\320\260\320\275\320\265", 0));
        del->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        StartBtn->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202!", 0));
        ArchGroup->setTitle(QApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\260\321\200\321\205\320\270\320\262\320\260", 0));
        ArchName->setText(QApplication::translate("MainWindow", "defzip.rar", 0));
        FileNameGroup->setTitle(QApplication::translate("MainWindow", "\320\230\320\274\321\217 \321\204\320\260\320\271\320\273\320\260", 0));
        FileName->setText(QApplication::translate("MainWindow", "defname.txt", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
