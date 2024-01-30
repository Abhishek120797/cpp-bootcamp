// In a bank, different customers have savings account. Some customers may
// have taken a loan from the bank. So bank always maintain information about
// bank depositors and borrowers.
// Design a Base class Customer (name, phone-number). Derive a class
// Depositor(accno, balance) from Customer.
// Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
// Write necessary member functions to read and display the details of ‘n’
// customers.

#include <iostream>
#include <string>

using namespace std;

class Customer
{
private:
    string name;
    string phone_no;

public:
    void inputCustomer()
    {
        cout << "Enter customer name      : ";
        fflush(stdin);
        getline(cin, name);
        cout << "Enter customer phone no  : ";
        fflush(stdin);
        getline(cin, phone_no);
    }
    void displayCustomer()
    {
        cout << "Customer Name        : " << name << endl;
        cout << "Customer phone no    : " << phone_no << endl;
    }
};

class Depositer : public Customer
{
private:
    int account_no;
    int balance;

public:
    void inputDepositer()
    {
        inputCustomer();
        cout << "Enter Account Number     : ";
        cin >> account_no;
        cout << "Enter balance            : ";
        cin >> balance;
    }
    void displayDepositer()
    {
        displayCustomer();
        cout << "Account No           : " << account_no << endl;
        cout << "Account Balance      : " << balance << endl;
        cout << "-------------------------------------------\n";
    }
};

class Borrower : public Depositer
{
private:
    int loan_no;
    int loan_amount;

public:
    void inputBorrower()
    {
        inputDepositer();
        cout << "Loan No                  : ";
        cin >> loan_no;
        cout << "Enter Loan Amount        : ";
        cin >> loan_amount;
        cout << "-------------------------------------------\n"
             << endl;
    }
    void displayBorrower()
    {
        displayDepositer();
        cout << "Loan No              : " << loan_no << endl;
        cout << "Loan Amount          : " << loan_amount << endl;
        cout << "-------------------------------------------\n"
             << endl;
    }
};

int main()
{
    int cust_size = 0;
    cout << "Enter no of customer detail you want to Enter : ";
    cin >> cust_size;
    Borrower *b = new Borrower[cust_size];
    for (int i = 0; i < cust_size; i++)
    {
        b[i].inputBorrower();
    }
    for (int i = 0; i < cust_size; i++)
    {
        b[i].displayBorrower();
    }
    delete[] b;
    return 0;
}