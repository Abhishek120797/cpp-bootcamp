#include<iostream>
using namespace std;

class Rectangle
{
    private:
    float length;
    float breath;
    float area;
    public:
    void setlength()
    {
        cout<<"Enter length : ";
        cin>>length;
    }
    void setbreath()
    {
        cout<<"Enter breath : ";
        cin>>breath;
    }
    float get_length()
    {
        return length;
    }
    float get_breath()
    {
        return breath;
    }
    float get_area()
    {
        return area;
    }
    void farea()
    {
        area=length*breath;
    }
};
int main()
{
    Rectangle rect1;
    rect1.setlength();
    rect1.setbreath();
    rect1.farea();
    cout<<"area of rectangle is "<<rect1.get_area()<<" whose length is "
    <<rect1.get_length()<<" and breath is "<<rect1.get_breath();
    return 0;
}