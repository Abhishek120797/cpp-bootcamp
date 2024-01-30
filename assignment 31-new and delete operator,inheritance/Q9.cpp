// Write a C++ program to implement the following class hierarchy:
// Student: id, name
// StudentExam (derived from Student): Marks of 6 subjects
// StudentResult (derived from StudentExam) : percentage
// Define appropriate functions to accept and display details.
// Create 'n' objects of the StudentResult class and display the marklist.

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int std_id;
    string name;

public:
    void inputStudent()
    {
        cout << "Enter Student Roll No    : ";
        cin >> std_id;
        cout << "Enter Student Name       : ";
        fflush(stdin);
        getline(cin, name);
    }
    void displayStudent()
    {
        cout << "Student Roll No          : " << std_id << endl;
        cout << "Student Name             : " << name << endl;
    }
};

class StudentExam : public Student
{
private:
    float mark[6] = {0};

public:
    float getTotalMark()
    {
        float sum = 0;
        for (int i = 0; i < 6; i++)
        {
            sum += mark[i];
        }
        return sum;
    }
    void inputMark()
    {
        inputStudent();
        for (int i = 0; i < 6; i++)
        {
            cout << "Enter mark of subject " << i + 1 << "  : ";
            cin >> mark[i];
        }
    }
    void displayMark()
    {
        displayStudent();
        cout << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << "Mark of subject " << i + 1 << "        : " << mark[i] << endl;
        }
    }
};

class StudentResult : public StudentExam
{
private:
    float percent = 0;

public:
    void calpercent()
    {
        percent = (getTotalMark() * 100) / 600;
    }
    float getPercent()
    {
        return percent;
    }
    void displayPercent()
    {
        cout << "-----------------------------------------" << endl;
        cout << "************Student Marklist************" << endl;
        cout << "-----------------------------------------" << endl;
        displayMark();
        cout << endl;
        calpercent();
        cout << "Total Percentage         : " << getPercent() << endl;
        ;
    }
};

int main()
{
    int studentSize = 0;

    cout << "Enter no of student you want to Enter : ";
    cin >> studentSize;

    StudentResult *s = new StudentResult[studentSize];

    for (int i = 0; i < studentSize; i++)
    {
        s[i].inputMark();
    }
    for (int i = 0; i < studentSize; i++)
    {
        s[i].displayPercent();
    }
    delete[] s;
    return 0;
}