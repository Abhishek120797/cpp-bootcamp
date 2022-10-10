#include<iostream>
using namespace std;

class Square
{   
    private:
    int num;
    int square;
    static int count;
    public:
    void set()
    {
        cout<<"Enter a number : ";
        cin>>num;
    }
    int get_num()
    {
        return num;
    }
    int get_square()
    {
        return square;
    }
    int get_count()
    {
        return count;
    }
    void fsquare()
    {
        square=num*num;
        count++;
    }
};
int Square::count=0;
int main()
{
    Square num1;
    num1.set();
    num1.fsquare();
    cout<<"square of "<<num1.get_num()<<" is "<<num1.get_square()<<endl;
    cout<<"number of count of square function call :"<<num1.get_count();
    return 0;
}