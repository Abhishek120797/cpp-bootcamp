#include <iostream>
using namespace std;

class Counter
{
private:
    static int count;

public:
    Counter() { count++; }
    static int getCount();
};
int Counter::count;
int Counter::getCount() { return count; }
int main()
{
    Counter c1, c2, c3;
    cout << Counter::getCount();
    return 0;
}