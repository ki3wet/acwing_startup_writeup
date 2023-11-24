#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int SunccesiveIntegerAdded()
{
	int num, count, sum = 0;
	cin >>num;
	while (cin >> count)
	{
		if (count <= 0)
		{
			continue;
		}
		for (int i = 0; i < count; i++)
		{
			sum += (num + i);
		}
		cout << sum << endl;
		break;
	}
	return 0;
}