#include <iostream>
using namespace std;


class klasa
{

    public:

        klasa(){cout<<"jestem konstruktorem"<<endl;}
        klasa(const klasa &k)
        {
            name = k.name;
            a= k.a + 1;
            b = 6;
        }

        char name;

        inline void SetA(int val)
        {
            a = val;
        }

        void SetB(int val)
        {
            b = val;
        }

        void SetC(int val)
        {
            c = val;
        }

        int GetA()
        {
            return a;
        }

        int GetB()
        {
            return b;
        }

        int GetC()
        {
            return c;
        }

        int Sum()
        {
            return a+b+c;
        }

        int NWDAB();

    private:
        int a;
        int b;
        int c;


};

int klasa::NWDAB()
{
    int tmp;
    while(true)
    {
        if (GetB() == 0)
        {
            return GetA();
        }
        tmp = GetA();
        SetA(GetB());
        SetB(tmp % GetB());
    }


}





int main()
{
klasa k1;
klasa k2;

k2.SetA(11);
k2.SetB(20);
k2.SetC(18);

k1.name = 'A';
k1.SetA(2);
k1.SetB(5);
k1.SetC(3);

cout<< k1.GetA() <<endl;
cout<< k1.GetB() <<endl;
cout<< k1.Sum() <<endl;
cout<< k1.name <<endl;

cout<< k1.NWDAB() <<endl;


cout<< "------------------" <<endl;
k1 = k2;

cout<< k1.GetA() <<endl;
cout<< k1.GetB() <<endl;
cout<< k1.GetC() <<endl;
cout<< k1.name <<endl;
cout<< k1.Sum() <<endl;





}
