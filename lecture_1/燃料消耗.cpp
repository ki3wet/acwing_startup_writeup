/* ===================================================
//----------------------------------------------------
一辆汽车每行驶 12
 公里需要消耗 1
 升汽油，现在告诉你该汽车的行驶速度 S
（km/h
）和行驶时间 T
（h
），请你计算该车在行驶过程中一共消耗了多少升汽油。
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