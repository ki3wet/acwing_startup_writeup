#include<iostream>
#include<cmath>
#include<iomanip>
#include <string>
using namespace std;

int StringAddSpace()
{
	string a;
	getline(cin, a);
	for (auto& iter : a)
	{
		cout << iter << ' ';
	}
	return 0;
}