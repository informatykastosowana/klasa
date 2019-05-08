#include <iostream>
#include <string>

using namespace std;

class liczba {
private:
    int val;
public:
    liczba(int val) {
        this->val = val;
    }

    void setVal(int val) {
        this->val = val;
    }

    int getVal() {
        return val;
    };

    inline int addVal(int a) {
        return val + a;
    }

    void printVal();

};

void liczba::printVal() {
    cout << "liczba = " << val << endl;
};

int main()
{
    int input;
    liczba *x = new liczba(1);
    x->printVal();
    cout << "Zmiana wartosci liczby" << endl << endl;
    cout << "Aktualna wartosc = " << x->getVal() << endl;
    cout << "Nowa wartosc = ";
    cin >> input;
    x->setVal(input);
    int n = x->getVal();
    x->printVal();

    int b = 2;

    int y = x->addVal(b);
    cout << n << " + " << b << " = "<< y << endl;

    delete x;

    return 0;
}
