#include <iostream>
using namespace std;

class Klasa
{

  public:
    Klasa() {};
    Klasa(int a, int b, int c){ fA = a; fB = b; fC =c;}
    Klasa(int a, int b);
    ~Klasa();

    int fA;
    
    inline void SetB(int b) { fB = b; }
    void SetC(int c) { fC = c; }
    int  GetA();
    int  GetB() { return fB; }
    int  GetC() { return fC; }
    void IncreaseA(int i);
    int SumBC();
    
  protected:
    int fB;
  private:
    int fC;
};

Klasa::Klasa(int a, int b) : fA(a), fB(b)
{}

int Klasa::GetA(void) {
   return fA;
}

void Klasa::IncreaseA(int i = 1){
   fA+=i;
}

int Klasa::SumBC() {
   return fB+fC;
}

Klasa::~Klasa(){
   cout <<"Obiekt zostal zniszczony"<< endl;
}

int main()
{

  Klasa obiekt0;
  obiekt0.fA = 1;
  cout << "obiekt0 fA = " << obiekt0.fA << endl;
  obiekt0.SetB(3);
  cout << "obiekt0 fB = " << obiekt0.GetB() << endl;
  obiekt0.SetC(4);
  cout << "obiekt0 fC = " << obiekt0.GetC() << endl;
  cout << "\nobiekt0 suma fB + fC = " << obiekt0.SumBC() << endl;

  Klasa obiekt1(4,5,6);
  cout << "\n\nobiekt1 fA = " << obiekt1.fA << endl;
  cout << "obiekt1 fB = " << obiekt1.GetB() << endl;
  cout << "obiekt1 fC = " << obiekt1.GetC() << endl;
  obiekt1.IncreaseA();
  cout << "\nobiekt1 fA = " << obiekt1.GetA() << endl;

  Klasa *wskobiekt = new Klasa();
  wskobiekt->fA = 7;
  cout << "\n\nwskobiekt fA = " << wskobiekt->fA << endl;
  wskobiekt->IncreaseA(3);
  cout << "\nwskobiekt fA = " << wskobiekt->fA << "\n"<< endl;

  delete wskobiekt;
}
