#include <iostream>
using namespace std;

class Dollar
{
private:
    int dol;

public:
    Dollar() { dol = 0; }
    Dollar(int x) { dol = x; }
    void display()
    {
        cout << "Dollar = " << dol << endl;
    }
};

int main()
{
    int x = 50;
    Dollar d;
    d = x;
    d.display();
    return 0;
}