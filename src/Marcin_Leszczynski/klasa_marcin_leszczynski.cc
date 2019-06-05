#include <iostream>
#include <string>
using namespace std;



//metody abstrakcyjne

class Pojazdy_latajace{

public:
    virtual void setTyp(string rodzaj) = 0;
    virtual string getTyp() =0;

};

class Helikopter : public Pojazdy_latajace
{
public:

    Helikopter(string rodzaj1){
        rodzaj = rodzaj1;
        typ = "wiroplat";
        cout<<"Stworzono obiekt : "<<rodzaj<<endl;
    }

    void setTyp(string rodzaj){
        typ = rodzaj;
    }

    string getTyp(){
        return typ;
    }

    string typ;
    string rodzaj;
};


class pojazd{

private:

    string marka;
    string model;
    string pojemnosc;

public:

    static int licznikPojazdow;
    pojazd(){
        licznikPojazdow++;
        cout<<"Stworzono obiekt pojazd"<<endl;
    };

    ~pojazd(){
    cout<<"Zniszczono obiekt pojazd"<<endl;
    }

    void ustawMarka(string marka1){
        marka = marka1;
    }
    void ustawModel(string model1){
        model = model1;
    }
    void ustawPojemnosc(string pojemnosc1){
        pojemnosc = pojemnosc1;
    }

    string pobierzMarka(){
        return marka;
    }
    string pobierzModel(){
        return model;
    }
    string pobierzPojemnosc(){
        return pojemnosc;
    }

};

int pojazd::licznikPojazdow =0;

class samochod : public pojazd{

private:
    int liczbaKola;
    int przebieg;

public:
    samochod(){
        licznikPojazdow++;
        cout<<"Stworzono obiekt samochod"<<endl;
    }

    samochod(string marka, string model){

        ustawMarka(marka);
        ustawModel(model);
        licznikPojazdow++;
        cout<<pobierzMarka()<<", "<<pobierzModel()<<endl;
    }

    void liczbaKol(int kola){
        liczbaKola = kola;
    }
};

class tir : samochod{

public:

    tir(string marka, string model){
        licznikPojazdow++;
        ustawMarka(marka);
        ustawModel(model);
    }

};

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

    klasa(const klasa &obiekt){
        zmienna1 = obiekt.zmienna1;
        zmienna2 = obiekt.zmienna2;
        cout<<"Konstruktor kopiujacy"<<endl;
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
/*
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

*/

    //------------klasy dziedziczenie--------------
    pojazd fiat;

    fiat.ustawMarka("Fiat");
    fiat.ustawModel("Albea");
    cout<<fiat.pobierzMarka()<<endl;

    samochod audi("Audi","A4");
    cout<<"static licznik: "<<audi.licznikPojazdow<<endl;



return 0;
}
