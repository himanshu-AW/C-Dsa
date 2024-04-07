#include<iostream>
#include<math.h>

using namespace std;
bool isPrime(int n){
    if(n<2) return false;
    for(int j=2;j<=sqrt(n);j++){
        if(n%j==0)return false;
    }
    return true;
}
void printPrimeNo(){
    for(int i=1;i<=100;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}
int main(){
printPrimeNo();
}