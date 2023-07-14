#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imag;

    public:
        Complex(){ real=0; imag=0; }
        Complex(int imag){ this->real=0; this->imag=imag; }
        Complex(int real,int imag){ this->real=real; this->imag=imag; }
        Complex(const Complex &c)
        {
            real=c.real;
            imag=c.imag;
        }
        Complex& operator=(const Complex &c)
        {
            real=c.real;
            imag=c.imag;
            return *this;
        }
        operator int()
        {
            return real;
        }
        void setReal(int real){ this->real=real; }
        void setImag(int imag){ this->imag=imag; }
        void setComplex(int real,int imag){ this->real=real; this->imag=imag; }

        int getReal(){ return real; }
        int getImag(){ return imag; }

        friend ostream& operator<<(ostream &os, Complex c)
        {
            if(c.imag>0)
                os<<c.real<<" + "<<c.imag<<"i";
            else
                os<<c.real<<" - "<<-c.imag<<"i";
            
            return os;
        }

        friend istream& operator>>(istream &is, Complex &c)
        {
            cout<<"Enter real part:";
            is>>c.real;
            cout<<"Enter imag part:";
            is>>c.imag;
            return is;
        }

        Complex operator+(Complex c)
        {
            Complex temp;
            temp.real=real+c.real;
            temp.imag=imag+c.imag;
            return temp;
        }
        Complex operator-(Complex c)
        {
            Complex temp;
            temp.real=real-c.real;
            temp.imag=imag-c.imag;
            return temp;
        }
        Complex operator*(Complex c)
        {
            Complex temp;
            temp.real=(real*c.real)+(imag*c.imag*(-1));
            temp.imag=(real*c.imag)+(imag*c.real);
            return temp;
        }
        bool operator==(Complex c)
        {
            if(real==c.real && imag==c.imag)
                return 1;
            else
                return 0;
        }
};


int main()
{
    Complex c1;
    c1.setComplex(3,4);
    int x;
    x=c1;
    cout<<x;
    return 0;
}