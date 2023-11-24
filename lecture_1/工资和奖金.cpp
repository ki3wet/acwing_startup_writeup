/* ===================================================
//----------------------------------------------------
请你编写一个程序，给定你一个销售人员的名字，底薪以及月销售额。

请你计算他的月收入是多少。

已知月收入等于底薪加 15%
 的月销售额。

所有数据保留两位小数。
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