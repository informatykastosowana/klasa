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
            cout << "Negacja klasy" << endl;
        }

        inline int setA(int val) {
            a = val;
        }
        inline int setB(int val) {
            b = val;
        }
        inline int setC(int val) {
            c = val;
        }

        int getA() {
            return a;
        }
        int getB() {
            return b;
        }
        int getC() {
            return c;
        }

        int sum();

    private:
        int a;
        int b;
        int c;
};

int Class::sum() {
    return getA() + getB() + getC();
}

int main() {
    Class c(1, 2, 3);

    c.setA(20);
    c.setB(-5);
    c.setC(30);

    cout << "A:  "  << c.getA() << endl;
    cout << "B:  "  << c.getB() << endl;
    cout << "C:  "  << c.getC() << endl;
    cout << "Sum: " << c.sum()  << endl;
}
