// Define a function to check whether a given number is a Prime number or not

#include <iostream>
using namespace std;

int checkPrime(int);

int main()
{
    int num, flag = 0;
    cout << "Enter a number: ";
    cin >> num;
    if (checkPrime(num))
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}

int checkPrime(int num)
{
    if (num == 0 || num == 1)
        return 0;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}