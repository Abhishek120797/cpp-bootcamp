#include <iostream>
using namespace std;

int highValueDigit(int);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << highValueDigit(num);
    return 0;
}

int highValueDigit(int num)
{
    int temp = 0;
    ;
    while (num != 0)
    {
        if (temp < num % 10)
            temp = num % 10;
        num = num / 10;
    }
    return temp;
}