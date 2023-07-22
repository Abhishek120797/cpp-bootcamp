#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct Item
{
    string item_code;
    string Item_name;
    int price;
};

bool compareRecord(Item &I1,Item &I2)
{
    return I1.price>I2.price;
}

int main()
{
    const int maxRecord=50;
    Item itemRecord[maxRecord];
    ifstream file;
    file.open("record.txt");
    for(int i=0;i<maxRecord;i++)
    {
        file>>itemRecord[i].item_code;
        getline(file.ignore(),itemRecord[i].Item_name,',');
        file>>itemRecord[i].price;
    }
    file.close();

    for(int i=0;i<maxRecord;i++)
    {
        for(int j=i+1;j<maxRecord;j++)
        {
            if(compareRecord(itemRecord[i],itemRecord[j]))
            {
                Item temp;
                temp=itemRecord[i];
                itemRecord[i]=itemRecord[j];
                itemRecord[j]=temp;
            }
        }
    }

    ofstream file2;
    file2.open("record.txt",ios::out);
    for(int i=0;i<maxRecord;i++)
    {
        file2<<itemRecord[i].item_code<<" "<<itemRecord[i].Item_name<<", "<<itemRecord[i].price<<endl;
    }
    file2.close();
    return 0;
}