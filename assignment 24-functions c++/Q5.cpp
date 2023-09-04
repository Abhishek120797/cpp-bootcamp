#include <iostream>
using namespace std;

bool check_fibb_term(int);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (check_fibb_term(num))
        cout << num << " is fibonacci term";
    else
        cout << num << " is not fibonacci term";
    return 0;
}

bool check_fibb_term(int num)
{
    int t1 = 0, t2 = 1, t3;
    if (num == 0 || num == 1)
        return 1;

    while (t2 <= num)
    {
        if (t2 == num)
            return 1;
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    return 0;
}