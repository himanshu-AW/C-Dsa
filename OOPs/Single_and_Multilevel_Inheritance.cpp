#include <iostream>

using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent Class Called."<<endl;
    }
};

class child : public Parent
{
public:
    child()
    {
        cout << "Child Class called."<<endl;
    }
};

class grandChild : public child
{
public:
    grandChild()
    {
        cout << "GrandChild class Called."<<endl;
    }
};

int main()
{
    cout<<"\nSingle Inheritence."<<endl;
    child obj1;

    cout<<"\nMulti-level Inheritence."<<endl;
    grandChild obj2;

    return 0;
}
