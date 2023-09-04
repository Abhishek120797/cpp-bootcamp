#include <iostream>
#include <cstring>
using namespace std;

bool hasDigitSpecialSymbolSpace(const char *nickname)
{
    const char *specialSymbols = "!@#$%^&*()_+{}|:\"<>?-=[]\\;',./~`";
    for (int i = 0; nickname[i] != '\0'; ++i)
    {
        if (isdigit(nickname[i]) || isspace(nickname[i]) || strchr(specialSymbols, nickname[i]) != nullptr)
        {
            return true;
        }
    }
    return false;
}

bool isValidNickname(const char *nickname)
{
    int length = strlen(nickname);

    // Check the length of the nickname
    if (length > 8)
    {
        throw "Nickname must have at most 8 characters.";
    }

    // Check if the nickname contains a digit, special symbol, or space
    if (hasDigitSpecialSymbolSpace(nickname))
    {
        throw "Nickname must contain only alphabetic characters.";
    }

    return true;
}

int main()
{
    char nickname[100];

    try
    {
        cout << "Enter a nickname: ";
        cin >> nickname;

        if (isValidNickname(nickname))
        {
            cout << "Nickname is valid." << endl;
        }
    }
    catch (const char *errorMessage)
    {
        cout << "Invalid nickname: " << errorMessage << endl;
    }

    return 0;
}
