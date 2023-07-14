#include<iostream>
using namespace std;

class Distance
{
    private:
        float feet;
        float inches;
    public:
        Distance(){ feet=0; inches=0; }
        Distance(float feet,float inches)
        {
            this->feet=feet;
            this->inches=inches;
        }

        void operator()(float a,float b,float c)
        {
            feet=a+c+5;
            inches=a+b+15;
        }

        void display() 
        {
        cout << "Feet: " << feet << " Inches: " << inches <<endl;
        }
};

int main()
{
    Distance d1;
    d1(2,3,5);
    d1.display();
    Distance d2;
    d2(4,5,6);
    d2.display();
    return 0;
}