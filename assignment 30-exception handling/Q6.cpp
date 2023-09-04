#include <iostream>
#include <cstring>
using namespace std;

bool isValidPinCode(const char *pinCode)
{
    int length = strlen(pinCode);

    // Check the length of the pin code
    if (length != 6)
    {
        throw "Pin code must contain 6 digits.";
    }

    // Check if the pin code contains only digits
    for (int i = 0; i < length; ++i)
    {
        if (!isdigit(pinCode[i]))
        {
            throw "Pin code must contain only digits.";
        }
    }

    return true;
}

int main()
{
    char pinCode[10];

    try
    {
        cout << "Enter an area pin code: ";
        fgets(pinCode, 10, stdin);
        pinCode[strcspn(pinCode, "\n")] = '\0';
        if (isValidPinCode(pinCode))
        {
            cout << "Pin code is valid." << endl;
        }
    }
    catch (const char *errorMessage)
    {
        cout << "Invalid pin code: " << errorMessage << endl;
    }

    return 0;
}
