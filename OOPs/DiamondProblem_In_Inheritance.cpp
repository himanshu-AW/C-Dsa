#include<iostream>

using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent Class Called."<<endl;
    }
};

class Child1 : public Parent
{
public:
    Child1()
    {
        cout << "Child 1 Class called."<<endl;
    }
};
class Child2 : public Parent
{
public:
    Child2()
    {
        cout << "Child 2 Class called."<<endl;
    }
};

class grandAncestor : public Child1 ,public Child2
{
public:
    grandAncestor()
    {
        cout << "GrandAncestor class Called."<<endl;
    }
};

int main(){

grandAncestor g;


return 0;
}