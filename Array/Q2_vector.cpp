//count the number of occurances of a particlar x.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5);

    cout<<"Enter the elements "<<endl;
    for (int i=0;i<5;i++)
    {
        cin>>v[i];
    }cout<<endl;
    
    cout<<"Enter x: ";
    int x;
    cin>>x;

    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
            count++;
        }
    }cout<<endl;
    cout<<"Element x  i.e, "<<x<<" is occurred of "<<count<<" times.. "<<endl;
    return 0;
}