#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Even()
{
	for (size_t i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}
	return 0;
}