#include <iostream>
using namespace std;

class Parent
{
public:
    int x;

protected:
    int y;

private:
    int z;
};

class child1:public Parent{
    // x remain public
    // y remain protected
    // z is not accesable. 
};

class child2:protected Parent{
    // x will be protected
    // y will be protected
    // z is not accesable.
};

class child3:private Parent{
    // x will be private
    // y will be private
    // z will not accesable.
};

int main()
{
    
    return 0;
}