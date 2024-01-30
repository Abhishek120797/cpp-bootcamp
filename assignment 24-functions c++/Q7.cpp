// Write a function using the default argument that is able to add 2 or 3 numbers.

#include <iostream>
using namespace std;

int add(int, int, int = 0);

int main()
{
    cout << add(10, 20) << endl;
    cout << add(10, 20, 30);
    return 0;
}

int add(int a, int b, int c)
{
    return a + b + c;
}