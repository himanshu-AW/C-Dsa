#include <iostream>

using namespace std;

class Parent1
{
public:
    Parent1()
    {
        cout << "Parent 1 class called." << endl;
    }
};

class Parent2
{
public:
    Parent2()
    {
        cout << "Parent 2 class called." << endl;
    }
};

class Child : public Parent1, public Parent2
{
public:
    Child()
    {
        cout << "Child class called." << endl;
    }
};

int main()
{
    cout << "\nMultiple Inheritance." << endl;
    Child c1;

    return 0;
}
