#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    try
    {
        ofstream file;
        file.open("text.txt");
        if (!file)
        {
            throw string("Error unable to create the file");
        }
        cout << "file created succesfully";
        file.close();
    }
    catch (const string &errorMessage)
    {
        cerr << errorMessage << endl;
    }
    return 0;
}