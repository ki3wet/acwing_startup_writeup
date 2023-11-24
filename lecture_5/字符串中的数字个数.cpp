#include<iostream>
#include<cmath>
#include<iomanip>
#include <string>
using namespace std;

int StringDigtiCnt()
{
	string a;
	int cnt = 0;
	getline(cin, a);
	for (size_t i = 0; i < a.size(); i++)
	{
		if (isdigit(a[i]))
		{
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}