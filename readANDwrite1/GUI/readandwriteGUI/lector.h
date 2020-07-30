#ifndef LECTOR_H
#define LECTOR_H

#include <QThread>
#include <QMutex>
#include "widget.h"

class lector: public QThread
{
    Q_OBJECT
public:
    lector(QString n, int &esc, int &lec, bool &dis, int &bas, QObject *parent = nullptr);
    QString getnombre();
private:
    QString nombre;
    int *escri;
    int *lecto;
    bool * dispo;
    int *base;
    bool sala;
    QMutex m;
protected:
    void run() override;

signals:
    void valorleido(QString x);
    void enespera(QString x);
};

#endif // LECTOR_H
