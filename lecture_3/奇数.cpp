#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Odd()
{
	int a;
	cin >> a;
	for (size_t i = 1; i <= a; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << endl;
		}
	}
	return 0;
}