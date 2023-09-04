#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;
struct Employee
{
    int id;
    string name;
    string address;
    string dept;
    string phone_no;
    int age;
};

int main()
{
    Employee emp;

    ifstream file;
    file.open("employeeData.txt");
    ofstream adminfile;
    adminfile.open("admin_data.txt", ios::app);
    ofstream salesfile;
    salesfile.open("sales_data.txt", ios::app);
    ofstream prodfile;
    prodfile.open("prod_data.txt", ios::app);
    ofstream itfile;
    itfile.open("it_data.txt", ios::app);

    string line;
    while (getline(file, line))
    {
        stringstream ss(line);
        ss >> emp.id;
        ss.ignore();
        ss >> ws;
        getline(ss, emp.name, ',');
        ss >> ws;
        getline(ss, emp.address, ',');
        ss >> ws;
        getline(ss, emp.dept, ',');
        ss >> ws;
        getline(ss, emp.phone_no, ',');
        ss >> emp.age;

        if (emp.dept == "Admin")
        {
            adminfile << emp.id << ", " << emp.name << ", " << emp.address << ", " << emp.dept << ", " << emp.phone_no << ", " << emp.age << endl;
        }
        if (emp.dept == "Sales")
        {
            salesfile << emp.id << ", " << emp.name << ", " << emp.address << ", " << emp.dept << ", " << emp.phone_no << ", " << emp.age << endl;
        }
        if (emp.dept == "Production")
        {
            prodfile << emp.id << ", " << emp.name << ", " << emp.address << ", " << emp.dept << ", " << emp.phone_no << ", " << emp.age << endl;
        }
        if (emp.dept == "IT")
        {
            itfile << emp.id << ", " << emp.name << ", " << emp.address << ", " << emp.dept << ", " << emp.phone_no << ", " << emp.age << endl;
        }
    }
    file.close();
    adminfile.close();
    salesfile.close();
    prodfile.close();
    itfile.close();
    return 0;
}