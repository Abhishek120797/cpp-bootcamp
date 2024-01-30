// Write a C++ program to create a file which has information Name, Account number,
// Balance and perform following operations:
// a. Add record
// b. Display content of file
// c. Display name of person having balance > 10,000

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Account
{
public:
    int account_no;
    string name;
    float balance;

    void addAccount()
    {
        cout << "Enter Account No : ";
        cin >> account_no;
        cout << "Enter your name : ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter balance : ";
        cin >> balance;

        ofstream file;
        file.open("AccountRecord.txt", ios::app);
        file << account_no << ", ";
        file << name << ", ";
        file << balance << endl;
        file.close();

        cout << "Record Added succesfully" << endl;
    }
    void printAllAccount()
    {
        Account temp;
        ifstream file;
        file.open("AccountRecord.txt");
        while (file >> temp.account_no)
        {
            file.ignore();
            getline(file, temp.name, ',');
            file >> temp.balance;
            temp.displayAccount();
        }
        file.close();
    }

    void searchAccount(float b)
    {
        Account temp;
        ifstream file;
        file.open("AccountRecord.txt");
        bool found = false;
        while (file >> temp.account_no)
        {
            file.ignore();
            getline(file, temp.name, ',');
            file >> temp.balance;
            if (temp.balance == b)
            {
                temp.displayAccount();
                found = true;
            }
        }
        file.close();
        if (!found)
        {
            cout << "No account have !" << endl;
        }
    }
    void displayAccount()
    {
        cout << "Account No = " << account_no << endl;
        cout << "Name = " << name << endl;
        cout << "Balance = " << balance << endl;
        cout << "####################################" << endl;
    }
};

int displayMenu()
{
    int choice;
    cout << "1.Add Record" << endl;
    cout << "2.Display Record" << endl;
    cout << "3.Search record with balance" << endl;
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
            Account E;
            E.addAccount();
            break;
        }
        case 2:
        {
            Account E;
            E.printAllAccount();
            break;
        }
        case 3:
        {
            Account E;
            float bal;
            cout << "Enter balance to search record : ";
            cin >> bal;
            E.searchAccount(bal);
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
