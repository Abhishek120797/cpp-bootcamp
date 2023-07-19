#include<iostream>
#include<string>

using namespace std;

class FLOAT
{
    private:
        float value;
    public:
        FLOAT(){ }
        FLOAT(float num):value(num){  }

        FLOAT operator+(FLOAT temp)
        {
            return FLOAT(value+temp.value);
        }
        FLOAT operator-(FLOAT temp)
        {
            return FLOAT(value-temp.value);
        }
        FLOAT operator*(FLOAT temp)
        {
            return FLOAT(value*temp.value);
        }
        FLOAT operator/(FLOAT temp)
        {   
            try{
            if (temp.value == 0) 
            {
                throw 'c';
            }
            }catch(char c)
            {
                cout<<"Zero division Error";
            }
            return FLOAT(value/temp.value);
        }
        friend ostream& operator<<(ostream&,FLOAT&);

};

ostream& operator<<(ostream &os,FLOAT &f)
{
    os<<f.value;
    return os;
}

int main()
{
    FLOAT f1(5.5),f2(15.5);
    FLOAT a=f1+f2;
    FLOAT b=f1-f2;
    FLOAT c=f1*f2;
    FLOAT d=f1/f2;
    cout<<"Addition is "<<a<<endl;
    cout<<"Subtract is "<<b<<endl;
    cout<<"Multiplex is "<<c<<endl;
    cout<<"Division is "<<d<<endl;

    return 0;
}