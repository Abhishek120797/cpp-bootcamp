// Create two classes Rupee and Dollar and add necessary functions to support Rupee to
// Dollar and Dollar to Rupee conversion.
// Exampleint main()
// {
//  Rupee r = 23;
// Dollar d = r; // Rupee to Dollar conversion
// d.display();
// r.display();
// r = d; // Dollar to Rupee Conversion
// d.display();
// r.display();
//  return 0;
// }

#include <iostream>
using namespace std;
class Dollar;
class Rupee
{
private:
    int rs;

public:
    Rupee() { rs = 0; };
    Rupee(int r) : rs(r) {}
    Rupee(Dollar d);
    int getrupee() { return rs; }
    operator int()
    {
        return rs;
    }
    void display()
    {
        cout << "Rupees = " << rs << endl;
    }
};

class Dollar
{
private:
    int dol;

public:
    Dollar() { dol = 0; }
    Dollar(int x) { dol = x; }
    Dollar(Rupee r) { dol = r.getrupee(); }
    int getdollar() { return dol; }
    void display()
    {
        cout << "Dollar = " << dol << endl;
    }
};

Rupee::Rupee(Dollar d) { rs = d.getdollar(); }

int main()
{
    Rupee r = 23;
    Dollar d = r;
    d.display();
    r.display();
    d = 12;
    r = d;
    d.display();
    r.display();
}