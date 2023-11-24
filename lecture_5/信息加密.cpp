#include<iostream>
#include<cmath>
#include<iomanip>
#include <string>
using namespace std;

int InfoEncryption()
{
	string str;
	getline(cin, str);
	for (auto& iter : str)
	{
		if (iter >= 'a' && iter <= 'z')
		{
			iter = (iter - 'a' + 1) % 26 + 'a';
		}
		else if (iter >= 'A' && iter < 'Z')
		{
			iter = (iter - 'A' + 1) % 26 + 'A';
		}
	}
	cout << str;
	return 0;
}