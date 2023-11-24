#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int TriangleType()
{
	double sideA, sideB, sideC;
	cin >> sideA >> sideB >> sideC;

	if (sideA < sideB)
	{
		double tmp = sideA;
		sideA = sideB;
		sideB = tmp;
	}
	if (sideB<sideC)
	{
		double tmp = sideB;
		sideB = sideC;
		sideC = tmp;
	}
	if (sideA < sideB)
	{
		double tmp = sideA;
		sideA = sideB;
		sideB = tmp;
	}
	if (sideA < sideB + sideC)
	{
		if (sideA * sideA >= sideB * sideB + sideC * sideC)
		{
			cout << ((sideA * sideA == sideB * sideB + sideC * sideC) ? "TRIANGULO RETANGULO" : "TRIANGULO OBTUSANGULO") << endl;
		}
		else
		{
			cout << "TRIANGULO ACUTANGULO" << endl;
		}
		if (sideB == sideC || sideA == sideB || sideA == sideC)
		{
			cout << ((sideA == sideB && sideB == sideC) ? "TRIANGULO EQUILATERO" : "TRIANGULO ISOSCELES") << endl;
		}
	}
	else
	{
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	return 0;
}