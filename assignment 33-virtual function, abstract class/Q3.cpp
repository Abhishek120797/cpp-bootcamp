#include <iostream>

using namespace std;

class Object
{
private:
    int value;

public:
    Object() {}
    Object(int x) : value(x){};
    int getValue() { return value; }
    void setValue(int x) { value = x; }
    void swap(Object *x)
    {
        Object temp;
        temp.value = value;
        value = x->value;
        x->value = temp.value;
    }
};

int main()
{
    Object obj1(10), obj2(20);

    cout << "Before swapping :" << endl;
    cout << "obj1 = " << obj1.getValue() << endl;
    cout << "obj2 = " << obj2.getValue() << endl;
    obj1.swap(&obj2);
    cout << endl;
    cout << "After swapping :" << endl;
    cout << "obj1 = " << obj1.getValue() << endl;
    cout << "obj2 = " << obj2.getValue() << endl;
    return 0;
}