#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int MinPos()
{
	int n, pos = 0, res, tmp, respos;
	cin >> n;
	cin >> res;
	respos = pos;
	pos++;
	while (--n)
	{
		cin >> tmp;
		if (tmp < res)
		{
			res = tmp;
			respos = pos;
		}
		pos++;
	}
	cout << "Minimum value: " << res << endl  << "Position: " << respos;
	return 0;
}