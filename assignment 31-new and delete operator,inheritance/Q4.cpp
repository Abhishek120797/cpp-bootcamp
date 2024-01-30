// Write a C++ program to design a base class Person (name, address,
// phone_no). Derive a class Employee (eno, ename) from Person. Derive a
// class Manager (designation, department name, basic-salary) from
// Employee. Write a menu driven program to:
// a. Accept all details of 'n' managers.
// b. Display manager having highest salary

#include <iostream>
#include <cstring>
using namespace std;

class Person
{
protected:
    char name[50];
    char add[50];
    char p_num[20];

public:
    char *getName() { return name; }
    char *getAdd() { return add; }
    char *getp_num() { return p_num; }
    void inputPerson()
    {
        cout << "Enter Name : ";
        fflush(stdin);
        fgets(name, 50, stdin);
        name[strcspn(name, "\n")] = '\0';

        cout << "Enter Address : ";
        fflush(stdin);
        fgets(add, 50, stdin);
        add[strcspn(add, "\n")] = '\0';

        cout << "Enter Phone no. : ";
        fflush(stdin);
        fgets(p_num, 20, stdin);
        p_num[strcspn(p_num, "\n")] = '\0';
    }
    void displayPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Address : " << add << endl;
        cout << "Phonr No : " << p_num << endl;
    }
};

class Employee : public Person
{
protected:
    int eno;

public:
    int getEmpNo() { return eno; }
    void inputEmp()
    {
        cout << "Enter Employee no : ";
        cin >> eno;

        inputPerson();
    }
    void displayEmp()
    {
        cout << "Employee No : " << eno << endl;
        displayPerson();
    }
};

class Manager : public Employee
{
protected:
    char desig[30];
    char dept_name[30];
    int salary;

public:
    char *getDesignation() { return desig; }
    char *getdepartment() { return dept_name; }
    int getSalary() { return salary; }
    void inputManager()
    {
        inputEmp();

        cout << "Enter Designation : ";
        fflush(stdin);
        fgets(desig, 30, stdin);
        desig[strcspn(desig, "\n")] = '\0';

        cout << "Enter Department name : ";
        fflush(stdin);
        fgets(dept_name, 30, stdin);
        dept_name[strcspn(dept_name, "\n")] = '\0';

        cout << "Enter basic salary : ";
        cin >> salary;
    }
    void displayManager()
    {
        displayEmp();
        cout << "Designation : " << desig << endl;
        cout << "Department : " << dept_name << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    int n;
    int highSlaryIndex;
    int highsalary;

    cout << "How many manager you want to Enter: ";
    cin >> n;
    Manager *m = new Manager[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of manager" << endl;
        cout << "---------------------------" << endl;
        m[i].inputManager();
    }

    highsalary = m[0].getSalary();
    highSlaryIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (m[i].getSalary() > highsalary)
        {
            highsalary = m[i].getSalary();
            highSlaryIndex = i;
        }
    }
    cout << "Manager with Highest salary is : "
         << m[highSlaryIndex].getSalary()
         << "And Manager name is : "
         << m[highSlaryIndex].getName() << endl;
    delete[] m;
    return 0;
}