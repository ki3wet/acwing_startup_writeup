#include<iostream>
#include<cmath>
using namespace std;

int Lozenge()
{
	int n;
	cin >> n;
	int cx = n / 2, cy = n / 2;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (abs(i - cx) + abs(i - cy) <= n / 2)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
