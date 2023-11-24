#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Fib()
{
	long long f[70] = { 0,1 };
	for (size_t i = 2; i < 61; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << "Fib(" << n << ") = " << f[n] << endl;
	}
	return 0;
}