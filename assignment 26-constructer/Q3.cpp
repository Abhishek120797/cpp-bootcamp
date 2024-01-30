// Define a class Cube and calculate Volume of Cube and initialise it using constructor

#include <iostream>
using namespace std;

class Cube
{
private:
    float side;
    float volume;

public:
    Cube(){};
    Cube(float l)
    {
        side = l;
    }
    void setSide(float l) { side = l; }
    float getSide() { return side; }
    float getVolume() { return volume; }
    void cal_volume() { volume = side * side * side; }
};

int main()
{
    Cube c1(5), c2;
    c2.setSide(6);
    c1.cal_volume();
    c2.cal_volume();
    cout << "vlume of cube is " << c1.getVolume() << " whose side is " << c1.getSide() << endl;
    cout << "vlume of cube is " << c2.getVolume() << " whose side is " << c2.getSide() << endl;

    return 0;
}