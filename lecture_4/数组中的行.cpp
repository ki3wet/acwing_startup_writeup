#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int ArrLine()
{
	double arr[12][12] = { 0 };
	int integer = 0;
	char var;
	cin >> integer >> var;
	for (size_t i = 0; i < 12; i++)
	{
		for (size_t j = 0; j < 12; j++)
		{
			cin >> arr[i][j];
		}
	}
	double sum = 0;
	for (size_t i = 0; i < 12; i++)
	{
		sum += arr[integer][i];
	}
	cout << fixed << setprecision(1) << ((var == 'S') ? sum : (sum / 12)) << endl;
	return 0;
}