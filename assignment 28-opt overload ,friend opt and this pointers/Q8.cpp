#include<iostream>
using namespace std;

class Cordinate
{
    private:
        int x;
        int y;
        int z;
    public:
        Cordinate(){  }
        Cordinate(int x){ this->x=x; }
        Cordinate(int x,int y){ this->x=x; this->y=y; }
        Cordinate(int x,int y,int z)
        {
            this->x=x;
            this->y=y;
            this->z=z;
        }
        void setX(int x){ this->x=x; }
        void setY(int y){ this->y=y; }
        void setZ(int z){ this->z=z; }
        void setCord(int x,int y,int z)
        {
            this->x=x;
            this->y=y;
            this->z=z;
        }
        int getX(){ return x; }
        int getY(){ return y; }
        int getZ(){ return z; }

        Cordinate operator,(Cordinate other)
        {
            cout<<"called"<<endl;
            Cordinate temp;
            temp.x=other.x;
            temp.y=other.y;
            temp.z=other.z;
            return temp;

        }

        void input()
        {
            cout<<"Enter x cordinate: ";
            cin>>x;
            cout<<"Enter y cordinate: ";
            cin>>y;
            cout<<"Enter z cordinate: ";
            cin>>z;
        }
        void display()
        {
            cout<<"( "<<x<<" , "<<y<<" , "<<z<<" )"<<endl;
        }
};


int main()
{
    Cordinate c1(1,2,3),c2(4,5,6),c3(7,8,9),c4(11,12,13);
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c1=(c1,c2,c3);
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    return 0;
}