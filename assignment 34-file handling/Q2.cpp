// Write a C++ program to read a text file and count the number of characters in it.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int count = 0;
    char ch;
    ifstream file;
    file.open("text.txt");
    while (file.get(ch))
    {
        count++;
    }

    file.close();
    cout << "Total charecter in file is " << count << endl;
    ;
    return 0;
}