#include <iostream>
#include<limits.h>
#include<stdlib.h>
using namespace std;
int getmax(int arr[], int n)
{
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    return mx;
}

int getmin(int arr[], int n)
{
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, arr[i]);
    }
    return mn;
}
int main()
{
    int size;
    cout<<"Enter the size of array :"; 
    cin >>size;
    int arr[15];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout << getmax(arr, size) <<"this is maximum element in this array " << endl;
    cout << getmin(arr, size) <<"this is minimum element in this array " << endl;
    return 0;
}