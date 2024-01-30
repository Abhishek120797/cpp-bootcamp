// Create an Integer class that contains int x as an instance variable and overload
// casting int() operator that will type cast your Integer class object to int data type.

#include <iostream>
using namespace std;

class Integer
{
private:
    int a;

public:
    Integer() {}
    Integer(int i)
    {
        a = i;
    }

    void setInteger(int i) { a = i; }
    Integer getInteger() { return a; }

    operator int()
    {
        return a;
    }
    bool operator!()
    {
        if (a == 0)
            return true;
        else
            return false;
    }

    void display() { cout << a; }
};

int main()
{
    Integer myInt(42);
    int value = myInt;
    myInt = value;
    cout << "Value: " << value << endl;

    return 0;
}