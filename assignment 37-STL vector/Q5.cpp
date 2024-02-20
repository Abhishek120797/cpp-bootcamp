// Find largest and smallest elements in a vector

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> num = {21, 12, 13, 14, 50, 6, 10, 15};
    cout << "max element is =" << *max_element(num.begin(), num.end()) << endl;
    cout << "min element is =" << *min_element(num.begin(), num.end()) << endl;
    return 0;
}