#include<iostream>
using namespace std;

class Marks
{
    private:
        int mark;
    public:
        Marks(){ mark=0; }
        Marks(int mark){ this->mark=mark; }
        void setMark(int mark){ this->mark=mark; }
        int getMark(){ return mark; }
        void print(){ cout<<"mark = "<<mark<<endl; }
        Marks* operator->()
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