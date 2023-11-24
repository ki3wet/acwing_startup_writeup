/* ===================================================
//----------------------------------------------------
给定你一个球体的半径 R
，请你计算球体的体积。
计算球体的公式为 V=(4/3)∗π∗R3。
π取 3.14159.
注意：有些语言中 (4/3)
 无法得到 1.3333…
，建议在公式中使用 (4/3.0)。
//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define Pi 3.14159

int SphereVolume()
{
	double radius = 0;
	cin >> radius;
	double volume = pow(radius, 3) * Pi * (4 / 3.0);
	cout <<"VOLUME = "<<fixed<<setprecision(3) << volume << endl;
	return 0;
}