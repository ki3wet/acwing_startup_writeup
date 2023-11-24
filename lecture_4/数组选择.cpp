#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int ArrSelect()
{
	int a = 100;
	double n;
	while (cin>>n, a--)
	{
		if (n <= 10)
		{
			cout << fixed << setprecision(1) << "N[" << (100 - a - 1) << "] = " << n << endl;
		}
	}
	return 0;
}