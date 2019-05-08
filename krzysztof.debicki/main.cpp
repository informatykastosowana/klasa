#include <iostream>
#include <math.h>
#include <cctype>
#include <cstring>

using namespace std;

class Testowa
{
private:
    int testowy_int;
    string testowy_string;

public:

    inline int do_potegi(int);
    string caps_lock(string);

    Testowa(int t, string s)
    {
        testowy_int = t;
        testowy_string = s;
    }

    const int& GetInt() { return testowy_int; }
    void SetInt(int t) { testowy_int = t; }

    const string& GetString() { return testowy_string; }
    void SetString(string s) { testowy_string = s; }

    inline int do_potegi(double a, double b)
    {
        return pow(a, b);
    }

};

string Testowa::caps_lock(string s)
{
    int i=0;
    char c;
    string str;
    while (s[i])
    {
        c=s[i];
        str += toupper(c);
        i++;
    }
    return str;
}



int main()
{
    Testowa test(20, "haha");
    cout << test.GetInt() << endl;
    test.SetInt(40);
    cout << test.GetInt() << endl;
    cout << test.GetString() << endl;
    test.SetString("hehe");
    cout << test.GetString() << endl;
    cout << test.do_potegi(2, 4) << endl;
    cout << test.caps_lock("Hello World!") << endl;
    return 0;
}
