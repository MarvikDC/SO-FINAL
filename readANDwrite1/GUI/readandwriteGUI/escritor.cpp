#include "escritor.h"

escritor::escritor(QString n, int &esc, int &lec, bool &dis, int &bas, unsigned long t, QObject *parent)
    :QThread(parent)
{
    nombre=n;
    escri=&esc;
    lecto=&lec;
    dispo=&dis;
    base=&bas;
    demora = t;
}

QString escritor::getnombre()
{
    return  nombre;
}

void escritor::run()
{
    while(true)
    {
        QThread::sleep(demora);
        bool sala=false;
        if(!*dispo)
        {
            m.lock();
            emit encola("En espera");
            escri++;
            sala=true;
            m.unlock();
            QThread::sleep(4);
        }
        m.lock();
        emit encola("trabajando");
        *dispo=false;
        int w = QRandomGenerator::global()->bounded(10,80);
        *base=w;
        QString aux = QString::number(*base);
        emit valorescrito(aux);
        if(sala) *escri--;
        QThread::sleep(demora);
        emit encola("stand by");
        *dispo=true;
        m.unlock();
        QThread::sleep(6);
    }
}
