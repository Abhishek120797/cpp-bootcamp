#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    vector <int>num1={1,2,3,4,5,6,7,8,9,10};
    vector <int>num2={2,4,6,8,10,17,12,14,18,19,20,0};
    vector <int>num3;
    set_intersection(num1.begin(),num1.end(),num2.begin(),num2.end(),back_inserter(num3));
    for(int i: num3)
    {
        cout<<i<<" ";
    }
    return 0;
}