/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *hostLineEdit;
    QLabel *label_3;
    QLineEdit *userLineEdit;
    QLabel *label_4;
    QLineEdit *passwordLineEdit;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *portSpinBox;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QTreeView *fsView;
    QVBoxLayout *verticalLayout_2;
    QPushButton *connectButton;
    QPushButton *downloadButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *outputTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QStringLiteral("Window"));
        Window->resize(546, 676);
        verticalLayout_3 = new QVBoxLayout(Window);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(Window);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        hostLineEdit = new QLineEdit(groupBox);
        hostLineEdit->setObjectName(QStringLiteral("hostLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, hostLineEdit);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        userLineEdit = new QLineEdit(groupBox);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, userLineEdit);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        passwordLineEdit = new QLineEdit(groupBox);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, passwordLineEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        portSpinBox = new QSpinBox(groupBox);
        portSpinBox->setObjectName(QStringLiteral("portSpinBox"));
        portSpinBox->setValue(22);

        horizontalLayout->addWidget(portSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Window);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        fsView = new QTreeView(groupBox_2);
        fsView->setObjectName(QStringLiteral("fsView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(fsView->sizePolicy().hasHeightForWidth());
        fsView->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(fsView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        connectButton = new QPushButton(groupBox_2);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        verticalLayout_2->addWidget(connectButton);

        downloadButton = new QPushButton(groupBox_2);
        downloadButton->setObjectName(QStringLiteral("downloadButton"));

        verticalLayout_2->addWidget(downloadButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(Window);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        outputTextEdit = new QPlainTextEdit(groupBox_3);
        outputTextEdit->setObjectName(QStringLiteral("outputTextEdit"));

        verticalLayout->addWidget(outputTextEdit);


        verticalLayout_3->addWidget(groupBox_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        buttonBox = new QDialogButtonBox(Window);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(Window);
        QObject::connect(buttonBox, SIGNAL(rejected()), Window, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), Window, SLOT(accept()));

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QDialog *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Window", "Connection Parameters", Q_NULLPTR));
        label->setText(QApplication::translate("Window", "Remote host:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Window", "User:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Window", "Password:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Window", "Port:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Window", "Remote File System", Q_NULLPTR));
        connectButton->setText(QApplication::translate("Window", "Connect", Q_NULLPTR));
        downloadButton->setText(QApplication::translate("Window", "Download...", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Window", "Debug output", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
