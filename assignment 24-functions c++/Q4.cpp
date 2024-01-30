// Define a function to print Pascal Triangle up to N lines

#include <iostream>
using namespace std;

void printPascal(int);
int fact(int);
int combination(int, int);

int main()
{
    int line;
    cout << "Enter no of line of pascal: ";
    cin >> line;
    printPascal(line);
    return 0;
}

void printPascal(int line)
{
    int i, j, k, r;
    for (i = 0; i < line; i++)
    {
        k = 1;
        r = 0;
        for (j = 0; j <= (line * 2 - 1); j++)
        {
            if (j >= line - i && j <= line + i && k)
            {
                cout << combination(i, r);
                k = 0;
                r++;
            }
            else
            {
                cout << " ";
                k = 1;
            }
        }
        cout << endl;
    }
}

int combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int fact(int num)
{
    int temp = 1;
    while (num)
    {
        temp = temp * num;
        num--;
    }
    return temp;
}