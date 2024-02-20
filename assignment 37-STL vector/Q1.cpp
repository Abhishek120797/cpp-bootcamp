// Declare a vector with Initialization and print the elements.

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> num = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i : num)
    {
        cout << i << " ";
    }
    return 0;
}