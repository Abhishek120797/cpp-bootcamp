#include<iostream>
using namespace std;

class Circle
{
    private:
    float redius;
    float area;
    public:
    void set()
    {
        cout<<"Enter redius : ";
        cin>>redius;
    }
    float get_redius()
    {
        return redius;
    }
    float get_area()
    {
        return area;
    }
    void farea()
    {
        area=3.14*redius*redius;
    }
};

int main()
{
    Circle c1;
    c1.set();
    c1.farea();
    cout<<"Area of circle is "<<c1.get_area()<<" whose redius is "<<c1.get_redius();
    return 0;
}