#include <iostream>
using namespace std;

class ClassB;

class ClassA
{
private:
    int privateValue;

public:
    ClassA(int value) : privateValue(value) {}

    int getPrivateValue() { return privateValue; }

    friend void ExchangeValues(ClassA &a, ClassB &b);
};

class ClassB
{
private:
    int privateValue;

public:
    ClassB(int value) : privateValue(value) {}

    int getPrivateValue() { return privateValue; }

    friend void ExchangeValues(ClassA &a, ClassB &b);
};

void ExchangeValues(ClassA &a, ClassB &b)
{
    int temp = a.privateValue;
    a.privateValue = b.privateValue;
    b.privateValue = temp;
}

int main()
{
    ClassA objA(10);
    ClassB objB(20);

    cout << "Before exchange: " << endl;
    cout << "ClassA privateValue: " << objA.getPrivateValue() << endl;
    cout << "ClassB privateValue: " << objB.getPrivateValue() << endl;

    ExchangeValues(objA, objB);

    cout << "\nAfter exchange: " << endl;
    cout << "ClassA privateValue: " << objA.getPrivateValue() << endl;
    cout << "ClassB privateValue: " << objB.getPrivateValue() << endl;

    return 0;
}
