#include <iostream>
#include <string>

using namespace std;

class Worker
{
    protected:
        int code;
        string name;
        float salary;
    public:
        void inputWorker()
        {
            cout<<"Enter code       : ";
            cin>>code;
            cout<<"Enter Name       : ";
            fflush(stdin);
            getline(cin,name);
            cout<<"Enter salary     : ";
            cin>>salary;
        }
        void displayWorker()
        {
            cout << "Code           : " << code << endl;
            cout << "Name           : " << name << endl;
            cout << "Salary         : " << salary << endl;
        }
};
class Officer
{
    protected:
        float DA;
        float HRA;
    public:
        void inputOfficer()
        {
            cout<<"Enter DA         : ";
            cin>>DA;
            cout<<"Enter HRA        : ";
            cin>>HRA;
        } 
        void displayOfficer() 
        {
            cout << "DA             : " << DA << endl;
            cout << "HRA            : " << HRA << endl;
        }
};
class Manager:public Worker,public Officer
{
    private:
        float TA;
        float gross_salary;
    public:
        void inputManager()
        {
            inputWorker();
            inputOfficer();
        }
        void calTA()
        {
            TA=(salary*10)/100;
        }
        void calgrossSalary()
        {
            calTA();
            gross_salary=TA+DA+HRA+salary;
        }
        void displayManager() 
        {
            calgrossSalary();

            displayWorker();
            displayOfficer();
            cout << "TA             : " << TA << endl;
            cout << "Gross Salary   : " << gross_salary << endl;
        }
};

int main()
{
    int managerCount;
    cout<<"Enter manager count : ";
    cin>>managerCount;
    Manager *m=new Manager[managerCount];
    for(int i=0;i<managerCount;i++)
    {
        cout<<"Enter worker information for "<<i+1<<endl;
        m[i].inputManager();
    }
    for(int i=0;i<managerCount;i++)
    {
        cout<<"----------------------------------"<<endl;
        cout<<"Manager "<<i+1<<" Information"<<endl;
        cout<<"----------------------------------"<<endl;
        m[i].displayManager();
    }
    delete []m;

    return 0;
}