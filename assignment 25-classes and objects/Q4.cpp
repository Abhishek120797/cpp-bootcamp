#include <iostream>
using namespace std;

class LargestNumber
{
private:
    int num1;
    int num2;
    int num3;
    int larger;

public:
    void set_num1(int n) { num1 = n; }
    void set_num2(int n) { num2 = n; }
    void set_num3(int n) { num3 = n; }
    int get_num1() { return num1; }
    int get_num2() { return num2; }
    int get_num3() { return num3; }
    int get_larger() { return larger; }

    void find_larger_num()
    {
        if (num1 >= num2 && num1 >= num3)
            larger = num1;
        else if (num2 >= num1 && num2 >= num3)
            larger = num2;
        else
            larger = num3;
    }
};

int main()
{
    LargestNumber l1;
    int n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    l1.set_num1(n1);
    l1.set_num2(n2);
    l1.set_num3(n3);
    l1.find_larger_num();
    cout << "largest number is " << l1.get_larger() << " among three numbers "
         << l1.get_num1() << " " << l1.get_num2() << " " << l1.get_num3();
    return 0;
}