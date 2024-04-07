#include <iostream>
using namespace std;
int binarysearch(int ar[], int n, int target)
{
    int s = 0;
    int e = n;
    int in,t;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (ar[mid] == target)
            return mid;
        else if (ar[mid] > target)
        {    in=
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the array size : ";
    cin >> n;
    int ar[n];
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int num;
    cout << "enter a number dou you wnat to search : ";
    cin >> num;
    cout << binarysearch(ar, n, num) << endl;
    return 0;
}