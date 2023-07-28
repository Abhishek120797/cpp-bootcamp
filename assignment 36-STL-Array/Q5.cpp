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
    
    for(auto i=num.begin(); i!=num.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl; 
    for(auto i=num.rbegin(); i!=num.rend(); i--)
    {
        cout<<*i<<" ";
    }
    return 0;
}