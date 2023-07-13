#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imag;

    public:
        Complex(){ real=0; imag=0; }
        Complex(int i){ real=0; imag=i; }
        Complex(int r,int i){ real=r; imag=i; }
        
        void setReal(int r){ real=r; }
        void setImag(int i){ imag=i; }
        void setComplex(int r,int i){ real=r; imag=i; }

        int getReal(){ return real; }
        int getImag(){ return imag; }

        void displayComplex(){ cout<<"Real="<<real<<" imag="<<imag<<"i"<<endl; }
        void inputComlex()
        { 
            cout<<"Enter a real part:";
            cin>>real;
            cout<<"Enter a imag part:";
            cin>>imag;
        }
        friend Complex operator+(Complex,Complex);
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
Complex operator+(Complex x,Complex y)
        {
            Complex temp;
            temp.real=x.real+y.real;
            temp.imag=x.imag+y.imag;
            return temp;
        }
int main()
{
    Complex c1,c2(5),c3(2,3),c4,c5;
    c4.setComplex(8,7);
    c5.inputComlex();
    c1.displayComplex();
    c2.displayComplex();
    c3.displayComplex();
    c4.displayComplex();
    c5.displayComplex();
    c1=c4+c5;
    cout<<"addition: ";
    c1.displayComplex();
    c1=c4-c5;
    cout<<"subtractin: ";
    c1.displayComplex();
    c1=c4*c5;
    cout<<"multiplication: ";
    c1.displayComplex();
    cout<<"Equality: ";
    if(c4==c5)
        cout<<"Equal"<<endl;
    else
        cout<<"Not Equal"<<endl;
    c2.setReal(4);
    c2.displayComplex();
    return 0;
}