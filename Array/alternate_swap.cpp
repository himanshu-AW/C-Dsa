#include <iostream>
using namespace std;
void alt_swap(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
            swap(arr[i], arr[i + 1]);
    }

    for (int i = 0; i < n; i += 1)
    {
        cout << arr[i] << " ";
    }cout<<endl;
    
}
int main()
{
    int o_arr[5] = {1, 10, 3, 30, 5};
    int e_arr[6] = {2, 20, 4, 40, 6, 60};
    alt_swap(o_arr, 5);
    alt_swap(e_arr, 6);
    return 0;
}