#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int PositiveNumber()
{
	double realNum[6];
	int flag = 0;
	for (size_t i = 0; i < 6; i++)
	{
		cin >> realNum[i];
		if (realNum[i] > 0)
		{
			flag++;
		}
	}
	cout << flag << " positive numbers" << endl;
	return 0;
}