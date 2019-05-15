/*
File contain class operating on private variables using set and get.
Inline functions declared and definied inside class.
    (inline definition is not necessary though. Compiler can do it automatically for short functions)
Inside class is declared function which is definied outside of it.
This version contain destructor and list declaration inside of class Class
*/
#include <iostream>

using namespace std;

class Class {
    public:
        Class(int a, int b, int c) {
            this->a = a;
            this->b = b;
            this->c = c;
            cout << "Class it is" << endl;
        }

        ~Class() {
            cout << "Class it is not" << endl;
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
    Class c(0, 0, 0);

    c.setA(11);
    c.setB(-9);
    c.setC(-2);

    cout << "A:  "  << c.getA() << endl;
    cout << "B:  "  << c.getB() << endl;
    cout << "C:  "  << c.getC() << endl;
    cout << "Sum: " << c.sum()  << endl;
}
