#include <iostream>
using namespace std;

class ABC
{
    int data;

public:
    void setData(int data)
    {
        this->data=data;
    }
    
    int getData(){
        return data;
    }
};

int main()
{

    ABC obj1;
    obj1.setData(23); // we can only set data using methods but can't set data using direct objet_name.data_name = some value.
    cout<<"Data: "<<obj1.getData()<<endl;


    return 0;
}