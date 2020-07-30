#ifndef ESCRITOR_H
#define ESCRITOR_H

#include <QThread>
#include <QMutex>
#include "QRandomGenerator64"
#include "widget.h"

class escritor: public QThread
{
    Q_OBJECT
public:
    escritor(QString n, int &esc, int &lec, bool &dis, int &bas, unsigned long t, QObject *parent = nullptr);
    QString getnombre();

private:
    QString nombre;
    int *escri;
    int *lecto;
    bool * dispo;
    int *base;
    bool sala;
    QMutex m;
    unsigned long demora;
protected:
    void run() override;

signals:
    void valorescrito(QString x);
    void encola(QString x);
};

#endif // ESCRITOR_H
