/* ===================================================
//----------------------------------------------------

// ����һ��������ʻ����·�̣�km
�������ĵ�������l
���������������ÿ���� 1
 �����Ϳ���ʻ���ٹ���·�̡�

//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int FoulConsumption()
{
	int distant;
	double rest;
	cin >> distant >> rest;
	cout << fixed << setprecision(3) << distant / rest<<" km/l" << endl;
	return 0;
}