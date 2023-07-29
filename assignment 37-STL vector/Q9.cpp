#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    vector <float>num;
    float n;
    cout << "Enter float elements (Enter a non-float value to stop): ";
    while(cin>>n)
    {
        num.push_back(n);
    }
    for(float i: num)
    {
        cout<<i<<" ";
    }
    return 0;
}