#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int ArrSubstitution()
{
	int count = 10;
	int arr[10];

	for (int i = 0; i < count; i++)
	{
		cin >> arr[i];
		if (arr[i] <= 0)
		{
			arr[i] = 1;
		}
	}
	for (size_t i = 0; i < count; i++)
	{
		cout << "X[" << i << "] = " << arr[i] << endl;
	}
	return 0;
}