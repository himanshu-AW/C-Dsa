#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int img;
    public:
    Complex(int real,int img){
        this->real=real;
        this->img=img;
    }
    Complex operator+ (Complex &c2){
        Complex ans(0,0);

        ans.real=real +c2.real;
        ans.img=img +c2.img;

        return ans;
    }
};

int main()
{
    Complex c1(2,3);
    Complex c2(3,4);

    Complex c3=c1+c2;
    cout<<c3.real<<" + j"<<c3.img<<endl;

    return 0;
}