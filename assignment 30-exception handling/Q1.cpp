#include<iostream>
using namespace std;

void test_try(int num)
{
    try
    {
         if(num>=0 && num<=9)
            throw num;
         else
            cout<<"It is not a single Number ";
        throw;
    }
    catch(int a)
    {
        cout<<"It is a single Number";
    }
    catch(char b[100])
    {
        cout<<b;
    }
    
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    test_try(num);
    return 0;
}