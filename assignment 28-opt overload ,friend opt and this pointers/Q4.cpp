//  Create a student class and overload new and delete operators as a member function
// of the class.

#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
    char name[50];
    int age;
    int rollNo;

public:
    Student() {}
    Student(const char *str, int a, int r)
    {
        strcpy(name, str);
        age = a;
        rollNo = r;
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Roll No = " << rollNo << endl;
    }
    void *operator new(size_t size)
    {
        cout << "new operator called" << endl;
        return (void *)malloc(size);
    }
    void operator delete(void *ptr)
    {
        cout << "delete operator called" << endl;
        free(ptr);
    }
};

int main()
{
    Student *p = new Student("Abhishek", 18, 1);
    p->display();
    delete p;
    return 0;
}