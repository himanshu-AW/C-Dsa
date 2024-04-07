#include<iostream>
using namespace std;
class Base
{
public:
   virtual void display(){
    cout<<"Display base class\n";
   }
    void show(){
    cout<<"Show Base class\n";
   }
};
class Drived : public Base{
    public:
    void display(){
        cout<<"Display Drived class\n";
    }
    void show(){
        cout<<"Show Drived Class\n";
    }
};
int main(){
    Base b;
    Base *bptr;
    Drived d;
    // cout<<"bptr points base class\n";
    // bptr= &b;
    // bptr->display();
    // bptr->show();
    cout<<"bptr points drived class\n";
    bptr= &d;
    bptr->display();
    bptr->show();

    return 0;
}
