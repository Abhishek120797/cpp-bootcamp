// Create a class Marks that have one member variable marks and one member
// function that will print marks. We know that we can access member functions using
// (.) dot operator. Now you need to overload (->) arrow operator to access that
// function.

#include <iostream>
using namespace std;

class Marks
{
private:
    int mark;

public:
    Marks() { mark = 0; }
    Marks(int mark) { this->mark = mark; }
    void setMark(int mark) { this->mark = mark; }
    int getMark() { return mark; }
    void print() { cout << "mark = " << mark << endl; }
    Marks *operator->()
    {
        return this;
    }
};

int main()
{
    Marks m1(50);
    m1.print();
    m1->print();
    return 0;
}