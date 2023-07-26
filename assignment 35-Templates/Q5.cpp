#include<iostream>
using namespace std;

template<typename T1=int,typename T2=int>
auto Add(T1 x,T2 y)
{
    return x+y;
}

int main()
{
    
    cout<<Add(10,20)<<endl;
    cout<<Add<float,int>(10.5,20)<<endl;
    cout<<Add<int,float>(10,20.5)<<endl;
    cout<<Add<float,float>(10.5,20.4)<<endl;
    return 0;
}