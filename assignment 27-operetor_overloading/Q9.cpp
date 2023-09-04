#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
    char *a;
    int size;

public:
    MyString()
    {
        a = (char *)malloc(sizeof(char));
        size = 1;
    }

    MyString(const char *str)
    {
        size = strlen(str);
        a = (char *)malloc(size + 1);
        strcpy(a, str);
    }

    MyString(MyString &s)
    {
        size = (strlen(s.a));
        a = (char *)malloc(size + 1);
        strcpy(a, s.a);
    }

    MyString operator=(const MyString &s)
    {
        if (a == s.a)
        {
            free(a);
            return *this;
        }

        size = strlen(s.a);
        a = (char *)malloc(size + 1);
        strcpy(a, s.a);
        return *this;
    }

    void change(const char *str)
    {
        size = strlen(str);
        free(a);
        a = (char *)malloc(size + 1);
        strcpy(a, str);
    }

    void display()
    {
        cout << a << endl;
    }
    void operator!()
    {
        for (int i = 0; a[i]; i++)
        {
            if (a[i] >= 'a' && a[i] <= 'z')
                a[i] = a[i] - 32;
            else if (a[i] >= 'A' && a[i] <= 'Z')
                a[i] = a[i] + 32;
        }
    }
};

int main()
{
    MyString s1("Abhishek Jaiswal");
    s1.display();
    !s1;
    s1.display();
    return 0;
}