#include<iostream>
using namespace std;

class Reactangle{
public :
    int length;
    int breadth;

    Reactangle(){  // default constructor - NO args pass
        this->length=0;
        this->breadth=0;
    }

    Reactangle(int length,int breadth){ // parametrized constructor - args pass
        this->length=length;
        this->breadth=breadth;
    }

    Reactangle(Reactangle& r){ // Copy constructor - initialized an obj by another existing objt pass as args of same class
        this->length=r.length;
        this->breadth=r.breadth;
    }
    ~Reactangle(){  // Destructor automatically called - to delete objects.
        cout<<"Destructor is called. "<<endl;
    }

};

int main(){
    system("cls");

    Reactangle* r1=new Reactangle();
    cout<<"\nDefault Constructor is called. "<<endl;
    cout<<"Length: "<<r1->length<<"  , Breadth: "<<r1->breadth<<endl;
    // we can delete manually an object such as < delete  object_name > 
    delete r1; // This can only used when we initilized pointer object .

    Reactangle r2(3,4);
    cout<<"\nParametrized Constructor is called. "<<endl;
    cout<<"Length: "<<r2.length<<"  , Breadth: "<<r2.breadth<<endl;

    Reactangle r3=r2;
    cout<<"\nCopy Constructor is called. "<<endl;
    cout<<"Length: "<<r3.length<<"  , Breadth: "<<r3.breadth<<endl;
    

    return 0;
}