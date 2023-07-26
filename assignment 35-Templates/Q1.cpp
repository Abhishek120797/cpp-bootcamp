#include<iostream>

using namespace std;

template<typename T,typename F>
F sum(T num1,F num2)
{
    return num1+num2;
}

int main()
{
    cout<<sum<int,int>(10,20)<<endl;
    cout<<sum<int,float>(10,20.5)<<endl;
    cout<<sum<float,int>(10.5,20)<<endl;
    cout<<sum<float,float>(10.5,20.5)<<endl;

    return 0;
}