/* ===================================================
//----------------------------------------------------
�����дһ�����򣬸�����һ��������Ա�����֣���н�Լ������۶

������������������Ƕ��١�

��֪��������ڵ�н�� 15%
 �������۶

�������ݱ�����λС����
//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define Pi 3.14159

int SalariesAndBonuses()
{
	string name = "";
	double salary = 0;
	double monthSales = 0;
	cin >> name >> salary >> monthSales;
	double bonuse = monthSales * 0.15;
	cout <<fixed<<setprecision(2) << "TOTAL = R$ " << salary + bonuse << endl;
	return 0;
}