// Declare a vector without initialization, insert some elements and print

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> num;
    num.push_back(10);
    num.push_back(9);
    num.insert(num.begin(), 8);
    num.insert(num.end(), 7);
    for (int i : num)
    {
        cout << i << " ";
    }
    return 0;
}