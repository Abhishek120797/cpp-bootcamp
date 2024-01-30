// Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.

#include <iostream>
using namespace std;

class ReverseNumber
{
private:
    int actual_num;
    int reverse_num = 0;

public:
    void set_actual_num(int n) { actual_num = n; }
    int get_actual_num() { return actual_num; }
    int get_reverse_num() { return reverse_num; }
    void reverse_number()
    {
        int temp = actual_num;
        while (temp != 0)
        {
            reverse_num = reverse_num * 10 + temp % 10;
            temp = temp / 10;
        }
    }
};

int main()
{
    ReverseNumber r1;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    r1.set_actual_num(num);
    r1.reverse_number();
    cout << "Reverse of number " << r1.get_actual_num() << " is "
         << r1.get_reverse_num();

    return 0;
}