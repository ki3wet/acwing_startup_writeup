#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Remainder()
{
	int n;
	cin >> n;
	for (size_t i = 2; i <= 10000; i++)
	{
		if (i % n == 2)
			cout << i << endl;
	}
	return 0;
}