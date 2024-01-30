// Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.

#include <iostream>
using namespace std;

class Square
{
private:
    float num;
    float square;
    static int count;

public:
    void set_num(float n) { num = n; }
    float get_num() { return num; }
    float get_square() { return square; }
    static int get_count() { return count; }
    void cal_square()
    {
        square = num * num;
        count++;
    }
};

int Square::count;

int main()
{
    float num;

    Square s1;
    cout << "Enter a number: ";
    cin >> num;
    s1.set_num(num);
    s1.cal_square();
    cout << "square of " << s1.get_num() << " is " << s1.get_square() << endl;

    Square s2;
    cout << "Enter a number: ";
    cin >> num;
    s2.set_num(num);
    s2.cal_square();
    cout << "square of " << s2.get_num() << " is " << s2.get_square() << endl;

    Square s3;
    cout << "Enter a number: ";
    cin >> num;
    s3.set_num(num);
    s3.cal_square();
    cout << "square of " << s3.get_num() << " is " << s3.get_square() << endl;

    cout << "square function called " << Square::get_count() << " times";

    return 0;
}