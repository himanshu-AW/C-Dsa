#include<iostream>

using namespace std;

class Addition
{
    public:
    int sum(int n1,int n2){
        cout<<(n1+n2)<<endl;
    }
    int sum(int n1,int n2, int n3){
        cout<<(n1+n2+n3)<<endl;
    }
    float sum(float n1, float n2){
       cout<<(n1+n2)<<endl;
    }
};

int main()
{
    Addition obj;
    obj.sum(1,2);
    obj.sum(1,2,3);
    obj.sum(float(1.2),float(2.3));

    return 0;
}