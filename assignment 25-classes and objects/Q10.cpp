#include<iostream>
using namespace std;
class Area
{
    private:
    float length,breath,rect_A;
    float redius,circle_A;
    float side,square_A;
    public:
    void set_side()
    {
        cout<<"Enter length of side of square :";
        cin>>side;
    }
    void set_redius()
    {
        cout<<"Enter redius of circle :";
        cin>>redius;
    }
    void set_length()
    {
        cout<<"Enter length of rectangle : ";
        cin>>length;
    }
    void set_breath()
    {
        cout<<"Enter breath of rectangle : ";
        cin>>breath;
    }
    float get_side()
    {
        return side;
    }
    float get_redius()
    {
        return redius;
    }
    float get_length()
    {
        return length;
    }
    float get_breath()
    {
        return breath;
    }
    float get_area_square()
    {
        return square_A;
    }
    float get_area_rectangle()
    {
        return rect_A;
    }
    float get_area_circle()
    {
        return circle_A;
    }
    void square_area()
    {
        square_A=4*side;
    }
    void rectangle_area()
    {
        rect_A=length*breath;
    }
    void circle_area()
    {
        circle_A=3.14*redius*redius;
    }
};
int main()
{
    Area C,S,R;
    C.set_redius();
    C.circle_area();
    S.set_side();
    S.square_area();
    R.set_length();
    R.set_breath();
    R.rectangle_area();
    cout<<"Area of circle is "<<C.get_area_circle()<<" whose redius is "
    <<C.get_redius()<<endl;
    cout<<"Are of square is "<<S.get_area_square()<<" whose side length is "
    <<S.get_side()<<endl;
    cout<<"area of rectangle is "<<R.get_area_rectangle()<<" whose length is "
    <<R.get_length()<<" and breath is "<<R.get_breath();
    return 0;
}