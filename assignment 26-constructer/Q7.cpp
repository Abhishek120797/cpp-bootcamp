#include <iostream>
using namespace std;

class Box
{
private:
    float length;
    float breath;
    float height;
    float volume;

public:
    Box()
    {
        length = 0;
        breath = 0;
        height = 0;
    }
    Box(float l, float b, float h)
    {
        length = l;
        breath = b;
        height = h;
    }
    void set_box(float l, float b, float h)
    {
        length = l;
        breath = b;
        height = h;
    }
    void set_length(float l) { length = l; }
    void set_height(float h) { height = h; }
    void set_breath(float b) { breath = b; }
    float get_volume() { return volume; }
    float get_length() { return length; }
    float get_breath() { return breath; }
    float get_height() { return height; }
    void cal_volume()
    {
        volume = length * breath * height;
    }
};

int main()
{
    Box b1, b2, b3(5, 6, 3);
    b2.set_box(8, 9, 5);
    b1.cal_volume();
    b2.cal_volume();
    b3.cal_volume();
    cout << "volume of b1 box is " << b1.get_volume()
         << " whose lenght=" << b1.get_length() << " breath=" << b1.get_breath()
         << " height=" << b1.get_height() << endl;
    cout << "volume of b2 box is " << b2.get_volume()
         << " whose lenght=" << b2.get_length() << " breath=" << b2.get_breath()
         << " height=" << b2.get_height() << endl;
    cout << "volume of b3 box is " << b3.get_volume()
         << " whose lenght=" << b3.get_length() << " breath=" << b3.get_breath()
         << " height=" << b3.get_height() << endl;

    return 0;
}