#include<iostream>
using namespace std;

class complex
{
    private:
    int imag;
    int real;
    public:
    void input()
    {
        cout<<"Enter real number : ";
        cin>>real;
        cout<<"Enter imaginary part : ";
        cin>>imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};

int main()
{
    complex num1,num2,num3;
    num1.input();
    num2.input();
    num3.input();
    num1.display();
    num2.display();
    num3.display();
    return 0;
}