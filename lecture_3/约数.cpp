#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Approximate()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % i)
		{
			continue;
		}
		cout << i << endl;
	}
	return 0;
}