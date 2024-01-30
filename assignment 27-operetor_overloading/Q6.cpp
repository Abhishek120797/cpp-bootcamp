// Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.

#include <iostream>
#include <cstring>
using namespace std;

class Cstring
{
private:
    char *a;
    int size;

public:
    Cstring()
    {
        a = (char *)malloc(sizeof(char));
        size = 1;
    }
    Cstring(const char *str)
    {
        size = strlen(str);
        free(a);
        a = (char *)malloc(size + 1);
        strcpy(a, str);
    }
    Cstring(Cstring &str)
    {
        size = str.size + 1;
        free(a);
        a = (char *)malloc(size + 1);
        strcpy(a, str.a);
    }
    Cstring &operator=(const Cstring &str)
    {
        size = str.size;
        free(a);
        a = (char *)malloc(size + 1);
        strcpy(a, str.a);
        return *this;
    }
    Cstring operator+(const Cstring);

    bool operator==(const Cstring);

    void display()
    {
        cout << a << endl;
    }
    ~Cstring() { free(a); }
};

Cstring Cstring::operator+(const Cstring str)
{
    Cstring temp;
    temp.size = size + str.size;
    free(temp.a);
    temp.a = (char *)malloc(temp.size + 1);
    strcpy(temp.a, a);
    strcpy(&temp.a[size], str.a);
    return temp;
}

bool Cstring::operator==(const Cstring str)
{
    if (size != str.size)
        return 0;
    for (int i = 0; a[i]; i++)
    {
        if (a[i] != str.a[i])
            return 0;
    }
    return 1;
}
int main()
{
    Cstring s1, s2("Abhishek");
    Cstring s3("jaiswal");
    s2.display();
    s1 = s2;
    s1.display();
    if (s3 == s2)
        cout << "equal";
    else
        cout << "not equal";
    (s1 + s3).display();
    return 0;
}