// Write a C++ program to accept a password and throw an exception if the password has
// less than 6 characters or does not contain a digit or does not contain any special
// character or does not contain any capital letter

#include <iostream>
#include <cstring>
using namespace std;
bool hasDigit(const char *password)
{
    for (int i = 0; password[i] != '\0'; ++i)
    {
        if (isdigit(password[i]))
        {
            return true;
        }
    }
    return false;
}

bool hasSpecialChar(const char *password)
{
    const char *specialChars = "!@#$%^&*()_+{}|:\"<>?-=[]\\;',./~`";
    for (int i = 0; password[i] != '\0'; ++i)
    {
        if (strchr(specialChars, password[i]) != nullptr)
        {
            return true;
        }
    }
    return false;
}

bool hasCapitalLetter(const char *password)
{
    for (int i = 0; password[i] != '\0'; ++i)
    {
        if (isupper(password[i]))
        {
            return true;
        }
    }
    return false;
}

bool isValidPassword(const char *password)
{
    int length = strlen(password);

    // Check the length of the password
    if (length < 6)
    {
        throw "Password must have at least 6 characters.";
    }

    // Check if the password contains a digit
    if (!hasDigit(password))
    {
        throw "Password must contain at least one digit.";
    }

    // Check if the password contains a special character
    if (!hasSpecialChar(password))
    {
        throw "Password must contain at least one special character.";
    }

    // Check if the password contains a capital letter
    if (!hasCapitalLetter(password))
    {
        throw "Password must contain at least one capital letter.";
    }

    return true;
}

int main()
{
    char password[100];

    try
    {
        cout << "Enter a password: ";
        cin >> password;

        if (isValidPassword(password))
        {
            cout << "Password is valid." << endl;
        }
    }
    catch (const char *errorMessage)
    {
        cout << "Invalid password: " << errorMessage << endl;
    }

    return 0;
}
