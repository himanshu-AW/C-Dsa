#include <bits/stdc++.h>
using namespace std;

double power(double x, int n)
{
	double temp;
	if (n == 0)
		return 1;
	temp = power(x, n / 2);
	if (n % 2 == 0)
		return temp * temp;
	else {
		if (n > 0)
			return x * temp * temp;
		else
			return (temp * temp) / x;
	}
}      


int main()
{
	double x = 2;
	int y = -2;

    // cout<<"enter A number : ";
    // cin>>x;
    // cout<<"Enter Powered Number :"
    // cin>>y;

	// Function call
	cout << power(x, y);
	return         0;
}