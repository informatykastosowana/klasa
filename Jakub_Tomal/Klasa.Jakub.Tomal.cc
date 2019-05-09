#include <iostream>
using namespace std;

//dodac destruktor i liste inicjalizacyjna w konstruktorze
class klasa
{

    public:

        klasa(){cout<<"jestem konstruktorem"<<endl;}

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

k1.name = 'A';
k1.SetA(2);
k1.SetB(5);
k1.SetC(3);

cout<< k1.GetA() <<endl;
cout<< k1.Sum() <<endl;
cout<< k1.name <<endl;

cout<< k1.NWDAB() <<endl;


}
