#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void showdata()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
        void setdata()
        {
            cout<<"Enter real part : ";
            cin>>a;
            cout<<"Enter imaginary part : ";
            cin>>b;
        }
        Complex add(Complex c)
        {
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.setdata();
    c2.setdata();
    c3=c1.add(c2);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}