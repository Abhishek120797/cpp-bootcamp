#include<iostream>
using namespace std;

class Matrix
{
    protected:
        int mat[4];
    public:
        void inputMatrix()
        {
            cout<<"Enter matrix element of 4*4 :"<<endl;
            for(int i=0;i<4;i++)
            {
                cin>>mat[i];
            }
        }

};

class Calculate_Determinant:public Matrix
{
    public:
        int cal_determinant()
        {
            int D;
            inputMatrix();
            D=mat[0]*mat[3]-mat[1]*mat[2];
            return D;
        }
};

int main()
{
    Calculate_Determinant D;
    int num;
    cout<<"*********calculate determinant of 4*4 matrix*********"<<endl;
    num=D.cal_determinant();
    cout<<"|D| = "<<num;
    return 0;
}