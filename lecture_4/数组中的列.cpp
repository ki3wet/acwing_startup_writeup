#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int ArrColumn()
{
	double arr[12][12] = {0}, sum = 0;
	char var;
	int col;
	cin >> col;
	cin >> var;
	for (size_t i = 0; i < 12; i++)
	{
		for (size_t j = 0; j < 12; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (size_t i = 0; i < 12; i++)
	{
		sum += arr[i][col];
	}
	cout << fixed << setprecision(1) << ((var == 'S') ? sum : sum / 12.0);
	return 0;
}