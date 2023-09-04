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