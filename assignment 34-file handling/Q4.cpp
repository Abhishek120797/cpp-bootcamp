// Write a program to copy the contents of one text file to another while changing the
// case of every alphabet.

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    char ch;
    ifstream file1;
    file1.open("text.txt");
    ofstream file2;
    file2.open("text2.txt");

    while (file1.get(ch))
    {
        if (isalpha(ch))
        {
            if (isupper(ch))
                ch = tolower(ch);
            else
                ch = toupper(ch);
        }
        file2 << ch;
    }
    file1.close();
    file2.close();
    return 0;
}