//count the number which is strictly greater then x.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(6);

    cout<<"Enter the elements "<<endl;
    for (int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }cout<<endl;
    
    cout<<"Enter x: ";
    int x;
    cin>>x;

    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>x)
        {
            count++;
        }
    }cout<<endl;
    cout<<count<<endl;
    return 0;
}