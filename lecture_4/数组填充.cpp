#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int ArrPadding()
{
	int n, arr[10];
	cin >> n;
	for (int i = 0; i < 10; i++)
	{
		arr[i] = n << i;
		cout << "N[" << i << "] = " << arr[i] << endl;
	}
	return 0;
}