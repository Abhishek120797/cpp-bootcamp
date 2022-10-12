#include<iostream>
using namespace std;
class Bank
{
    private:
        int principal,year;
        float roi,si;
    public:
        Bank()
        {
            cout<<"Enter principal amount : ";
            cin>>principal;
            cout<<"Enter Rate og interest : ";
            cin>>roi;
            cout<<"Enter period in years : ";
            cin>>year;
        }
        Bank(int x,float y,int z)
        {
            principal=x;
            roi=y;
            year=z;
        }
        void set_principal(int x){ principal=x; }
        void set_roi(float x){ roi=x; }
        void set_period(int x){ year=x; }
        int get_principal(){ return principal;}
        int get_period(){ return year; }
        float get_roi(){ return roi; }
        float get_si(){ return si; }
        void calulate_si(){ si=principal*roi*year/100.0; }

};

int main()
{
    Bank b1,b2(1000,7.8,5);
    b1.calulate_si();
    cout<<"principal amount = "<<b1.get_principal()<<" Rate of intrest = "
    <<b1.get_roi()<<" Time period = "<<b1.get_period()<<endl;
    cout<<"simple interest= "<<b1.get_si()<<endl;
    b2.calulate_si();
    cout<<"principal amount = "<<b2.get_principal()<<" Rate of intrest = "
    <<b2.get_roi()<<" Time period = "<<b2.get_period()<<endl;
    cout<<"simple interest= "<<b2.get_si();
    return 0;
}