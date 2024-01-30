// Write a C++ program that counts the total number of characters, words and lines in
// the file.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int ch = 0, word = 0, line = 0;
    string data;
    ifstream file("text2.txt");

    while (getline(file, data))
    {
        line++;
        for (int i = 0; data[i]; i++)
        {
            if (data[i] == ' ' && data[i + 1] != ' ')
            {
                word++;
            }
            ch++;
        }
        word++;
    }

    file.close();
    cout << "Total charecter in file is " << ch << endl;
    cout << "Total word in file is " << word << endl;
    cout << "Total line in file is " << line << endl;
    return 0;
}