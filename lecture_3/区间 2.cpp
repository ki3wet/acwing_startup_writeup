#include<bits/stdc++.h>
using namespace std;

int Interval()
{
	int size, n, ans=0, res=0;
	cin >> size;

	for (size_t i = 1; i <= size; i++)
	{
		cin >> n;
		if (n >= 10 && n <= 20)
		{
			ans++;
		}
		else
		{
			res++;
		}
	}
	cout << ans << "in" << endl;
	cout << res << "out" << endl;
	return 0;
}