#include <iostream>
using namespace std;


class klasa
{

    public:

        klasa(int a, int b, int c , int id): id(id){
            this->a = a;
            this->b = b;
            this->c = c;
            cout<<"jestem konstruktorem"<<endl;
            }
        ~klasa(){cout<<"destruktor"<<endl;}

        char name;

        inline void SetA(int val){a = val;}

        void SetB(int val){b = val;}

        void SetC(int val){c = val;}

        int GetA(){return a;}

        int GetB(){return b;}

        int Sum(){return a+b+c;}

        int Getid(){return id;}

        int NWDAB();

    private:
        int a;
        int b;
        int c;
        const int id;


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
klasa *k1 = new klasa(0,0,0,1);

cout<< k1->GetA() <<endl;
cout<< k1->GetB() <<endl;
cout<< k1->Sum() <<endl;
cout<< k1->name <<endl;
cout<< k1->Getid() <<endl;
cout<<"---------------------"<<endl;

k1->name = 'A';
k1->SetA(2);
k1->SetB(5);
k1->SetC(3);

cout<< k1->GetA() <<endl;
cout<< k1->GetB() <<endl;
cout<< k1->Sum() <<endl;
cout<< k1->name <<endl;
cout<< k1->Getid() <<endl;

cout<< k1->NWDAB() <<endl;


}
