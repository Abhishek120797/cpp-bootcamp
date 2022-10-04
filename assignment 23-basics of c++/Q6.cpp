#include<iostream>
using namespace std;
int main()
{
    int num_1,num_2,num_3,avg;
    cout<<"Enter three numbers : ";
    cin>>num_1;
    cin>>num_2;
    cin>>num_3;
    avg=(num_1+num_2+num_3)/3;
    cout<<"average of numbers is "<<avg;
    return 0;
}