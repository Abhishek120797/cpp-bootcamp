// Write a C++ program to calculate the percentage of a student using multi-level
// inheritance. Accept the marks of three subjects in base class. A class will be derived
// from the above mentioned class which includes a function to find the total marks
// obtained and another class derived from this class which calculates and displays the
// percentage of students

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Mark
{
protected:
    float math;
    float phy;
    float chem;

public:
    void inputMark()
    {
        cout << "Enter marks of Mathematics : ";
        cin >> math;
        cout << "Enter marks of Physics : ";
        cin >> phy;
        cout << "Enter marks of chemestry : ";
        cin >> chem;
    }
    void displaymark()
    {
        cout << "Math = " << math << endl;
        cout << "physics = " << phy << endl;
        cout << "chamestry = " << chem << endl;
    }
};

class TotalMark : public Mark
{
protected:
    float total;

public:
    void caltotal()
    {
        total = math + phy + chem;
    }
    void displayToatl()
    {
        caltotal();
        cout << "Total Marks " << total << " / 300" << endl;
    }
};

class Percent : public TotalMark
{
protected:
    float percent;

public:
    void displayParcent()
    {
        caltotal();
        percent = total * 100 / 300;
        cout << "Student got " << fixed << setprecision(2) << percent << " %";
    }
};

class Student : public Percent
{
private:
    char name[50];
    int age;
    int rollNo;

public:
    void setName(const char *str) { strcpy(name, str); }
    void setAge(int a) { age = a; }
    void setRollNo(int n) { rollNo = n; }
    void inputStudentDetails()
    {
        cout << "Enter name : ";
        fgets(name, 50, stdin);
        name[strcspn(name, "\n")] = '\0';
        cout << "Enter Age : ";
        cin >> age;
        cout << "Enter Roll No : ";
        cin >> rollNo;
        inputMark();
    }
    void displayStudent()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll No : " << rollNo << endl;
        displaymark();
        displayToatl();
        displayParcent();
    }
};

int main()
{
    Student s;
    s.inputStudentDetails();
    s.displayStudent();
    return 0;
}