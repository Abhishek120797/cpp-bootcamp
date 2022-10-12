#include<iostream>
using namespace std;
class Counter
{
    private:
        static int count;
    public:
        Counter()
        {
            count++;
        }
    static int getcount();

};
int Counter::count;
int Counter::getcount()
{
    return count;
}
 int main()
 {
    Counter c1,c2,c3;
    cout<<"number of object created of class counter is"<<Counter::getcount();
    return 0;
 }