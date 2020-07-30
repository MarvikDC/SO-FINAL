/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *titulo_bd;
    QLabel *valor_bd;
    QLabel *titulo_formulario;
    QPushButton *b_trabajar;
    QPushButton *b_descansar;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *lectura_lector2;
    QLabel *nombre_lector3;
    QLabel *nombre_lector1;
    QLabel *estado_lector1;
    QLabel *lectura_lectores;
    QLabel *columna_lectores;
    QLabel *estado_lectores;
    QLabel *estado_lector3;
    QLabel *lectura_lector3;
    QLabel *estado_lector2;
    QLabel *lectura_lector1;
    QLabel *nombre_lector2;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *columna_escritores;
    QLabel *Estado_escirtores;
    QLabel *Escrito_escritores;
    QLabel *nombre_escritor1;
    QLabel *estado_escritor1;
    QLabel *escrito_escritor1;
    QLabel *nombre_escritor2;
    QLabel *estado_escritor2;
    QLabel *escrito_escritor2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(622, 469);
        titulo_bd = new QLabel(Widget);
        titulo_bd->setObjectName(QString::fromUtf8("titulo_bd"));
        titulo_bd->setGeometry(QRect(160, 120, 181, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        titulo_bd->setFont(font);
        valor_bd = new QLabel(Widget);
        valor_bd->setObjectName(QString::fromUtf8("valor_bd"));
        valor_bd->setGeometry(QRect(370, 120, 61, 41));
        QFont font1;
        font1.setPointSize(16);
        valor_bd->setFont(font1);
        valor_bd->setAlignment(Qt::AlignCenter);
        titulo_formulario = new QLabel(Widget);
        titulo_formulario->setObjectName(QString::fromUtf8("titulo_formulario"));
        titulo_formulario->setGeometry(QRect(50, 30, 521, 41));
        QFont font2;
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setWeight(75);
        titulo_formulario->setFont(font2);
        titulo_formulario->setAutoFillBackground(false);
        titulo_formulario->setScaledContents(false);
        titulo_formulario->setWordWrap(false);
        b_trabajar = new QPushButton(Widget);
        b_trabajar->setObjectName(QString::fromUtf8("b_trabajar"));
        b_trabajar->setGeometry(QRect(324, 390, 91, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        b_trabajar->setFont(font3);
        b_descansar = new QPushButton(Widget);
        b_descansar->setObjectName(QString::fromUtf8("b_descansar"));
        b_descansar->setGeometry(QRect(470, 390, 101, 31));
        b_descansar->setFont(font3);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 450, 411, 20));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 200, 219, 211));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lectura_lector2 = new QLabel(widget);
        lectura_lector2->setObjectName(QString::fromUtf8("lectura_lector2"));
        QFont font4;
        font4.setPointSize(12);
        lectura_lector2->setFont(font4);

        gridLayout->addWidget(lectura_lector2, 2, 2, 1, 1);

        nombre_lector3 = new QLabel(widget);
        nombre_lector3->setObjectName(QString::fromUtf8("nombre_lector3"));
        nombre_lector3->setFont(font4);

        gridLayout->addWidget(nombre_lector3, 3, 0, 1, 1);

        nombre_lector1 = new QLabel(widget);
        nombre_lector1->setObjectName(QString::fromUtf8("nombre_lector1"));
        nombre_lector1->setFont(font4);

        gridLayout->addWidget(nombre_lector1, 1, 0, 1, 1);

        estado_lector1 = new QLabel(widget);
        estado_lector1->setObjectName(QString::fromUtf8("estado_lector1"));
        estado_lector1->setFont(font4);

        gridLayout->addWidget(estado_lector1, 1, 1, 1, 1);

        lectura_lectores = new QLabel(widget);
        lectura_lectores->setObjectName(QString::fromUtf8("lectura_lectores"));
        lectura_lectores->setFont(font3);

        gridLayout->addWidget(lectura_lectores, 0, 2, 1, 1);

        columna_lectores = new QLabel(widget);
        columna_lectores->setObjectName(QString::fromUtf8("columna_lectores"));
        columna_lectores->setFont(font3);

        gridLayout->addWidget(columna_lectores, 0, 0, 1, 1);

        estado_lectores = new QLabel(widget);
        estado_lectores->setObjectName(QString::fromUtf8("estado_lectores"));
        estado_lectores->setFont(font3);

        gridLayout->addWidget(estado_lectores, 0, 1, 1, 1);

        estado_lector3 = new QLabel(widget);
        estado_lector3->setObjectName(QString::fromUtf8("estado_lector3"));
        estado_lector3->setFont(font4);

        gridLayout->addWidget(estado_lector3, 3, 1, 1, 1);

        lectura_lector3 = new QLabel(widget);
        lectura_lector3->setObjectName(QString::fromUtf8("lectura_lector3"));
        lectura_lector3->setFont(font4);

        gridLayout->addWidget(lectura_lector3, 3, 2, 1, 1);

        estado_lector2 = new QLabel(widget);
        estado_lector2->setObjectName(QString::fromUtf8("estado_lector2"));
        estado_lector2->setFont(font4);

        gridLayout->addWidget(estado_lector2, 2, 1, 1, 1);

        lectura_lector1 = new QLabel(widget);
        lectura_lector1->setObjectName(QString::fromUtf8("lectura_lector1"));
        lectura_lector1->setFont(font4);

        gridLayout->addWidget(lectura_lector1, 1, 2, 1, 1);

        nombre_lector2 = new QLabel(widget);
        nombre_lector2->setObjectName(QString::fromUtf8("nombre_lector2"));
        nombre_lector2->setFont(font4);

        gridLayout->addWidget(nombre_lector2, 2, 0, 1, 1);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(310, 200, 260, 161));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        columna_escritores = new QLabel(widget1);
        columna_escritores->setObjectName(QString::fromUtf8("columna_escritores"));
        columna_escritores->setFont(font3);

        gridLayout_2->addWidget(columna_escritores, 0, 0, 1, 1);

        Estado_escirtores = new QLabel(widget1);
        Estado_escirtores->setObjectName(QString::fromUtf8("Estado_escirtores"));
        Estado_escirtores->setFont(font3);

        gridLayout_2->addWidget(Estado_escirtores, 0, 1, 1, 1);

        Escrito_escritores = new QLabel(widget1);
        Escrito_escritores->setObjectName(QString::fromUtf8("Escrito_escritores"));
        Escrito_escritores->setFont(font3);

        gridLayout_2->addWidget(Escrito_escritores, 0, 2, 1, 1);

        nombre_escritor1 = new QLabel(widget1);
        nombre_escritor1->setObjectName(QString::fromUtf8("nombre_escritor1"));
        nombre_escritor1->setFont(font4);

        gridLayout_2->addWidget(nombre_escritor1, 1, 0, 1, 1);

        estado_escritor1 = new QLabel(widget1);
        estado_escritor1->setObjectName(QString::fromUtf8("estado_escritor1"));
        estado_escritor1->setFont(font4);

        gridLayout_2->addWidget(estado_escritor1, 1, 1, 1, 1);

        escrito_escritor1 = new QLabel(widget1);
        escrito_escritor1->setObjectName(QString::fromUtf8("escrito_escritor1"));
        escrito_escritor1->setFont(font4);

        gridLayout_2->addWidget(escrito_escritor1, 1, 2, 1, 1);

        nombre_escritor2 = new QLabel(widget1);
        nombre_escritor2->setObjectName(QString::fromUtf8("nombre_escritor2"));
        nombre_escritor2->setFont(font4);

        gridLayout_2->addWidget(nombre_escritor2, 2, 0, 1, 1);

        estado_escritor2 = new QLabel(widget1);
        estado_escritor2->setObjectName(QString::fromUtf8("estado_escritor2"));
        estado_escritor2->setFont(font4);

        gridLayout_2->addWidget(estado_escritor2, 2, 1, 1, 1);

        escrito_escritor2 = new QLabel(widget1);
        escrito_escritor2->setObjectName(QString::fromUtf8("escrito_escritor2"));
        escrito_escritor2->setFont(font4);

        gridLayout_2->addWidget(escrito_escritor2, 2, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        titulo_bd->setText(QApplication::translate("Widget", "BASE DE DATOS", nullptr));
        valor_bd->setText(QApplication::translate("Widget", "0", nullptr));
        titulo_formulario->setText(QApplication::translate("Widget", "LECTORES Y ESCRITORES (SO ULS)", nullptr));
        b_trabajar->setText(QApplication::translate("Widget", "Trabajar", nullptr));
        b_descansar->setText(QApplication::translate("Widget", "Descansar", nullptr));
        label->setText(QApplication::translate("Widget", "Marvik Del Carpio Lazo / Sistemas Operativos / Universidad La Salle / Arequipa-Per\303\272", nullptr));
        lectura_lector2->setText(QApplication::translate("Widget", "-", nullptr));
        nombre_lector3->setText(QApplication::translate("Widget", "-", nullptr));
        nombre_lector1->setText(QApplication::translate("Widget", "-", nullptr));
        estado_lector1->setText(QApplication::translate("Widget", "-", nullptr));
        lectura_lectores->setText(QApplication::translate("Widget", "Lectura", nullptr));
        columna_lectores->setText(QApplication::translate("Widget", "Lector", nullptr));
        estado_lectores->setText(QApplication::translate("Widget", "Estado", nullptr));
        estado_lector3->setText(QApplication::translate("Widget", "-", nullptr));
        lectura_lector3->setText(QApplication::translate("Widget", "-", nullptr));
        estado_lector2->setText(QApplication::translate("Widget", "-", nullptr));
        lectura_lector1->setText(QApplication::translate("Widget", "-", nullptr));
        nombre_lector2->setText(QApplication::translate("Widget", "-", nullptr));
        columna_escritores->setText(QApplication::translate("Widget", "Escritor", nullptr));
        Estado_escirtores->setText(QApplication::translate("Widget", "Estado", nullptr));
        Escrito_escritores->setText(QApplication::translate("Widget", "Escrito", nullptr));
        nombre_escritor1->setText(QApplication::translate("Widget", "-", nullptr));
        estado_escritor1->setText(QApplication::translate("Widget", "-", nullptr));
        escrito_escritor1->setText(QApplication::translate("Widget", "-", nullptr));
        nombre_escritor2->setText(QApplication::translate("Widget", "-", nullptr));
        estado_escritor2->setText(QApplication::translate("Widget", "-", nullptr));
        escrito_escritor2->setText(QApplication::translate("Widget", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
