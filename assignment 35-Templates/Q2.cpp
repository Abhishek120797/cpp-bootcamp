#include<iostream>
using namespace std;

template<typename T1,typename T2>
auto maximum(T1 num1,T2 num2)
{
    return num1>num2?num1:num2;
}

int main()
{
    cout<<maximum<int,int>(10,20)<<endl;
    cout<<maximum<float,float>(10.5,20)<<endl;
    cout<<maximum<char,char>('a','A')<<endl;
    cout<<maximum<int,float>(10,20.5)<<endl;
    cout<<maximum<float,float>(10.5,20.5)<<endl;

    return 0;
}