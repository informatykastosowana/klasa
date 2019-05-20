/*
Below is example on how to inherit one class into another and above them is abstract class Shape
*/
#include <iostream>

using namespace std;

class Shape {
    public:
        virtual int computeArea() = 0;
        void setA(int w) {
            a = w;
        }
        void setB(int h) {
            b = h;
        }
    protected:
        int a;
        int b;
};

class Square: public Shape {
    public:
        int computeArea() {
            return (a * a);
        }
};

class Rectangle: public Shape {
    public:
        int computeArea() {
            return (a * b);
        }
};

int main() {
    Square square;
    Rectangle rectangle;

    square.setA(5);
    cout << "Square area: " << square.computeArea() << endl;

    rectangle.setA(5);
    rectangle.setB(7);
    cout << "Rectangle area: " << rectangle.computeArea() << endl;

    return 0;
}
