#include<iostream>
using namespace std;
class StaticCount
{
    private:
        static int count;
    public:
        void increment(){ count++; }
        static int get_count();
};
int StaticCount::count;
int StaticCount::get_count(){ return count; }
int main()
{
    StaticCount c1,c2,c3;
    c1.increment();
    c2.increment();
    c3.increment();
    cout<<"value of count variable is : "<<StaticCount::get_count(); 
    return 0;
}