#include <iostream>
using namespace std;

// dodać klase abstrakcyjna
class osoba
{
public:
    osoba(string imie , string nazwisko , long long pesel):pesel(pesel)
    {
        this->imie = imie;
        this->nazwisko = nazwisko;
    }

    void wypisz()
    {
        cout<<imie<<"\n"<<nazwisko<<"\n"<<pesel<<endl;
    }

    string GetImie(){return imie;}
    string GetNazwisko(){return nazwisko;}

    long long GetPesel(){return pesel;}
private:
    string imie;
    string nazwisko;
    const long long pesel;
};



class pracownik : public osoba
{
public:
    pracownik(osoba o , int nrLegitymacji):osoba(o.GetImie() ,o.GetNazwisko(),o.GetPesel())
    {
        this->nrLegitymacji = nrLegitymacji;
    }

    int GetNrLegitymacji(){return nrLegitymacji;}
private:
    int nrLegitymacji;
};



int main()
{
    osoba *o1 = new osoba("adam" , "zagajnik" , 96020708255);

    o1->wypisz();

    pracownik *p1 = new pracownik(*o1 , 21);


    cout<<"-------------"<<endl;
    p1->wypisz();
    cout<<p1->GetNrLegitymacji()<<endl;
}
