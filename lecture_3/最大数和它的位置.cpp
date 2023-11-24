#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int MaxNumPosition()
{
	int data[100];
	int flag = 0;
	int pos = 0;
	for (int i = 0; i < 100; i++)
	{
		cin >> data[i];
		if (data[i] > flag)
		{
			pos = i;
			flag = data[i];
		}
	}
	cout << flag << endl << (pos + 1) << endl;
	return 0;
	
}