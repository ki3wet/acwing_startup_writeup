/*//----------------------------------------------------
��ȡ���������� A��B
 �� C
 ����֤�Ƿ�����������γ������Ρ�

������ܣ�����㲢��������ε��ܳ���

Perimetro = XX.X

��������ܣ�����㲢����� A
 �� B
 Ϊ���� C
 Ϊ�ߵ����������

Area = XX.X
//----------------------------------------------------
================================================== = */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Triangle()
{
	double sideA, sideB, sideC;
	cin >> sideA >> sideB >> sideC;
	if (sideA + sideB > sideC && fabs(sideA - sideB) < sideC)
	{
		cout <<fixed<<setprecision(1) << "Perimetro = " << sideA + sideB + sideC << endl;
	}
	else
	{
		cout << fixed << setprecision(1) << "Area = " << (sideA + sideB) * sideC * 0.5 << endl;
	}
	return 0;
}