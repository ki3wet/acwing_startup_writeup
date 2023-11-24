#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int SquareMatrixII()
{
	int n;

	while (cin >> n, n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << abs(i - j) + 1 << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}