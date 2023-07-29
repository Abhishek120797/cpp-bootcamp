#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    int n;
    vector <int>num={1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter a number : ";
    cin>>n;
    for(int i: num)
    {
        if(i==n)
        {
            cout<<"Exist";
            return 0;
        }
    }
    cout<<"Not exist";
    return 0;
}