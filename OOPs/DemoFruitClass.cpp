# include<iostream>
using namespace std;

class Fruit{
public:
    string name;
    string color;

};

int main(){

    Fruit apple;
    apple.name="Apple";
    apple.color="Red";
    cout<<"Fruit Name: "<<apple.name<<" - Color: "<<apple.color<<endl;

    Fruit *mango = new Fruit();
    mango->name="Mango";
    mango->color="Yellow";
    cout<<"Fruit name: "<<mango->name<<" - Color: "<<mango->color<<endl;


    return 0;
}