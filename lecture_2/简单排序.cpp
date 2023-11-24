#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int SimpleSort()
{
	int a[3], tmp[3];
	cin >> a[0] >> a[1] >> a[2];
	for (size_t i = 0; i < 3; i++)
	{
		tmp[i] = a[i];
	}
	for (size_t i = 2; i >0; i--)
	{
		for (size_t j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		cout << a[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << tmp[i] << endl;
	}
	return 0;
}