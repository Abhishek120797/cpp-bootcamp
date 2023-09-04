#include <iostream>
using namespace std;

class Factorial
{
private:
    int fact;
    int num;

public:
    void set_n(int n) { num = n; }
    int get_n() { return num; }
    int get_fact() { return fact; }
    void cal_fact()
    {
        fact = 1;
        for (int i = num; i > 0; i--)
            fact = fact * i;
    }
};

int main()
{
    int num;
    Factorial f1;
    cout << "Enter a number: ";
    cin >> num;
    f1.set_n(num);
    f1.cal_fact();
    cout << "factorial of " << f1.get_n() << " is " << f1.get_fact();
    return 0;
}