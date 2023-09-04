#include <iostream>
using namespace std;

float max(float, float);
int max(int, int);

int main()
{
    int a, b;
    float c, d;
    cout << "Enter two float number: ";
    cin >> a >> b;
    cout << "max is " << max(a, b) << endl;
    cout << "Enter two int number ";
    cin >> c >> d;
    cout << "max is " << max(c, d) << endl;
    return 0;
}

float max(float num1, float num2)
{
    return num1 >= num2 ? num1 : num2;
}

int max(int num1, int num2)
{
    return num1 >= num2 ? num1 : num2;
}
