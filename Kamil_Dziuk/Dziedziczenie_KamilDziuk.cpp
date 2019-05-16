#include <iostream>
using namespace std;


class Osoba
{
public:
    Osoba(string Imie, string Nazwisko, long long PESEL):PESEL(PESEL)
    {
        this->Imie = Imie;
        this->Nazwisko = Nazwisko;
    }

    void zwroc()
    {
        cout<<Imie<<"\n"<<Nazwisko<<"\n"<<PESEL<<endl;
    }

    string getImie(){return Imie;}
    string getNazwisko(){return Nazwisko;}

    long long getPESEL(){return PESEL;}
private:
    string Imie;
    string Nazwisko;
    const long long PESEL;
};



class Student : public Osoba
{
public:
    Student(Osoba o, int nrLegitymacji):Osoba(o.getImie(), o.getNazwisko(), o.getPESEL())
    {
        this->nrLegitymacji = nrLegitymacji;
    }

    int getNrLegitymacji(){return nrLegitymacji;}
private:
    int nrLegitymacji;
};



int main()
{
    Osoba *o1 = new Osoba("Kamil" , "Kowalski" , 123456789);

    o1->zwroc();

    Student *p1 = new Student(*o1 , 21);


    cout<<"-------------"<<endl;
    p1->zwroc();
    cout<<p1->getNrLegitymacji()<<endl;
}

