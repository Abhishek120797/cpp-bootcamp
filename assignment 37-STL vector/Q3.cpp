// Write a function to print the element of a vector and take input from the user

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    int n;
    cout << "Enter vector element (Enter -1 to stop): ";
    vector<int> num;
    while (true)
    {
        cin >> n;
        if (n == -1)
            break;
        num.push_back(n);
    }
    for (int i : num)
    {
        cout << i << " ";
    }

    return 0;
}