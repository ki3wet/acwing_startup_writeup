#include<iostream>
#include<cmath>
#include<iomanip>
#include <string>
using namespace std;

int StringInsert()
{
	string a, sub;
	while (cin >> a >> sub)
	{
		int idx = 0;
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] > a[idx])
			{
				idx = i;
			}
		}
		a.insert(idx, sub);
		cout << a << endl;
	}
	return 0;
}