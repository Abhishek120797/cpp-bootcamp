#include<iostream>
#include<string>

using namespace std;

class Item
{
    protected:
        int item_no;
        string item_name;
        float price;
    public:
        void inputItemDetails()
        {
            cout<<"Enter Item name : ";
            fflush(stdin);
            getline(cin,item_name);
            cout<<"Enter Item no : ";
            cin>>item_no;
            cout<<"Enter Item price : ";
            cin>>price;
        }
        void displayItem()
        {
            cout<<"Item Name : "<<item_name<<endl;
            cout<<"Item No : "<<item_no<<endl;
            cout<<"Item Price : "<<price<<endl;
        }
};

class Discounted_Item:public Item
{
    protected:
        float discount_percent;
        static float total_price;
        static float final_amount;
        static float total_discount;
    public:
        void inputItemDiscount()
        {
            inputItemDetails();
            cout<<"Enter discount percent : ";
            cin>>discount_percent;
            total_price+=price;
            total_discount+=(price*discount_percent/100);
            final_amount=total_price-total_discount;
            cout<<"----------------------------------"<<endl;
        }
        void displayDiscountedItem()
        {
            displayItem();
            cout<<"Discount percent : "<<discount_percent<<endl;
            cout<<"Discounted price : "<<price-price*(discount_percent/100.0)<<endl;
            cout<<"----------------------------------";
        }

        static void displayBill();
};

float Discounted_Item::total_price;
float Discounted_Item::total_discount;
float Discounted_Item::final_amount;
void Discounted_Item::displayBill()
{
    cout<<"Total price : "<<total_price<<endl;
    cout<<"Total discount : "<<total_discount<<endl;
    cout<<"Final amount : "<<final_amount<<endl;
}
int main()
{
    int n;
    cout<<"How many items you want to Enter: ";
    cin>>n;
    Discounted_Item *I;
    I=new Discounted_Item[n];
    for(int i=0;i<n;i++)
    {
        I[i].inputItemDiscount();
        
    }
    for(int i=0;i<n;i++)
    {
        I[i].displayDiscountedItem();
        cout<<endl;
    }
    Discounted_Item::displayBill();
    return 0;
}