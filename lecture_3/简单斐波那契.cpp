#include<bits/stdc++.h>
using namespace std;

int SimpleFibonacci()
{
	int n, tmp;
	cin >> n;
	int a = 0, b = 1;
	while (n--)
	{
		cout << a << " ";
		tmp = a + b;
		a = b;
		b = tmp;
	}
	return 0;
}