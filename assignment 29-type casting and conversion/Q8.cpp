// . Create a Rupee class and convert it into int. And Display it.
// Exampleint main()
// {
//  Rupee r = 10;
//  int x = r;
// cout<<x;
//  return 0;
// }

#include <iostream>
using namespace std;

class Rupee
{
private:
    int rs;

public:
    Rupee() { rs = 0; };
    Rupee(int r) : rs(r) {}
    operator int()
    {
        return rs;
    }
    void display()
    {
        cout << "Rupees = " << rs << endl;
    }
};
int main()
{
    Rupee r = 10;
    int x = r;
    cout << x << endl;
    r.display();
    return 0;
}