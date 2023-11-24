/* ===================================================
//----------------------------------------------------
给定你两个产品的产品编号，产品数量以及产品单价。

请你计算买下两种产品一共需要花费多少钱。
//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int CaculateNum()
{
	int productNum[2], productCount[2];
	double price[2];
	cin >> productNum[0] >> productCount[0] >> price[0];
	cin >> productNum[1] >> productCount[1] >> price[1];
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << productCount[0] * price[0] + productCount[1] * price[1] << endl;
	return 0;
}
