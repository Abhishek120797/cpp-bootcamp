#include<iostream>
using namespace std;

class Numbers
{
    int k;
    int y;
    int z;

    public:
        Numbers(){ k=0; y=0; z=0;}
        Numbers(int a,int b,int c){ k=a; y=b; z=c; }
        void setNum(int a,int b,int c){ k=a; y=b; z=c; }
        void Display(){ cout<<k<<" "<<y<<" "<<z; }
        Numbers operator-()
        {
            Numbers temp;
            temp.k=-k;
            temp.y=-y;
            temp.z=-z;
            return temp;
        }


};

int main()
{
    Numbers n1;
    n1.setNum(1,2,3);
    n1.Display();
    n1=-n1;
    n1.Display();
    return 0;
}   