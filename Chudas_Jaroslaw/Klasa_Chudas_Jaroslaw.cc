/*
File contain class operating on private variables using set and get.
Inline functions declared and definied inside class.
    (inline definition is not necessary though. Compiler can do it automatically for short functions)
Inside class is declared function which is definied outside of it.
*/

#include <iostream>

using namespace std;

class Class {
    public:
        Class() {
            cout << "Class it is" << endl;
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
    Class c;

    c.setA(11);
    c.setB(-9);
    c.setC(-2);

    cout << "A:  "  << c.getA() << endl;
    cout << "B:  "  << c.getB() << endl;
    cout << "C:  "  << c.getC() << endl;
    cout << "Sum: " << c.sum()  << endl;
}
