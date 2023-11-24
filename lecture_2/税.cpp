#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Tax()
{
	double salary[] = { 0.00, 2000.00, 3000.00, 4500.00, 5000.00 };
	double taxes[] = { 0.00, 0.08, 0.18, 0.28 };
	double personSalary = 0;
	double income = 0;
	cin >> personSalary;
	int flag = 0;
	for (int i = 0; i < 5; i++)
	{
		if (salary[i] < personSalary)
		{
			flag = i;
		}
	}
	if (personSalary <= 2000)
	{
		cout << "Isento" << endl;
	}
	else
	{
		for (int i = flag; i >= 0; i--)
		{
			if (i != 0)
			{
				income += (personSalary - salary[i]) * taxes[i];
				personSalary -= (personSalary - salary[i]);
			}
			else
			{
				cout <<fixed<<setprecision(2) << "R$ " << income << endl;
			}
		}
	}
	return 0;
}