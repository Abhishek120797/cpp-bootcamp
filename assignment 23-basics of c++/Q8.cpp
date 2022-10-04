#include<iostream>
using namespace std;
int main()
{
    int num_1,num_2;
    cout<<"Enter first numbers : ";
    cin>>num_1;
    cout<<"Enter second numbers : ";
    cin>>num_2;
    num_1=num_1+num_2;
    num_2=num_1-num_2;
    num_1=num_1-num_2;
    cout<<"After swapping"<<endl;
    cout<<"first number= "<<num_1<<endl<<"second number= "<<num_2;
    return 0;
}