#include <iostream>
using namespace std;

class Addition
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    float add(float a, float b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    template <typename T>
    T add(T a, T b, T c)
    {
        return a + b + c;
    }
};

int main()
{
    Addition addition;

    int result1 = addition.add(5, 10);
    cout << "Result 1: " << result1 << endl;

    float result2 = addition.add(3.5f, 2.7f);
    cout << "Result 2: " << result2 << endl;

    double result3 = addition.add(2.5, 4.8);
    cout << "Result 3: " << result3 << endl;

    int result4 = addition.add(1, 2, 3);
    cout << "Result 4: " << result4 << endl;

    return 0;
}
