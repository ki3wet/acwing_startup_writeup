#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int MultiplicationTable()
{
	int n;
	cin >> n;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " x " << n << " = " << i * n << endl;
	}
	return 0;
}