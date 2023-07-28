#include<iostream>
#include<array>
#include<iterator>
#include<tuple>
using namespace std;

int main()
{
    array <int,0>num1;

    if(num1.empty())
        cout<<"array is empty"<<endl;
    else
        cout<<"array is not empty"<<endl;
    
    array <int,10>num2;
    
    if(num2.empty())
        cout<<"array is empty"<<endl;
    else
        cout<<"array is not empty"<<endl;

    return 0;
}