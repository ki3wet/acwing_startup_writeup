#include<iostream>
#include<cmath>
#include<iomanip>
#include <string>
using namespace std;

int ReplaceChar()
{
	string str;
	char var;
	getline(cin, str);
	cin >> var;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == var)
		{
			str[i] = '#';
		}
	}
	return 0;
}