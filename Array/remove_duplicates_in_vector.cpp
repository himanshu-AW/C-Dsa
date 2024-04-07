#include<iostream>
#include<vector>
using namespace std;
int main()
{ 
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};

    // for(int i=0;i<3;i++){
    //     cin>>nums[i];
    // }
 int k=0;
    for(int i=0;i<nums.size();i++)
    {  
        if(nums[i]==nums[i+1])
        {
          for(int i=0;i<nums.size();i++)
          {
            nums[i]=nums[i+1];
          }
           k++;
         ///  nums.size()-=1;
        }
    }
     for(int i=0;i<nums.size();i++)
    {  
        cout<<nums[i]<<" ";
    }
    
cout<<endl<<k;
return 0;
}