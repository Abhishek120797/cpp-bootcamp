#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    int age;

public:
    Student()
    {
        cout << "Enter roll no: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }
    void setRollNo(int n) { rollNo = n; }
    void setAge(int a) { age = a; }
    void setName(string s) { name = s; }
    void setStudent(int n, string s, int a)
    {
        rollNo = n;
        name = s;
        age = a;
    }
    int getRollNo() { return rollNo; }
    int getAge() { return age; }
    string getName() { return name; }
    void displayStudent()
    {
        cout << rollNo << " " << name << " " << age << endl;
    }
};

int main()
{
    Student s1;
    s1.displayStudent();
    return 0;
}