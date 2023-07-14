#include<iostream>
using namespace std;
class Item;

class Product
{
    private:
        int a;
        int b;
    public:
        Product(){  }
        Product(int x,int y){ a=x; b=y;}
        operator Item();
        void setData(int x,int y){ a=x; b=y; }
        int geta(){ return a; }
        int getb(){ return b; }
        void display(){ cout<<"product = "<<a<<" , "<<b<<endl; }
};

class Item
{
    private:
        int i;
    public:
        Item(){ }
        Item(int x){ i=x; };
        operator Product();
        void setItem(int x){ i=x; }
        int geti(){ return i; }
        void display(){ cout<<"Item = "<<i<<endl; }
};
Product::operator Item()
{
    Item i(a+b);
    return i;
}
Item::operator Product()
{
    Product p(i,i);
    return p;
}
int main()
{
    Item i;
    Product p(3,4);
    i=p;
    p.display();
    i.display();
    p=i;
    p.display();
    i.display();
    return 0;
}