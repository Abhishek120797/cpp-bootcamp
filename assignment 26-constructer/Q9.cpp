#include <iostream>
#include <string>
using namespace std;

class Bill
{
private:
    string consuName;
    int consuNumber;
    int unit;
    float bill;

public:
    void set_consuname(string name) { consuName = name; }
    void set_consunumber(int num) { consuNumber = num; }
    void set_unit(int u)
    {
        unit = u;
        calculate_bill();
    }

    string get_consuname(string name) { return consuName; }
    int get_consunumber(int num) { return consuNumber; }
    int get_unit(int u) { return unit; }
    float get_bill() { return bill; }

    void input_consumerDetails()
    {
        cout << "Enter consumer number: ";
        cin >> consuNumber;
        cout << "Enter consumer name: ";
        cin.ignore();
        getline(cin, consuName);
        cout << "Enter unit consumed: ";
        cin >> unit;
        calculate_bill();
    }

    void display_consumerDetails()
    {
        cout << consuNumber << " " << consuName << " " << unit << " " << bill << endl;
    }

    void calculate_bill()
    {
        if (unit > 200)
            bill = 120 + 200 + (unit - 200) * 3;
        else if (unit > 100)
            bill = 120 + (unit - 100) * 2;
        else
            bill = unit * 1.20;
    }
};

int main()
{
    Bill b1, b2;
    b1.input_consumerDetails();
    b2.input_consumerDetails();
    b1.display_consumerDetails();
    b2.display_consumerDetails();
    return 0;
}