#include <iostream>
using namespace std;
void swap(int &, int &);
int main()
{
    int a, b;
    cout << "Enter number a= ";
    cin >> a;
    cout << "Enter number b= ";
    cin >> b;
    swap(a, b);
    cout << "a = " << a << endl
         << "b = " << b;

    return 0;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}