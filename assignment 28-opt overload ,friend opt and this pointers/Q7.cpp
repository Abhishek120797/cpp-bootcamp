#include<iostream>
using namespace std;

class Integer
{
    private:
        int a;
    public:
        Integer(){ cout<<"default cunstrcter"; }
        Integer(int i)
        {
            cout<<"para cunstructer called"<<endl;
            a=i; 
        }

        void setInteger(int i){ a=i; }
        Integer getInteger(){ return a; }

        operator int()
        {
            cout<<"int type cast called";
            return a;
        }
        void operator!()
        {
            if(a==0)
                a=1;
            else
                a==0;
        }

        void display(){ cout<<a; }
};

int main()
{
    int x=10;
    Integer n1,n2;
    n1=x;
    x=n1;
    n1.display();
    
    return 0;
}