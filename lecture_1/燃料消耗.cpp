/* ===================================================
//----------------------------------------------------
һ������ÿ��ʻ 12
 ������Ҫ���� 1
 �����ͣ����ڸ��������������ʻ�ٶ� S
��km/h
������ʻʱ�� T
��h
�����������ó�����ʻ������һ�������˶��������͡�
//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define Pi 3.14159

int FuelConsume()
{
	double fuelPerKilometer = 1 / 12.0;
	long long S = 0, T = 0;
	cin >> S >> T;
	double fuelConsumeTotal = S * T * fuelPerKilometer;
	cout << fixed << setprecision(3) << fuelConsumeTotal << endl;
	return 0;
}