#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int UnaryQuadratic()
{
	double a, b, c;
	cin >> a >> b >> c;
	double ans = b * b - 4 * a * c;
	if (ans < 0||a == 0)
	{
		cout << "Impossivel calcular";
	}
	else
	{
		cout << fixed << setprecision(5)<< "R1 = " << (-b - sqrt(ans)) / (2 * a) << endl;
		cout << "R2 = " << (-b + sqrt(ans)) / (2 * a) << endl;
	}
	return 0;
}