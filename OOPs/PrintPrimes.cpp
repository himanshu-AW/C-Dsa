#include<iostream>
using namespace std;
class Integer{
int value;
public:
Integer(int num) :
    value(num)
{}
bool isPrime(){
    if(value<=1) return false;
    for(int i=2;i*i<=value;++i){
        if(value%i==0) return false;
    }
    return true;
}
void printPrime(){
    cout<<"Prime numbers upto "<<value<<" : \n";
    for(int i=2;i<=value;++i){
        if(Integer(i).isPrime()) cout<<i<<" ";
    }
}
};
int main(){
    Integer obj(20);
    obj.printPrime();
    return 0;
}