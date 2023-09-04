#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee
{
public:
    int emp_no;
    string name;

    void addEmployee()
    {
        cout << "Enter Employee No : ";
        cin >> emp_no;
        cout << "Enter your name : ";
        cin.ignore();
        getline(cin, name);

        ofstream file;
        file.open("EmployeeRecord.txt", ios::app);
        file << emp_no << " ";
        file << name << endl;
        file.close();

        cout << "Record Added succesfully" << endl;
    }
    void printAllEmployee()
    {
        Employee temp;
        ifstream file;
        file.open("EmployeeRecord.txt");
        while (file >> temp.emp_no)
        {
            file.ignore();
            getline(file, temp.name);
            temp.displayEmployee();
        }
        file.close();
    }

    void searchEmployee(const string &str)
    {
        Employee temp;
        ifstream file;
        file.open("EmployeeRecord.txt");
        bool found = false;
        while (file >> temp.emp_no)
        {
            file.ignore();
            getline(file, temp.name);

            if (temp.name == str)
            {
                temp.displayEmployee();
                found = true;
                break;
            }
        }
        file.close();
        if (!found)
        {
            cout << "Employee not foumd !" << endl;
        }
    }
    void displayEmployee()
    {
        cout << "Eployee No = " << emp_no << endl;
        cout << "Employee Name = " << name << endl;
        cout << "####################################" << endl;
    }
};

int displayMenu()
{
    int choice;
    cout << "1.Add Employee" << endl;
    cout << "2.Display Employee" << endl;
    cout << "3.Search Employee" << endl;
    cout << "4.Quit" << endl;
    cout << "Enter your choice : " << endl;
    cin >> choice;
    return choice;
}

int main()
{
    while (true)
    {
        switch (displayMenu())
        {
        case 1:
        {
            Employee E;
            E.addEmployee();
            break;
        }
        case 2:
        {
            Employee E;
            E.printAllEmployee();
            break;
        }
        case 3:
        {
            Employee E;
            string emp_name;
            cout << "Enter your Employee name : ";
            cin.ignore();
            getline(cin, emp_name);
            E.searchEmployee(emp_name);
            break;
        }
        case 4:
            return 0;
        default:
            cout << "Enter valid choice : ";
        }
    }
    return 0;
}