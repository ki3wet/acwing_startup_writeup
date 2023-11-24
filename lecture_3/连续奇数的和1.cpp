#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int ContinueOdd()
{
	int x, y, n=0;
	cin >> x >> y;

	if (x > y)
	{
		swap(x, y);
	}
	for (int i = x + 1; i < y; i++)
	{
		if (i % 2)
		{
			n += i;
		}
	}
	cout << n << endl;
	return 0;
}