#include <iostream>
#include <string>
#define INT C;

using namespace std;

class Baza
{
   int x;
public:
    virtual void print() = 0;
    int getX() { return x; }
};

class Dziedzic: public Baza {
    int y;
public:
    void print() { cout << "Wyświetlono"; }
};


class Liczba {
private:
    int val;
    string opis;

public:
    //Konstruktor normalny
    Liczba(int VAL) {
        val = VAL;
        opis = "";
    }
    //Konstruktor z listą inicjalizacyjną
    Liczba(int VAL, string OPIS) : val(VAL), opis(OPIS) {
    cout << "Stworzono za pomocą listy inicjalizacyjnej" << endl;
    }
    //Destruktor
    ~Liczba() {
        cout << "Zwalnianie pamięci" << endl;
    }
    //Setter
    void setVal(int val) {
        this->val = val;
    }
    //Getter
    int getVal() {
        return val;
    };

    inline int addVal(int a) {
        return val + a;
    }

    void printVal();

};

void Liczba::printVal() {
    if (opis != "") {
        cout << "liczba = " << opis << endl;
    } else {
        cout << "Liczba = " << val << endl;}
};

int main()
{
    int input;
    Liczba *x = new Liczba(7);
    Liczba *y = new Liczba(5,"pięć");

    x->printVal();
    y->printVal();

    cout << endl << "Zmiana wartosci pierwszej liczby" << endl;
    cout << "Aktualna wartosc = " << x->getVal() << endl;
    cout << "Nowa wartosc = ";
    cin >> input;
    x->setVal(input);

    int n = x->getVal();

    int *t = new int();
    *t = 5;

    int z = x->addVal(y->getVal());

    cout << endl << "Suma tych liczb" << endl;
    cout << n << " + " << y->getVal() << " = "<< z << endl;

    delete x;

    cout << endl;

    Dziedzic d;
    d.print();

    return 0;
}
