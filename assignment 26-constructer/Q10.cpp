//  Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.

#include <iostream>
using namespace std;

class StaticCount
{
private:
    static int count;

public:
    static void increment() { count++; }
    static int get_count() { return count; }
};

int StaticCount::count = 0;
int main()
{
    StaticCount::increment();
    StaticCount::increment();
    StaticCount::increment();
    cout << "count = " << StaticCount::get_count();
    return 0;
}