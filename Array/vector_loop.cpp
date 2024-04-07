#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
  //for loop
   for(int i=0;i<5;i++)
   {
    int element;
    cin>>element;
    v.push_back(element);
   }
// print all values in vector
   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<" ";
   }cout<<endl;
   //inserting a element at 2nd position
   v.insert(v.begin()+2,6);
   // for each loop
   for(int ele:v)
   {
    cout<<ele<<" ";
   }cout<<endl;
   //   Delete 2nd last elements in vector
   v.erase(v.end()-2);
   //while loop
   int idx=0;
   while(idx<v.size())
   {
    cout<<v[idx]<<" ";
    idx++;
   }cout<<endl;
return 0;
}