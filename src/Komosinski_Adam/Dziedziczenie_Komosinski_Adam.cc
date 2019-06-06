#include <iostream>

using namespace std;

class Kwadrat {
    public:
        Kwadrat(int a) {
            this->a = a;
        }
        void krawedzi() {
            cout << "Krawedz kwadratu: " << a << endl;
        }
        int getA() {
            return a;
        }
    private:
        int a;
};

class Prostokat : public Kwadrat {
    public:
        Prostokat(int a, int b):Kwadrat(a) {
            this->a = a;
            this->b = b;
        }
        void krawedzi() {
            cout << "Krawedz prostokata a: " << a << endl << "Krawedz prostokata b: " << b << endl;
        }
    private:
        int a;
        int b;
};



int main() {
    Kwadrat *kwadrat = new Kwadrat(6);
    kwadrat->krawedzi();
    Prostokat *prostokat = new Prostokat(kwadrat->getA(), 3);
    prostokat->krawedzi();

}
