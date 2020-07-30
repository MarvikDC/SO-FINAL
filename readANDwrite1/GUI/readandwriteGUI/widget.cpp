#include "widget.h"
#include "ui_widget.h"
#include "lector.h"
#include "escritor.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    lectores=0;
    escritores=0;
    disponible=true;
    BD=1;
    //(QString n, int &esc, int &lec, bool &dis, int &bas, QObject *parent)
    hilo_lector1 = new lector("Juan",escritores, lectores, disponible, BD);
    hilo_lector2 = new lector("Luis",escritores, lectores, disponible, BD);
    hilo_lector3 = new lector("Pedro",escritores, lectores, disponible, BD);
    hilo_escritor1 = new escritor("Lucia",escritores, lectores, disponible, BD, 4);
    hilo_escritor2 = new escritor("Ariana",escritores, lectores, disponible, BD, 6);

    ui->valor_bd->setText(QString::number(BD));
    ui->nombre_lector1->setText(hilo_lector1->getnombre());
    ui->nombre_lector2->setText(hilo_lector2->getnombre());
    ui->nombre_lector3->setText(hilo_lector3->getnombre());
    ui->nombre_escritor1->setText(hilo_escritor1->getnombre());
    ui->nombre_escritor2->setText(hilo_escritor2->getnombre());
    //connect(hilo_productor, &oproductor::cantidad, ui->prod1, &QLabel::setText);
    connect(hilo_lector1, &lector::enespera, ui->estado_lector1, &QLabel::setText);
    connect(hilo_lector2, &lector::enespera, ui->estado_lector2, &QLabel::setText);
    connect(hilo_lector3, &lector::enespera, ui->estado_lector3, &QLabel::setText);
    connect(hilo_lector1, &lector::valorleido, ui->lectura_lector1, &QLabel::setText);
    connect(hilo_lector2, &lector::valorleido, ui->lectura_lector2, &QLabel::setText);
    connect(hilo_lector3, &lector::valorleido, ui->lectura_lector3, &QLabel::setText);

    connect(hilo_escritor1, &escritor::encola, ui->estado_escritor1, &QLabel::setText);
    connect(hilo_escritor2, &escritor::encola, ui->estado_escritor2, &QLabel::setText);
    connect(hilo_escritor1, &escritor::valorescrito, ui->escrito_escritor1, &QLabel::setText);
    connect(hilo_escritor2, &escritor::valorescrito, ui->escrito_escritor2, &QLabel::setText);
    connect(hilo_escritor1, &escritor::valorescrito, ui->valor_bd, &QLabel::setText);
    connect(hilo_escritor2, &escritor::valorescrito, ui->valor_bd, &QLabel::setText);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_b_trabajar_clicked()
{
    hilo_lector1->start();
    hilo_escritor2->start();
    hilo_lector2->start();
    hilo_escritor1->start();
    hilo_lector3->start();

}

void Widget::on_b_descansar_clicked()
{
    hilo_lector1->terminate();
    hilo_escritor2->terminate();
    hilo_lector2->terminate();
    hilo_escritor1->terminate();
    hilo_lector3->terminate();
}
