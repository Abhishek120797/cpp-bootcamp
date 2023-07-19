#include<iostream>
#include<string>

using namespace std;
#define MAXSIZE 100

static int EmpSize=0,FTsize=0,PTsize=0;

class Employee
{
    private:
        int Emp_code;
        string name;
    public:
        int getEmpCode(){ return Emp_code; }
        void inputEmp()
        {
            cout<<"Employee No :";
            cin>>Emp_code;
            fflush(stdin);
            cout<<"Employee Name : ";
            getline(cin,name);
        }
        void displayEmp()
        {
            cout<<"---------------------------------------\n";
            cout<<"Employee Number : "<<Emp_code<<endl;
            cout<<"Employee Name : "<<name<<endl;
        }
};

class Fulltime:public Employee
{
    private:
        int no_of_days;
        int salary=0;
        static const int daily_rate;
        static const string status;
    public:
        void inputRecord()
        {
            inputEmp();
            cout<<"number of days : ";
            cin>>no_of_days;
            salary=no_of_days*daily_rate;
        }
        void displayRecord()
        {

            displayEmp();
            cout<<"Salary : "<<salary<<endl;
            cout<<"Status : "<<status<<endl;
            cout<<"---------------------------------------\n";
        }
};
const string Fulltime::status="fulltime";
const int Fulltime::daily_rate=1000;

class Parttime:public Employee
{
    private:
        int no_of_hour;
        int salary=0;
        static const int hourly_rate;
        static const string status;
    public:
        void inputRecord()
        {
            inputEmp();
            cout<<"number of hours : ";
            cin>>no_of_hour;
            salary=no_of_hour*hourly_rate;
        }
        void displayRecord()
        {
            displayEmp();
            cout<<"Salary : "<<salary<<endl;
            cout<<"Status : "<<status<<endl;
            cout<<"---------------------------------------\n";
        }
};
const int Parttime::hourly_rate=200;
const string Parttime::status="parttime";

int displayMenu()
{
    int choice;
    cout<<"1.Enter Record"<<endl;
    cout<<"2.Display Record"<<endl;
    cout<<"3.Search Record"<<endl;
    cout<<"4.Quit"<<endl;
    cout<<"\nEnter your choice : ";
    cin>>choice;
    return choice;
}

void inputEmployeeRecord(Fulltime *f,Parttime *p)
{
    for(int i=0;i<EmpSize;i++)
    {   
        int EmpType;
        do
        {   
            cout<<"1.FullTime"<<endl;
            cout<<"2.PartTime"<<endl;
            cout<<"Enter Employee type : ";
            cin>>EmpType;
            if(EmpType!=1 && EmpType!=2)
            {
                cout<<"Invalid input plese enter <1> or <2>"<<endl;
            }
        }while (EmpType!=1 && EmpType!=2);

        if(EmpType==1)
        {
            f[FTsize].inputRecord();
            FTsize++;
        }
        else if(EmpType==2)
        {
            p[PTsize].inputRecord();
            PTsize++;
        }
    } 
}

void displayEmployeeDetails(Fulltime *f,Parttime *p)
{
    for(int i=0;i<FTsize;i++)
    {
        f[i].displayRecord();
    }
    for(int i=0;i<PTsize;i++)
    {
        p[i].displayRecord();
    }
}

void SearchEmployeeDetail(Fulltime *f,Parttime *p)
{
    int emp_code;
    bool found=false;

    cout<<"Enter Employee number : ";
    cin>>emp_code;

    for(int i=0;i<FTsize;i++)
    {
        if(emp_code==f[i].getEmpCode())
        {
            f[i].displayRecord();
            found=true;
            break;
        }
    }
    if(!found)
    {
        for(int i=0;i<PTsize;i++)
        {
            if(emp_code==p[i].getEmpCode())
            {
                p[i].displayRecord();
                found=true;
                break;
            }
        }
    }
    if(!found)
    {
        cout<<"Employee not found !"<<endl;
    }
}


int main()
{   
    Fulltime ft[MAXSIZE];
    Parttime pt[MAXSIZE];

    while(true)
    {
        switch(displayMenu())
        {
            case 1:
                if(FTsize+PTsize>=MAXSIZE)
                    cout<<"Maximum number of Employee reached"<<endl;
                else
                {
                    cout<<"How many Employee record you want to Enter : ";
                    cin>>EmpSize;
                    inputEmployeeRecord(ft,pt);
                }
                break;
            case 2:
                displayEmployeeDetails(ft,pt);
                break;
            case 3:
                SearchEmployeeDetail(ft,pt);
                break;
            case 4:
                return 0;
            default:
                cout<<"Invalid choice please enter "<<endl;
        }
        cout<<"---------------------------------------\n";
    }   
    return 0;
}