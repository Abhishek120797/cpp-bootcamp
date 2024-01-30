// Write a C++ program to merge the two files.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char ch;
    ifstream file1;
    ifstream file2;
    ofstream file3;
    file1.open("text.txt");
    file2.open("text2.txt");
    file3.open("merge.txt", ios::app);
    while (file1.get(ch))
    {
        file3.put(ch);
    }
    while (file2.get(ch))
    {
        file3.put(ch);
    }
    file1.close();
    file2.close();
    file3.close();
    cout << "File merged successfully";
    return 0;
}