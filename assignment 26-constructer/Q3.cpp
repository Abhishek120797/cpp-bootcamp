#include<iostream>
using namespace std;
class Cube
{
    private:
        float side,volume;
    public:
        Cube()
        {
            cout<<"Enter length of side of cube : ";
            cin>>side;
            findvolume();
        }
        Cube(float len)
        {
            side=len;
            findvolume();
        }
        float get_side()
        {
            return side;
        }
        void findvolume()
        {
            volume=side*side*side;
        }
        float get_volume()
        {
            return volume;
        }

};

int main()
{
    Cube c1(5);
    Cube c2;
    cout<<"volume of cube is "<<c1.get_volume()<<" whose side length is "
    <<c1.get_side()<<endl;
    cout<<"volume of cube is "<<c2.get_volume()<<" whose side length is "
    <<c2.get_side();
    return 0;
}