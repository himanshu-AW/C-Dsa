//Find the last occurance of an elements x n an given array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(6);
    for(int i=0;i<6;i++)
    {
        cin>>v[i];
    }cout<<endl;

    int x;
    cout<<"Enter a element: ";
    cin>>x;
     //find the last occurance form starting 
    int occurance=-1; 
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        occurance=i;
    }
    cout<<occurance<<endl;
   //fint the last occurance from ending 
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]==x)
        occurance=i;
        break;
    }
    cout<<occurance<<endl;

return 0;
}