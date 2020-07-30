

#include <QCoreApplication>
#include <QThread>
#include <QMutex>
#include <QDebug>
#include "QRandomGenerator64"



int escritores = 0;
int lectores = 0;
bool disponible = true;
int BD = 1;
QMutex m;

//lector:
//void lector(QString nombre="lector")
void lector()
{
    QString nombre = "lector";
    while(true)
    {
        bool sala = false;
        if(!disponible or escritores !=0)
        {
            m.lock();
            qDebug() << nombre << "esperando";
            lectores++;
            sala=true;
            m.unlock();
            QThread::sleep(2);
        }
        m.lock();
        disponible=false;
        qDebug() << nombre << "leyo" << BD;
        if(sala) lectores--;
        disponible=true;
        m.unlock();
        QThread::msleep(500);
    }

}

//escritor:
//void escritor(QString nombre="escritor")
void escritor()
{
    QString nombre="escritor";
    while(true)
    {
        bool sala=false;
        if(!disponible)
        {
            m.lock();
            qDebug() << nombre << "esperando";
            escritores++;
            sala=true;
            m.unlock();
            QThread::sleep(1);
        }
        m.lock();
        disponible=false;
        int w = QRandomGenerator::global()->bounded(10,80);
        BD=w;
        qDebug() << nombre << "escribio" << BD;
        if(sala) escritores--;
        disponible=true;
        m.unlock();
        QThread::sleep(3);
    }

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //QString nread1="read1";
    QThread *read1 = QThread::create(lector);
    read1->start();
    QThread *read2 = QThread::create(lector);
    read2->start();
    QThread *write1 = QThread::create(escritor);
    write1->start();
    return a.exec();
}
