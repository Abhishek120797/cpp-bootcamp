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
    Matrix operator+(Matrix m)
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }
        return temp;
    }
};

int main()
{
    Matrix m1, m2, m3;
    cout << "Enter first matrix: " << endl;
    m1.input();
    cout << "Enter second matrix: " << endl;
    m2.input();
    m3 = m1 + m2;
    cout << "First matrix: " << endl;
    m1.display();
    cout << "second matrix: " << endl;
    m2.display();
    cout << "Adition of two matrix: " << endl;
    m3.display();
    return 0;
}