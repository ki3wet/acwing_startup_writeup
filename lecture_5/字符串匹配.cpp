#include<iostream>
#include<cmath>
#include<iomanip>
#include <string>
using namespace std;

int StringMatch()
{
	double n, cnt = 0;
	string s1, s2;
	cin >> n >> s1 >> s2;
	for (size_t i = 0; i < s1.size(); i++)
	{
		if (s1[i] == s2[i])
		{
			cnt++;
		}
	}
	cout << (((cnt / s1.size()) >= n) ? "yes" : "no");
	return 0;
}