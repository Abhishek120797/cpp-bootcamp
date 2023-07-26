#include<iostream>
using namespace std;

template<class T>
class Stack
{
    private:
        int top;
        T st[100];
    public:
        Stack(){ top=-1; }
        void push(T i){ st[++top]=i; }
        T pop(){ return st[top--]; }
};

int main()
{
    Stack<int>int_stack;
    Stack<float>float_stack;

    int_stack.push(1);
    int_stack.push(2);
    int_stack.push(3);

    float_stack.push(1.5);
    float_stack.push(2.5);
    float_stack.push(3.3);

    cout<<int_stack.pop()<<endl;
    cout<<int_stack.pop()<<endl;
    cout<<int_stack.pop()<<endl;

    cout<<float_stack.pop()<<endl;
    cout<<float_stack.pop()<<endl;
    cout<<float_stack.pop()<<endl;

    return 0;
}