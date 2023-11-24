#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int ArrBottom()
{
	double** arr = new double* [12], sum = 0;
	for (size_t i = 0; i < 12; i++)
	{
		arr[i] = new double[12];
	}
	char var;
	cin >> var;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cin >> arr[i][j];
			if (i - j > 0 && i + j > 11)
			{
				sum += arr[i][j];
			}
		}
	}
	cout << fixed << setprecision(1) << ((var == 'S') ? sum : sum / 30.0);

	for (size_t i = 0; i < 12; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}