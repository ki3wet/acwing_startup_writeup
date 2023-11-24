#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int SquareMatrixIII()
{
	int n;
	while (cin >> n, n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << (long long)pow(2, i + j) << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}