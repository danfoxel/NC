/********************************************************************************
** Form generated from reading UI file 'neworder.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWORDER_H
#define UI_NEWORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewOrder
{
public:
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLineEdit *enterPhone;
    QLabel *labelPhone;
    QLCDNumber *showPhone;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QFrame *line;
    QLabel *label_3;
    QCheckBox *checkBox;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_7;
    QLabel *label_4;
    QLabel *label_7;
    QCheckBox *checkBox_3;
    QLabel *label_8;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_3;
    QLabel *label_14;
    QLabel *label_10;
    QFrame *line_2;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_12;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_6;

    void setupUi(QDialog *NewOrder)
    {
        if (NewOrder->objectName().isEmpty())
            NewOrder->setObjectName(QStringLiteral("NewOrder"));
        NewOrder->resize(726, 379);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewOrder->setWindowIcon(icon);
        okButton = new QPushButton(NewOrder);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(640, 350, 75, 23));
        cancelButton = new QPushButton(NewOrder);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(10, 330, 75, 23));
        enterPhone = new QLineEdit(NewOrder);
        enterPhone->setObjectName(QStringLiteral("enterPhone"));
        enterPhone->setGeometry(QRect(200, 79, 271, 20));
        enterPhone->setInputMethodHints(Qt::ImhNone);
        enterPhone->setCursorPosition(0);
        labelPhone = new QLabel(NewOrder);
        labelPhone->setObjectName(QStringLiteral("labelPhone"));
        labelPhone->setGeometry(QRect(10, 79, 178, 16));
        showPhone = new QLCDNumber(NewOrder);
        showPhone->setObjectName(QStringLiteral("showPhone"));
        showPhone->setGeometry(QRect(190, 109, 271, 31));
        showPhone->setFrameShape(QFrame::StyledPanel);
        showPhone->setLineWidth(1);
        showPhone->setMidLineWidth(0);
        showPhone->setSmallDecimalPoint(false);
        showPhone->setDigitCount(20);
        showPhone->setSegmentStyle(QLCDNumber::Flat);
        lineEdit = new QLineEdit(NewOrder);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 40, 271, 20));
        label = new QLabel(NewOrder);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 119, 181, 16));
        label_2 = new QLabel(NewOrder);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 181, 16));
        tabWidget = new QTabWidget(NewOrder);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 140, 607, 181));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(16777215, 15));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        line = new QFrame(tab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 8);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 2, 1, 1);

        checkBox = new QCheckBox(tab);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 3, 0, 1, 1);

        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(lineEdit_2, 3, 3, 1, 1);

        checkBox_5 = new QCheckBox(tab);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        gridLayout->addWidget(checkBox_5, 3, 5, 1, 1);

        checkBox_6 = new QCheckBox(tab);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        gridLayout->addWidget(checkBox_6, 4, 5, 1, 1);

        checkBox_4 = new QCheckBox(tab);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout->addWidget(checkBox_4, 6, 0, 1, 1);

        checkBox_7 = new QCheckBox(tab);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        gridLayout->addWidget(checkBox_7, 5, 5, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 2, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 4, 6, 1, 1);

        checkBox_3 = new QCheckBox(tab);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout->addWidget(checkBox_3, 5, 0, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 6, 1, 1);

        checkBox_8 = new QCheckBox(tab);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));

        gridLayout->addWidget(checkBox_8, 6, 5, 1, 1);

        checkBox_2 = new QCheckBox(tab);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 4, 0, 1, 1);

        lineEdit_7 = new QLineEdit(tab);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(lineEdit_7, 3, 7, 1, 1);

        lineEdit_6 = new QLineEdit(tab);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(lineEdit_6, 4, 7, 1, 1);

        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(lineEdit_3, 4, 3, 1, 1);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 0, 5, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 0, 2, 1, 1);

        line_2 = new QFrame(tab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 4, 4, 1);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 0, 3, 1, 1);

        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 0, 6, 1, 1);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 0, 7, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget->addTab(tab_6, QString());
        QWidget::setTabOrder(lineEdit, enterPhone);
        QWidget::setTabOrder(enterPhone, tabWidget);
        QWidget::setTabOrder(tabWidget, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(NewOrder);
        QObject::connect(okButton, SIGNAL(clicked()), NewOrder, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), NewOrder, SLOT(reject()));
        QObject::connect(enterPhone, SIGNAL(textChanged(QString)), showPhone, SLOT(display(QString)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NewOrder);
    } // setupUi

    void retranslateUi(QDialog *NewOrder)
    {
        NewOrder->setWindowTitle(QApplication::translate("NewOrder", "\320\235\320\276\320\262\321\213\320\271 \320\267\320\260\320\272\320\260\320\267 \320\260\320\273\320\272\320\276\320\263\320\276\320\273\321\217", 0));
        okButton->setText(QApplication::translate("NewOrder", "\320\222\320\262\320\276\320\264", 0));
        cancelButton->setText(QApplication::translate("NewOrder", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
        enterPhone->setInputMask(QApplication::translate("NewOrder", "8(999)999-99-99", 0));
        enterPhone->setText(QApplication::translate("NewOrder", "8()--", 0));
        labelPhone->setText(QApplication::translate("NewOrder", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260 \320\272\320\273\320\270\320\265\320\275\321\202\320\260:", 0));
        label->setText(QApplication::translate("NewOrder", "\320\237\321\200\320\276\320\262\320\265\321\200\321\214\321\202\320\265 \320\270 \320\277\321\200\320\276\320\264\320\270\320\272\321\202\321\203\320\271\321\202\320\265 \320\272\320\273\320\270\320\265\320\275\321\202\321\203:", 0));
        label_2->setText(QApplication::translate("NewOrder", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\272\320\273\320\270\320\265\320\275\321\202\320\260:", 0));
        label_9->setText(QApplication::translate("NewOrder", "\320\234\320\260\321\200\320\272\320\260", 0));
        label_3->setText(QApplication::translate("NewOrder", "989 \321\200\321\203\320\261\320\273\320\265\320\271", 0));
        checkBox->setText(QApplication::translate("NewOrder", "Jameson 0,5 \320\273", 0));
        checkBox_5->setText(QApplication::translate("NewOrder", "CheckBox", 0));
        checkBox_6->setText(QApplication::translate("NewOrder", "CheckBox", 0));
        checkBox_4->setText(QApplication::translate("NewOrder", "CheckBox", 0));
        checkBox_7->setText(QApplication::translate("NewOrder", "CheckBox", 0));
        label_4->setText(QApplication::translate("NewOrder", "1987 \321\200\321\203\320\261\320\273\320\265\320\271", 0));
        label_7->setText(QApplication::translate("NewOrder", "1987 \321\200\321\203\320\261\320\273\320\265\320\271", 0));
        checkBox_3->setText(QApplication::translate("NewOrder", "CheckBox", 0));
        label_8->setText(QApplication::translate("NewOrder", "989 \321\200\321\203\320\261\320\273\320\265\320\271", 0));
        checkBox_8->setText(QApplication::translate("NewOrder", "CheckBox", 0));
        checkBox_2->setText(QApplication::translate("NewOrder", "Jameson 1 \320\273", 0));
        label_14->setText(QApplication::translate("NewOrder", "\320\234\320\260\321\200\320\272\320\260", 0));
        label_10->setText(QApplication::translate("NewOrder", "\320\246\320\265\320\275\320\260", 0));
        label_11->setText(QApplication::translate("NewOrder", "\320\232\320\276\320\273-\320\262\320\276", 0));
        label_13->setText(QApplication::translate("NewOrder", "\320\246\320\265\320\275\320\260", 0));
        label_12->setText(QApplication::translate("NewOrder", "\320\232\320\276\320\273-\320\262\320\276", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("NewOrder", "\320\222\320\270\321\201\320\272\320\270", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("NewOrder", "\320\222\320\276\320\264\320\272\320\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("NewOrder", "\320\237\320\270\320\262\320\276", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("NewOrder", "\320\240\320\276\320\274", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("NewOrder", "\320\224\320\266\320\270\320\275", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("NewOrder", "\320\233\320\270\320\274\320\276\320\275\320\260\320\264\321\213", 0));
    } // retranslateUi

};

namespace Ui {
    class NewOrder: public Ui_NewOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWORDER_H
