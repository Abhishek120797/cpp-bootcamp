#include <iostream>
using namespace std;

class Array
{
    int *a;
    int size;

public:
    Array()
    {
        a = (int *)malloc(sizeof(int));
        size = 1;
    }
    Array(int size)
    {
        free(a);
        this->size = size;
        a = (int *)malloc(sizeof(int) * size);
    }
    void setArray(int index, int n)
    {
        if (index >= size)
        {
            cout << "Array index out of bound Exception";
            exit(0);
        }
        a[index] = n;
    }
    void display(int index)
    {
        if (index >= size)
        {
            cout << "Array index out of bound Exception";
            exit(0);
        }
        cout << a[index] << endl;
    }
    int operator[](int index)
    {
        if (index >= size)
        {
            cout << "Array index out of bound Exception";
            exit(0);
        }
        return a[index];
    }
};

int main()
{
    Array b(50);
    b.setArray(45, 5);
    b.display(45);
    b.display(50);
    cout << b[45];
    return 0;
}