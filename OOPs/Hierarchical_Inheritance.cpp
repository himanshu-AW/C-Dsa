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
        cout << "Child 2 class called." << endl;
    }
};

int main()
{
    cout << "\nHierarchical Inheritance." << endl;
    Child1 c1;
    cout << endl;
    Child2 c2;

    return 0;
}