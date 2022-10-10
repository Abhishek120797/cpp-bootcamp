#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
    int actual_num;
    int reverse_num;
    public:
    void set()
    {
        cout<<"Enter a number : ";
        cin>>actual_num;
    }
    int getnum()
    {
        return actual_num;
    }
    int get_reverse_num()
    {
        return reverse_num;
    }
    void reverse()
    {
        int temp=actual_num;
        reverse_num=0;
        while(temp!=0)
        {
            int rem;
            rem=temp%10;
            temp=temp/10;
            reverse_num=reverse_num*10+rem;
        }
    }
};
int main()
{
    ReverseNumber num1;
    num1.set();
    num1.reverse();
    cout<<"actual number = "<<num1.getnum()<<endl
    <<"reverse number = "<<num1.get_reverse_num();
    return 0;
}