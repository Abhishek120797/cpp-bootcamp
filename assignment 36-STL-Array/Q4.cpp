#include<iostream>
#include<array>
#include<iterator>
#include<tuple>
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
    
    cout<<"element on index 9 is = "<<num.at(9);
    return 0;
}