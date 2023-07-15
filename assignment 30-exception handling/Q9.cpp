#include <iostream>
#include <cstring>
using namespace std;

bool isValidGmailID(const char* gmailID) 
{
    const char* atSymbol = strchr(gmailID, '@');
    const char* domain = strstr(gmailID, "gmail.com");

    if (atSymbol == nullptr || domain == nullptr) 
    {
        throw "Invalid Gmail ID. Gmail ID must contain '@' and 'gmail.com'.";
    }

    return true;
}

int main() 
{
    char gmailID[100];

    try 
    {
        cout << "Enter a Gmail ID: ";
        fgets(gmailID,100,stdin);
        gmailID[strcspn(gmailID,"\n")]='\0';
        if (isValidGmailID(gmailID)) 
        {
            cout << "Gmail ID is valid." << endl;
        }
    }
    catch (const char* errorMessage)
    {
        cout << "Invalid Gmail ID: " << errorMessage << endl;
    }

    return 0;
}
