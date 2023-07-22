#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string line;
    ofstream file;
    file.open("text.txt",ios::app);

    cout<<"Enter string : ";
    while(true)
    {
        getline(cin,line);
        if(line==".")
            break;
        file<<line<<endl;
    }
    
    file.close();

    return 0;
}