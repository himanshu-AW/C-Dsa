#include <iostream>
using namespace std;
long int fibo(long int x)
{
    if (x == 1)
        return 0;
    else if (x == 2)
        return 1;
    else
        return (fibo(x - 1) + fibo(x - 2));
}
int main()
{
    long int n, r;
    cout << "Enter a number ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << fibo(i)<<'\t';
    }
    return 0;
}