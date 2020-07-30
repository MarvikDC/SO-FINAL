#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class escritor;
class lector;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    int escritores;
    int lectores;
    bool disponible;
    int BD;

private slots:
    void on_b_trabajar_clicked();

    void on_b_descansar_clicked();

private:
    Ui::Widget *ui;
    lector *hilo_lector1;
    lector *hilo_lector2;
    lector *hilo_lector3;
    escritor *hilo_escritor1;
    escritor *hilo_escritor2;
};

#endif // WIDGET_H
