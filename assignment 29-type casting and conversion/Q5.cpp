// Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
// functions to support Invent1 to float and Invent1 to Invent2 type.
// Example -
// int main()
// {
//  Invent1 s1=(4,5);
//  Invent2 d1;
//  float tv;
//  tv=s1;
//  d1=s1;
//  return 0;
// }

#include <iostream>
using namespace std;
class Invent2;
class Invent1
{
private:
    int a;
    int b;

public:
    Invent1() {}
    Invent1(int k, int l)
    {
        a = k;
        b = l;
    }
    void display()
    {
        cout << "a =" << a << " b = " << b << endl;
    }
    operator float()
    {
        return a + b;
    }
    operator Invent2();
};

class Invent2
{
private:
    int x;
    int y;

public:
    Invent2() {}
    Invent2(int k, int l)
    {
        x = k;
        y = l;
    }
    void display()
    {
        cout << "x = " << x << " y = " << y << endl;
    }
};

Invent1::operator Invent2()
{
    Invent2 i(a, b);
    return i;
}

int main()
{
    Invent1 s1(4, 5);
    Invent2 d1;
    float tv;
    tv = s1;
    d1 = s1;
    cout << tv << endl;
    d1.display();

    return 0;
}