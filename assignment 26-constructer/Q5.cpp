#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;
    public:
        Date()
        {
            cout<<"Enetr day : ";
            cin>>d;
            cout<<"Enter month : ";
            cin>>m;
            cout<<"Enter year : ";
            cin>>y;
        }
        Date(int a,int b,int c)
        {
            d=a;
            m=b;
            y=c;
        }
        void setdate(int a,int b,int c)
        {
            d=a;
            m=b;
            y=c;
        }
        void showdate()
        {
            cout<<d<<"/"<<m<<"/"<<y<<endl;
        }
};

int main()
{
    Date d1,d2(10,12,2022);
    d1.showdate();
    d2.showdate();
    return 0;
}