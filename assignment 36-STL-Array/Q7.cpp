#include<iostream>
#include<array>
#include<iterator>
#include<tuple>
#include<algorithm>
using namespace std;

int main()
{
    array <int,10>num;
    cout<<"Enter 10 numbers : ";
    for(auto &i: num)
    {
        cin>>i;
    }
    for(auto i: num)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    sort(num.begin(),num.end());
    for(auto i: num)
    {
        cout<<i<<" ";
    }
    return 0;
}