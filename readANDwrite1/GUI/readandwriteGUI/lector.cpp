#include "lector.h"

lector::lector(QString n, int &esc, int &lec, bool &dis, int &bas, QObject *parent)
    :QThread(parent)
{
    nombre=n;
    escri=&esc;
    lecto=&lec;
    dispo=&dis;
    base=&bas;
}
QString lector::getnombre()
{
    return  nombre;
}

void lector::run()
{
    while(true)
    {
        bool sala = false;
        if(!*dispo or *escri !=0)
        {
            m.lock();
            emit enespera("Esperando");
            *lecto++;
            sala=true;
            m.unlock();
            QThread::sleep(4);
        }
        m.lock();
        emit enespera("Trabajando");
        *dispo=false;
        QString aux = QString::number(*base);
        emit valorleido(aux);
        if(sala) *lecto--;
        *dispo=true;
        QThread::sleep(2);
        emit enespera("stand by");
        QThread::sleep(4);
        m.unlock();
        QThread::sleep(8);
    }
}
