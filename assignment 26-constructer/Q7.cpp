#include<iostream>
using namespace std;
class Box
{
    private:
        float length,breath,height,volume;
    public:
        Box()
        {
            cout<<"Enter length : ";
            cin>>length;
            cout<<"Enter breath : ";
            cin>>breath;
            cout<<"Enter height : ";
            cin>>height;
        }
        Box(float x,float y,float z)
        {
            length=x;
            breath=y;
            height=z;
        }
        void setlength(float x){ length=x; }
        void setbreath(float x){ breath=x; }
        void setheight(float x){ height=x; }
        float getlength(){ return length; }
        float getbreath(){ return breath; }
        float getheight(){ return height; }
        float getvolume(){ return volume; }
        void findvolume(){ volume=length*breath*height; }
};

int main()
{
    Box b1,b2(10,20,15);
    b1.findvolume();
    b2.findvolume();
    cout<<"volume of box 1 is "<<b1.getvolume()<<" whose length breath and height is "
    <<b1.getlength()<<" "<<b1.getbreath()<<" "<<b1.getheight()<<endl;
    cout<<"volume of box 1 is "<<b2.getvolume()<<" whose length breath and height is "
    <<b2.getlength()<<" "<<b2.getbreath()<<" "<<b2.getheight();
    return 0;
}