#include <iostream>

using namespace std;


class SomeClass
{

public:
/*
    SomeClass(int num, string txt)
    {
        number = num;
        text = txt;
    }
    */
    SomeClass(int num, string txt) : number(num), text(txt)
    {
    }
    ~SomeClass()
    {
    cout << "wywolanie destruktora" << endl;
    }

    void setText(string newtext)
    {
        text = newtext;
    }

    string getText()
    {
        return text;
    }

    void setNumber(int num)
    {
        number = num;
    }

    inline void addToNumber(int x)
    {
        number += x;
    }
    int getNumber()
    {
        return number;
    }

    int printNumber(int);



private:
    int number;
    string text;

};


int SomeClass::printNumber(int x)
{
    cout << x << endl;
}



int main()
{
    SomeClass* mojObiekt = new SomeClass(1, "jakis tekst");
    cout << "text: " <<mojObiekt->getText() << endl;
    cout << "number: " <<mojObiekt->getNumber() << endl;

    cout << "ZMIANA" << endl;
    mojObiekt->setText("Zmieniony tekst");
    mojObiekt->setNumber(2);
    cout << "text: " <<mojObiekt->getText() << endl;
    cout << "number: " <<mojObiekt->getNumber() << endl;
    mojObiekt->addToNumber(10);
    cout << "wywolanie: mojObiekt->addToNumber(10)" << endl;
    cout << "number: " <<mojObiekt->getNumber() << endl;


    mojObiekt->printNumber(10);
    delete mojObiekt;
}
