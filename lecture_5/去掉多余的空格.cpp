#include<iostream>
#include<cmath>
#include<iomanip>
#include <string>
using namespace std;

int RemoveExtraSpace()
{
	string str, res = "";
	getline(cin, str);
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			while (str[i + 1] == ' ')
			{
				i++;
			}
			res = res + ' ';
		}
		else
		{
			res = res + str[i];
		}
		
	}
	cout << res << endl;
}