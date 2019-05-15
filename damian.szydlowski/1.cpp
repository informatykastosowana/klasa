#include <iostream>
#include <string>

using namespace std;

class Liczba {
private:
    int val;

public:
    //Konstruktor normalny
    Liczba() {
        val = 1;
    }
    //Konstruktor z listą inicjalizacyjną
    Liczba(int VAL) : val(VAL) {
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
    cout << "liczba = " << val << endl;
};

int main()
{
    int input;
    Liczba *x = new Liczba(7);
    Liczba *y = new Liczba();

    x->printVal();
    y->printVal();

    cout << endl << "Zmiana wartosci pierwszej liczby" << endl;
    cout << "Aktualna wartosc = " << x->getVal() << endl;
    cout << "Nowa wartosc = ";
    cin >> input;
    x->setVal(input);

    int n = x->getVal();

    int z = x->addVal(y->getVal());

    cout << endl << "Suma tych liczb" << endl;
    cout << n << " + " << y->getVal() << " = "<< z << endl;

    delete x;

    return 0;
}
