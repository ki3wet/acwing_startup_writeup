#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int SixOdd()
{
	int x;
	cin >> x;
	int flag = 0;
	for (size_t i = x; flag < 6; i++)
	{
		if (i % 2)
		{
			flag++;
			cout << i << endl;
		}
	}
	return 0;
}