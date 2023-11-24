#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int IncrementSequence()
{
	int n, size;
	cin >> size;
	while (cin >> n, n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << n << " ";
		}
		cout << endl;
	}
	return 0;
}