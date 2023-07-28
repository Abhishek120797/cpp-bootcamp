#include<iostream>
#include<array>

using namespace std;

template<size_t T>
array<int,T> productArrayExceptItself(array <int,T>&arr)
{
    array <int,T>result;
    int *left = new int(T);
    int *right = new int(T);

    left[0]=1;
    for(int i=1; i<T; i++)
    {
        left[i] = left[i-1] * arr[i-1]; 
    }

    right[T-1]=1;
    for(int i=T-2; i>=0; i--)
    {
        right[i] = right[i+1] * arr[i+1];
    }

    for(int i=0; i<T; i++)
    {
        result[i] = left[i] * right[i];
    }

    return result;
}

int main()
{
    array <int,5>num={1,2,3,4,5};
    array <int,5>ans;
    ans=productArrayExceptItself<num.size()>(num);

    for(int i: num)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i: ans)
    {
        cout<<i<<" ";
    }    
    return 0;
}