#include <iostream>
using namespace std;

class reader
{
public:
    reader(string n, int &c)
    {
        nombre=n;
        cola1=&c;
    }
    void getcola()
    {
        cout<<*cola1<<endl;
    }
    void getnombre()
    {
        cout<<nombre<<endl;
    }
    void setcola(int x)
    {
        *cola1=x;
    }

private:
    int *cola1;
    string nombre;
};


int main()
{
    int lista=5;
    reader prueba("num", lista);
    prueba.getnombre();
    prueba.getcola();
    cout<<"modificacion externa"<<endl;
    lista = 10;
    prueba.getnombre();
    prueba.getcola();

    prueba.setcola(456);
    prueba.getnombre();
    prueba.getcola();

    cout<<lista;
    return 0;
}
