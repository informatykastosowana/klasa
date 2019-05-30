#include <iostream>

using namespace std;

//przyklad dziedziczenia
class Parent{
    protected:
    int a;
    public:
    int c;
    
};

class Child: public Parent{
    public:
    int b;
    
    void setVal();
};

void Child::setVal(){
    a = 1; //widoczna
    b = 2;
    c = 3; //widoczna
}

class Osoba {
public:
    string imie;
    int wiek;

    Osoba (const Osoba &osoba) {
        imie = osoba.imie;
        wiek = osoba.wiek;
        cout << "konstruktor kopiujacy" << endl;
    }

    Osoba() {
        imie = "brak";
        wiek = 0;
        cout << "konstruktor domyslny" << endl;
    }


    Osoba(string IMIE, int WIEK) : imie(IMIE), wiek(WIEK) {
        cout << "lista inicjalizacyjna" << endl;
    }

    ~Osoba(){
        cout << "destruktor - zwolnienie pamieci" << endl;
    }
    //set
    void SetValues(string imie, int wiek){
        this->imie = imie;
        this->wiek = wiek;
    }
    //get string
     string GetValue1(){
        return imie;
    }
    //get int
    int GetValue2(){
        return wiek;
    }

    inline int addAge(int x){
        return wiek + x;
    }

    void toString();
};
//funkcja zdefiniowana poza klasa
void Osoba::toString(){
    cout << "Imie: " << imie << ", Wiek: " << wiek << "\n";
}


int main()
{
    Osoba *Bartosz = new Osoba();
    Osoba Krzysztof("Krzysztof", 20);
 
    cout << Bartosz->imie << " " << Bartosz->wiek << endl; //Bartosz wywola konstruktor domyslny
    cout << Krzysztof.imie << " " << Krzysztof.wiek << endl; //Krzysztof lista inicjalizacyjna
    
    cout << "--------" << endl;
    Osoba *Wojciech = new Osoba("Wojciech", 22);  //nowy obiekt
 	Osoba Damian (*Wojciech);  // kopia obiektu Wojciech
 	Damian.toString();
 	
 	string test1 = Damian.GetValue1();
 	int test2 = Damian.GetValue2();
 	cout << "------------" << endl;
 	cout << test1 << endl;
 	cout << test2 << endl;
 	
 	cout << "-----------" << endl;
 	Damian.SetValues("Damian", 21);
 	Damian.toString();
 	
 	Krzysztof.SetValues("Krzysztof",Krzysztof.addAge(15));
 	Krzysztof.toString();
 	
 	Parent A;
 	Child B;
 	int testowa;
 	//testowa = A.b; //niewidoczna
 	testowa = B.b; //widoczna
 	//testowa = A.a; //niewidoczna
 	//testowa = B.a; //niewidoczna
 	testowa = B.c; //widoczna
 	testowa = A.c; //widoczna
 	//testowa = A.a; //niewidoczna
 	
 	
 	return 0;
}
