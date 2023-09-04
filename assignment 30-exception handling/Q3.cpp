#include <iostream>
using namespace std;

int main()
{
    int num1, num2, ans;
    char sign;

    cout << "Perform arithmetic operation on two numbers" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    try
    {
        cin >> sign;
        if (sign != '+' && sign != '-' && sign != '*' && sign != '/')
            throw sign;
    }
    catch (char sign)
    {
        cout << "Invalid operator !";
        exit(0);
    }
    try
    {
        cout << "Enter second number: ";
        cin >> num2;
        if (num2 == 0 && sign == '/')
            throw 0;
        else
            throw sign;
    }
    catch (int zero)
    {
        cout << "Zero division Error !";
    }
    catch (char sign)
    {
        switch (sign)
        {
        case '+':
            ans = num1 + num2;
            break;
        case '-':
            ans = num1 - num2;
            break;
        case '*':
            ans = num1 * num2;
            break;
        case '/':
            ans = num1 / num2;
            break;
        default:
            cout << "Invalid operator !";
        }
        cout << "Ans = " << ans;
    }
}
