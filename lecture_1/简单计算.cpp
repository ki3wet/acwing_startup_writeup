/* ===================================================
//----------------------------------------------------
������������Ʒ�Ĳ�Ʒ��ţ���Ʒ�����Լ���Ʒ���ۡ�

��������������ֲ�Ʒһ����Ҫ���Ѷ���Ǯ��
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
