#include <iostream>
#include <vector>
using namespace std;

void mergearr(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int k = 0, s = m + n;
    // if(m==s)
    // {
    //     cout<<nums1[0];
    // }
    // else if (n==s)
    // {
    //     nums1[k]=nums2[n-1];
    //     cout<<nums1[0];
    // }
    // else
    // {
        for (int i = m; i < s; i++)
        {
            nums1[i] = nums2[k++];
        }
         for (int i = 0; i < s; i++)
            cout << nums1[i] << " ";
            cout << endl;
    
        for (int i = 1; i < s; i++)
        {   bool swapped = false;
            for (int j = 0; j < s - i; j++)
            {  
                if (nums1[j] > nums1[j + 1])
                {   
                    swap(nums1[j], nums1[j + 1]);
                    swapped = true;
                }
            } if (swapped == false)
                break;
        }

        for (int i = 0; i < s; i++)
            cout << nums1[i] << " ";
            cout << endl;
    // }
}
int main()
{
    vector<int> a1 = {0,0,0,0,0};
    vector<int> a2 = {1,2,3,4,5};
    //    int m=a1.size();
    //    int n=a2.size();
    mergearr(a1, 0, a2, 5);

    return 0;
}
