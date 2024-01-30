// Create a Product class and convert Product type to Item type using constructor
// int main()
// {
//  Item i1;
//  Product p1;
//  p1.setData(3,4);
//  i1=p1;
//  return 0;
// }

#include <iostream>
using namespace std;
class Item;

class Product
{
private:
    int a;
    int b;

public:
    Product() {}
    Product(int x, int y)
    {
        a = x;
        b = y;
    }
    Product(Item i);

    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    int geta() { return a; }
    int getb() { return b; }
    void display() { cout << "product = " << a << " , " << b << endl; }
};

class Item
{
private:
    int i;

public:
    Item() {}
    Item(int x) { i = x; };
    Item(Product p);
    void setItem(int x) { i = x; }
    int geti() { return i; }
    void display() { cout << "Item = " << i << endl; }
};

Product::Product(Item i)
{
    a = i.geti();
    b = i.geti();
}

Item::Item(Product p)
{
    i = p.geta() + p.getb();
}
int main()
{
    Item i;
    Product p(3, 4);
    i = p;
    p.display();
    i.display();
    p = i;
    p.display();
    i.display();
    return 0;
}