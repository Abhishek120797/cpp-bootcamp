// Write a program to Copy one vector’s elements to another vector.

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> num1 = {1, 2, 3, 4, 5, 6};
    vector<int> num2;
    num2 = num1;
    for (int i : num2)
    {
        cout << i << " ";
    }
    return 0;
}