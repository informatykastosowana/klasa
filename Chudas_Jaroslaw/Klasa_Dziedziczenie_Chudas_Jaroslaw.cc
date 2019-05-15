/*
Below is example on how to inherit one class into another
*/
#include <iostream>

using namespace std;

class Square {
    public:
        Square(int a) {
            this->a = a;
        }
        void return_side() {
            cout << "Side of square is: " << a << endl;
        }
        int getA() {
            return a;
        }
    private:
        int a;
};

class Rectangle : public Square {
    public:
        Rectangle(int a, int b):Square(a) {
            this->a = a;
            this->b = b;
        }
        void return_sides() {
            cout << "Sides of rectangle are: " << a << ", " << b << endl;
        }
    private:
        int a;
        int b;
};



int main() {
    Square *square = new Square(4);
    square->return_side();

    Rectangle *rectangle = new Rectangle(square->getA(), 8);
    rectangle->return_sides();

}
