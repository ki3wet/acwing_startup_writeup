#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int ArrTopHalf()
{
	double arr[12][12] = { 0 };
	char var;
	cin >> var;
	double sum = 0;
	for (size_t i = 0; i < 12; i++)
	{
		for (size_t j = 0; j < 12; j++)
		{
			cin >> arr[i][j];
			if ((i + j < 11)&&(j>i)) //j>i&&i+j<11
			{
				sum += arr[i][j];
			}
		}
	}

	cout << fixed << setprecision(1) << ((var == 'S') ? sum : (sum / 30)) << endl;
	return 0;
}