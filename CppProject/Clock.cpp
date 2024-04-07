#include<iostream>
#include<windows.h>

using namespace std;

class Clock{
    int h,m,s=0;
    public:
        void set(){
            cout<<"enter the hours :";
            cin>>h;
            cout<<"enter the minutes :";
            cin>>m;
        }
        void display(){
            while(true){
                system("cls");
                cout<<"\n\n"<<h<<":"<<m<<":"<<s;
                Sleep(1000);
                s++;
                if(s>59){
                    s=0;
                    m++;
                    if(m>59){
                        m=0;
                        h++;
                        if(h>23){
                            h=0;
                        }
                    }
                }
            }
        }
};
int main(){
    Clock cl;
    cl.set();
    cl.display();
    return 0;
}
