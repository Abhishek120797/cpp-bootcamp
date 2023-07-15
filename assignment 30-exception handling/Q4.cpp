#include<iostream>
#include<cstring>
using namespace std;
bool isValidEmailId(char *str)
{
    for(int i=0;str[i];i++)
    {
        if(str[i]=='@')
            return 1;
    }
    return 0;
}

int main()
{
    
    char email[100];
    cout<<"Enter e-mail Id: ";
    fgets(email,100,stdin);
    try
    {
        if(isValidEmailId(email))
            cout<<"Email id is valid";
        else
            throw 'c';
    }
    catch(char c)
    {
        cout<<"Email id is not valild !";
    }
    
    return 0;
}