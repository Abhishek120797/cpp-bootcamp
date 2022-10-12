#include<iostream>
#include<string.h>
using namespace std;
class Bill
{
    private:
        int unit,cunsumer_num;
        char name[40];
        float bill;
    public:
        Bill()
        {
            cout<<"Enter consumer name : ";
            cin>>name;
            cout<<"Enter consumer number : ";
            cin>>cunsumer_num;
            cout<<"Enter cunsumbtion unit :";
            cin>>unit;
        }
    void set_cunsumer_num(int x){ cunsumer_num=x; }
    void set_cunsumer_name(char x[]){ strcpy(name,x); }
    void set_unit(int x){ unit=x; }
    float get_bill(){ return bill; }
    int get_unit(){ return unit; }
    char* get_name(){ return name; }
    int get_cunsumer_num(){ return cunsumer_num; }
    void calculatebill()
    {
        if(unit>200)
            bill=3*unit;
        if(unit>=100 && unit<=200)
             bill=2*unit;
        if(unit<=100)
            bill=1.20*unit;
    }

};

int main()
{
    Bill cuns1,cuns2;
    cuns1.calculatebill();
    cuns2.calculatebill();
    cout<<"cunsumer number : "<<cuns1.get_cunsumer_num()<<" cunsumer name : "
    <<cuns1.get_name()<<" cunsumbtion unit : "<<cuns1.get_unit()
    <<" total bill : "<<cuns1.get_bill()<<endl;
    cout<<"cunsumer number : "<<cuns2.get_cunsumer_num()<<" cunsumer name : "  
    <<cuns2.get_name()<<" cunsumbtion unit : "<<cuns2.get_unit()
    <<" total bill : "<<cuns2.get_bill();
    return 0;
}