#include<iostream>
#include<cmath>
#include<iomanip>
#include <string>
using namespace std;

int CoutString()
{
	string str;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++)
	{
		cout << (char)(str[i] + str[(i + 1) % str.size()]);
	}
	return 0;
}