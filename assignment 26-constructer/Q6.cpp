#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        int roll_no,age,std;
        char name[30];
    public:
        Student()
        {
            cout<<"Enter roll no : ";
            cin>>roll_no;
            cout<<"Enter name : ";
            cin>>name;
            cout<<"Enter age : ";
            cin>>age;
            cout<<"Enter standard : ";
            cin>>std;
        }
        Student(int x,char n[],int y,int z)
        {
            roll_no=x;
            strcpy(name,n);
            age=y;
            std=z;
        }
        void set_rollno(int x)
        {
            roll_no=x;
        }
        void set_name(char n[])
        {
            strcpy(name,n);
        }
        void set_age(int x)
        {
            age=x;
        }
        void set_std(int x)
        {
            std=x;
        }
        void get_rollno()
        {
            cout<<roll_no;
        }
        void get_name()
        {
            cout<<name;
        }
        void get_age()
        {
            cout<<age;
        }
        void get_std()
        {
            cout<<std;
        }
        void get_student()
        {
            get_rollno();cout<<" ";
            get_name();cout<<" ";
            get_age();cout<<" ";
            get_std();
            cout<<endl;
        }
};

int main()
{
    Student s1,s2(2,"Abhishek",15,10);
    s1.get_student();
    s2.get_student();
    return 0;
}