#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int SequenceSum()
{
	int n, m, sum = 0;
	while (cin >> n >> m, n > 0 && m > 0)
	{
		sum = 0;
		if (n>m)
		{
			swap(n, m);
		}
		for (int i = n; i <= m; i++)
		{
			cout << i << " ";
			sum += i;
		}
		cout << "Sum=" << sum << endl;
	}
	return 0;
}