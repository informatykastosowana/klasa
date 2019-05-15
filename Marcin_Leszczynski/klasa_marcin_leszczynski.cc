#include <iostream>
using namespace std;

class klasa{

    public:
    int zmienna1,zmienna2;

    klasa(){
        zmienna1 = 1;
        zmienna2 = 5;
        cout<<"Konstruktor klasy\n";
    }

    klasa(int x, int y){
        zmienna1 = x;
        zmienna2 = y;
        cout<<"Konstruktor klasy z argumentami\n";
    }

    ~klasa(){
    cout<<"Destrukcja zakonczona powodzeniem\n";
    }

    inline void metoda1(){cout<<"Metoda 1\n";}
    inline void metoda2();
    inline int getLicznik(){return licznik;}
    inline void setLicznik(int x){licznik=x;}
    inline int getZmienna(){return zmienna_prywatna;}
    inline void setZmienna(int x){zmienna_prywatna=x;}


    protected:
    int licznik =0;

    private:
    int zmienna_prywatna=0;
};

void klasa::metoda2(){cout<<"Metoda zadeklarowana poza cialem klasy\n";}

int main()
{

   //Pierwszy sposob tworzenia obiektow klasy--------------------------------------
    klasa *obiekt_konstruktor = new klasa;
    obiekt_konstruktor -> metoda1();
    delete(obiekt_konstruktor);

    //Drugi sposob-----------------------------------------------------------------
    klasa obiekt1;
    cout<<"zmienna_1: "<<obiekt1.zmienna1<<" zmienna_2: "<<obiekt1.zmienna2<<endl;

    klasa obiekt2(7,9);
    cout<<"zmienna_1: "<<obiekt2.zmienna1<<" zmienna_2: "<<obiekt2.zmienna2<<endl;
    cout<<"zmienna_1: "<<obiekt1.zmienna1<<" zmienna_2: "<<obiekt1.zmienna2<<endl;

    obiekt2.metoda1();
    obiekt2.metoda2();
    obiekt2.setLicznik(3);
    int x =obiekt2.getLicznik();
    cout<<x<<endl;

    obiekt2.setZmienna(2);
    int y =obiekt2.getZmienna();
    cout<<y<<endl;

return 0;
}
