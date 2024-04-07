// find diffference  between sum of all the elements of even number  
//to the sum of all elements of odd numbers.
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
    
    int ans=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2==0)
        {
            ans+=v[i];
        }
        else{
            ans-=v[i];
        }
    }cout<<endl;
     cout<<"Diif b/w all even & odd no. is "<<ans<<endl;
    return 0;
}