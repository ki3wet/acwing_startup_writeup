#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int ArrayTransformations()
{
	int* arr = new int[20];
	for (size_t i = 0; i < 20; i++)
	{
		cin >> arr[i];
	}
	for (size_t i = 20; i > 0; i--)
	{
		cout <<"N["<<20-i<<"] = " << arr[i - 1] << endl;
	}
	delete[] arr;
	return 0;
}