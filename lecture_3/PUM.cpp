#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Pum()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= (n * m); i++)
	{
		
		
		if (i % m == 0)
		{
			cout <<"PUM" << endl;
		}
		else
		{
			cout << i << " ";
		}
	}
	return 0;
}