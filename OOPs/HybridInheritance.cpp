#include <iostream>

using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent class called." << endl;
    }
};

class Child1 : public Parent
{
public:
    Child1()
    {
        cout << "Child 1 class called." << endl;
    }
};

class Child2 : public Parent
{
public:
    Child2()
    {
        cout << "Child 2 Class called." << endl;
    }
};

class GrandChild : public Child2
{
public:
    GrandChild()
    {
        cout << "Grand Child class Called." << endl;
    }
};

int main()
{

    cout << "\nHybrid Inheritabce." << endl;
    Child1 c1;
    cout << endl;
    GrandChild g1;

    return 0;
}