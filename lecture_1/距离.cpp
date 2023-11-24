/* ===================================================
//----------------------------------------------------
两辆汽车在同一地点，同时，沿同一方向前进。
一辆车的速度为 60 km/h，另一辆车的速度为 90 km/h。
显然，快车与慢车的距离会不断拉开，每过一个小时（60分钟），两车的距离就拉开30公里。
现在，告诉你两车之间的距离为L公里，请你求出两车已经行驶了多长时间？
//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define Pi 3.14159

int CarDistance() 
{
	double L = 0, time = 0;
	double VelocityCar1 = 60, VelocityCar2 = 90;
	cin >> L;
	time = (60 * L) / (VelocityCar2 - VelocityCar1);
	cout << (int)time << " minutos" << endl;
	return 0;
}