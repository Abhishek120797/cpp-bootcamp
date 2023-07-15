#include <iostream>
using namespace std;
bool hasDigitOrSpecialSymbol(const char* username)
 {
    const char* specialSymbols = "!@#$%^&*()_+{}|:\"<>?-=[]\\;',./~`";
    for (int i = 0; username[i] != '\0'; ++i) 
    {
        if (isdigit(username[i]) || strchr(specialSymbols, username[i]) != nullptr) 
        {
            return true;
        }
    }
    return false;
}

bool isValidUsername(const char* username)
 {
    // Check the length of the username
    int length = 0;
    for (; username[length] != '\0'; ++length);

    if (length < 6) 
    {
        throw "Username must have at least 6 characters.";
    }

    // Check if the username contains any digit or special symbol
    if (hasDigitOrSpecialSymbol(username)) 
    {
        throw "Username must contain only alphabetic characters.";
    }

    return true;
}

int main() 
{
    char username[100];

    try 
    {
        cout << "Enter a username: ";
        cin >> username;

        if (isValidUsername(username)) 
        {
            cout << "Username is valid." << endl;
        }
    }
    catch (const char* errorMessage) 
    {
        cout << "Invalid username: " << errorMessage << endl;
    }

    return 0;
}
