#include <iostream>
using namespace std;

struct proba{

    int licznik;
    int zwroc(){
        return 1;
    }
};


class mojaklasa{

    public:

    int zmienna1,zmienna2;
    mojaklasa(){
        zmienna1 =10;
        zmienna2 = 20;
        cout<<"jestem konstruktorem"<<endl;
    }


    inline void metoda1(){licznik++;}
    inline void metoda1_1(int x){prywatna_zmienna=x;}
    inline int metoda2(){return prywatna_zmienna;}
    inline int metoda3(){return licznik;}
    inline void metoda4();

    protected:
    int licznik =0;

    private:
    int prywatna_zmienna=0;
};

void mojaklasa::metoda4(){
cout<<"funkcja zadeklarowana poza cialem klasy"<<endl;
}

int main()
{
    cout<<"Klasa:"<<endl;


    mojaklasa *obiekt_konstruktor = new mojaklasa;
    obiekt_konstruktor -> metoda1_1(2);
    cout<<"Klasa z uzyciem new: " <<obiekt_konstruktor -> metoda2()<<endl;

    //klasa
    mojaklasa obiekt1;
    obiekt1.metoda1();
    obiekt1.metoda1_1(2);
    cout<<"zmienna protected: "<< obiekt1.metoda3()<<", prywatna zmienna: "<<obiekt1.metoda2()<<endl;
    cout<<"zmienna1: "<<obiekt1.zmienna1<<endl;
    obiekt1.metoda4();
    obiekt1.zmienna1 = 3;
    cout<<"zmienna z public:"<<obiekt1.zmienna1<<endl;


    delete(obiekt_konstruktor);

    //mojaklasa obiekt2;
    //cout<<"zmienna prywatna klasy: "<<obiekt2.metoda3()<<endl;
    //struktura
    cout<<"\nStruktura: "<<endl;
    proba jeden;
    int x = jeden.zwroc();

    cout<<"zmienna z funkcji: "<<x<<"\n";

return 0;
}

