#include<iostream>
#include<cmath>
#include<iomanip>
#include <string>
using namespace std;

int IgnoringCaseCompareStringSize()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	
	for (auto& iter : s1)
	{
		iter = tolower(iter);
	}
	for (auto& iter : s2)
	{
		iter = tolower(iter);
	}

	cout << ((s1 > s2) ? ">" : ((s1 == s2) ? "=" : "<"));
}