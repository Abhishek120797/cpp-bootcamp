// Define a class Circle and define an instance member function to find the area of the
// circle.

#include <iostream>
using namespace std;

class Circle
{
private:
    float redius;
    float area;

public:
    void set_redius(float r) { redius = r; }
    void cal_area() { area = redius * redius * 3.14; }
    float get_redius() { return redius; }
    float get_area() { return area; }
};

int main()
{
    Circle c1;
    float r;
    cout << "Enter redius of circle: ";
    cin >> r;
    c1.set_redius(r);
    c1.cal_area();
    cout << "Area of circle is " << c1.get_area() << " whose redius is "
         << c1.get_redius();

    return 0;
}