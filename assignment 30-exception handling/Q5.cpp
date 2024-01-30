// Write a C++ program to accept a mobile number and throw an exception if it does not
// contain 10 digits.

#include <iostream>
#include <cstring>
using namespace std;

bool isValidMobileNumber(const char *mobileNumber)
{
    int length = strlen(mobileNumber);

    // Check the length of the mobile number
    if (length != 10)
    {
        throw "Mobile number must contain 10 digits.";
    }

    // Check if the mobile number contains only digits
    for (int i = 0; i < length; ++i)
    {
        if (!isdigit(mobileNumber[i]))
        {
            throw "Mobile number must contain only digits.";
        }
    }

    return true;
}

int main()
{
    char mobileNumber[20];

    try
    {
        cout << "Enter a mobile number: ";
        fgets(mobileNumber, 20, stdin);
        mobileNumber[strcspn(mobileNumber, "\n")] = '\0';

        if (isValidMobileNumber(mobileNumber))
        {
            cout << "Mobile number is valid." << endl;
        }
    }
    catch (const char *errorMessage)
    {
        cout << "Invalid mobile number: " << errorMessage << endl;
    }

    return 0;
}
