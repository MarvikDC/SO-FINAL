#include <iostream>
#include <thread>
#include <mutex>
#include <ctime>

using namespace std;

int escritores = 0;
int lectores = 0;
bool disponible = true;
int BD = 1;
mutex m;
//srand(time(NULL));

//lector:
void lector(string nombre="lector")
//void lector()
{
    //QString nombre = "lector";
    while(true)
    {
        m.lock();
        cout <<"\n"<<nombre <<": \n "
        <<  "escritores="<<escritores<<
        " \n lectores="<< lectores <<
         " \n disponible="<<disponible<<endl<<endl;
        m.unlock();
        bool sala=false;
        if(!disponible or escritores !=0)
        {
            m.lock();
            cout << nombre << " esperando"<<endl<<endl;

            lectores++;
            sala=true;
            m.unlock();
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }
        m.lock();
        disponible=false;
        cout << nombre << " leyo-> " << BD<<endl<<endl;
        //QThread::msleep(500);
        if(sala)lectores--;
        disponible=true;
        m.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

}

//escritor:
void escritor(string nombre="escritor")
//void escritor()
{
    //QString nombre="escritor";
    m.lock();
    cout << nombre <<": \n " <<
    "escritores="<<escritores<<
    " \n lectores="<< lectores<<
    " \n disponible="<<disponible<<endl<<endl;
    m.unlock();
    bool sala=false;
    while(true)
    {
        if(!disponible)
        {
            m.lock();
            cout << nombre << " esperando" << endl <<endl;
            escritores++;
            sala=true;
            m.unlock();
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        m.lock();
        disponible=false;
        int w = rand()%(90-2)+1;
        BD=w;
        cout << nombre << "  escribio-> " << BD << endl <<endl;
        //QThread::msleep(500);
        if (sala) escritores--;
        disponible=true;
        m.unlock();
        std::this_thread::sleep_for(std::chrono::seconds(4));
    }

}

int main()
{
    cout << "INICIO" <<": \n " <<  "escritores="<<escritores<<" \n lectores="<< lectores << " \n disponible="<<disponible<<endl<<endl;
    cout <<"HILOS:"<<endl<<endl;
    thread read1(lector,"read1");
    thread read2(lector,"read2");
    thread write1(escritor,"write1");
    thread write2(escritor,"write2");
    read1.join();
    read2.join();
    write1.join();
    write2.join();
    return 0;
}
