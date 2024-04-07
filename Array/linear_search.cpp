#include <iostream>
#include <stdlib.h>
using namespace std;
int linersearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return (i);
    }
    return (-1);
}
int main()
{
    int size;
    cout << "enter the size of array :";
    cin >> size;
    int arr[15];
    cout << "enter the elements of array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter a key which is search in array : ";
    int key;
    cin >> key;
    int index = linersearch(arr, size, key);
    if (index == -1)
        cout << key << " is notpresent in array..!!";
    else
        cout << key << " is present in array at index " << index << endl;

    return 0;
}