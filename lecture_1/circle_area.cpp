/* ===================================================
//----------------------------------------------------

// 计算圆的面积的公式定义为 A=πR^2。请利用这个公式计算所给圆的面积。π的取值为 3.14159。

//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int CircleArea()
{
	double radius = 0;
	double res = 0;
	double Pi = 3.14159;
	cin >> radius;
	res = Pi * pow(radius, 2);
	cout << fixed << setprecision(4) << res << endl;
	return 0;
}