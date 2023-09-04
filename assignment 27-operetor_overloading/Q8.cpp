#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[3][3];

public:
    Matrix()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = 0;
            }
        }
    }
    void input()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << "  ";
            }
            cout << endl;
        }
    }
    Matrix &operator-()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = -a[i][j];
            }
        }
        return *this;
    }
};

int main()
{
    Matrix m1;
    m1.display();
    cout << "Enter matrix element (3*3):" << endl;
    m1.input();
    cout << "Matrix is:" << endl;
    m1.display();
    m1 = -m1;
    cout << "After (-)negatio matrix is:" << endl;
    m1.display();
    return 0;
}