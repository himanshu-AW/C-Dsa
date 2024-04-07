// FIND FIRST & LAST OCCURANCE IN SHORTED ARRAY
#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> nums, int target)
{
    int n = nums.end() - nums.begin();
    int s = 0, e = n - 1;
    int ans = -1;

    while (s <= e)
    {
    int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int lastOcc(vector<int> nums, int target)
{
    int n = nums.end() - nums.begin();
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (nums[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> nums{1, 2, 3, 3, 5};
     
    cout << "first occurance of 3 is at indax " << firstOcc(nums,3) << endl;
    cout << "last occurance of 3 is at indax " << lastOcc(nums, 3) << endl;
    return 0;
}