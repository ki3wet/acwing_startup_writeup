#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int PointCoordinate()
{
	double x, y;
	cin >> x >> y;

	if (x == 0 && y == 0)
	{
		cout << "Origem";
	}
	else if (x * y == 0)
	{
		cout << ((x == 0) ? "Eixo Y" : "Eixo X");
	}
	else if (x > 0)
	{
		cout << ((y > 0) ? "Q1" : "Q4");
	}
	else
	{
		cout << ((y > 0) ? "Q2" : "Q3");
	}
	return 0;
}