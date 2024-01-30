// Define a class Person with instance members name and age. Also define member
// functions setName(), setAge(), getName(), getAge(). Now define class Employee by
// inheriting Person class. In the Employee class define empid and salary as instance
// members. Also define setEmpid, setSalary, getEmpid, getSalary

#include <iostream>
#include <cstring>
using namespace std;

class Person
{
protected:
    char name[50];
    int age;

public:
    void setName(const char *str) { strcpy(name, str); }
    void setAge(int a) { age = a; }
    char *getName() { return name; }
    int getAge() { return age; }
};

class Employee : public Person
{
private:
    int empid;
    int salary;

public:
    void setEmpId(int i) { empid = i; }
    void setSalary(int s) { salary = s; }
    int getEmpId() { return empid; }
    int getSalary() { return salary; }
};

int main()
{
    Employee emp;

    emp.setName("Abhishek jaiswal");
    emp.setAge(25);
    emp.setEmpId(121);
    emp.setSalary(10000);

    cout << "Employee Information" << endl;
    cout << "Name : " << emp.getName() << endl;
    cout << "Age : " << emp.getAge() << endl;
    cout << "Employee Id : " << emp.getEmpId() << endl;
    cout << "Salary : $" << emp.getSalary() << endl;

    return 0;
}