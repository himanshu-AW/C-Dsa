#include<iostream>
#include<vector>
using namespace std;
int remove_elements(vector<int>nums,int Val)
{
   int n=nums.size();
   int i,j=0;
   for(i=0;i<n;i++)
   {
     if(nums[i]==Val)
        continue;
       nums[j++]=nums[i];
      
   }
  return j;
} 
int main()
{
    vector <int> nums={3,2,2,3};
    int Val=3;
  int   n=remove_elements(nums,Val);
    for(int i=0;i<n;i++)
    cout << nums[i]<<" ";
    return 0;
}
    