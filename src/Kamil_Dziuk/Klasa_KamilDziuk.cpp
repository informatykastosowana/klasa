#include <iostream>

using namespace std;

class Class {
    public:
        Class(int a, int b, int c) {
            this->a = a;
            this->b = b;
            this->c = c;
        }

        ~Class() {
            cout << "." << endl;

        }

        inline int ustawA(int val) {
            a = val;
        }
        inline int ustawB(int val) {
            b = val;
        }
        inline int ustawC(int val) {
            c = val;
        }

        int uzyskajA() {
            return a;
        }
        int uzyskajB() {
            return b;
        }
        int uzyskajC() {
            return c;
        }

        int suma();

    private:
        int a;
        int b;
        int c;
};

int Class::suma() {
    return uzyskajA() + uzyskajB() + uzyskajC();
}

int main() {
    Class c(0, 0, 0);

    c.ustawA(11);
    c.ustawB(-9);
    c.ustawC(-2);

    cout << "A:  "  << c.uzyskajA() << endl;
    cout << "B:  "  << c.uzyskajB() << endl;
    cout << "C:  "  << c.uzyskajC() << endl;
    cout << "Suma: " << c.suma()  << endl;
}

