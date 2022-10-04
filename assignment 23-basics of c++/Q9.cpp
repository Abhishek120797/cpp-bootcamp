#include<iostream>
using namespace std;
int main()
{
    int num_1,num_2;
    cout<<"Enter two numbers : ";
    cin>>num_1;
    cin>>num_2;
    if(num_1>=num_2)
        cout<<num_1<<" is greater number";
    else
        cout<<num_2<<" is greater number";
    return 0;
}