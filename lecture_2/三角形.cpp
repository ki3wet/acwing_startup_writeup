/*//----------------------------------------------------
读取三个浮点数 A，B
 和 C
 并验证是否可以用它们形成三角形。

如果可能，则计算并输出三角形的周长：

Perimetro = XX.X

如果不可能，则计算并输出以 A
 和 B
 为底以 C
 为高的梯形面积：

Area = XX.X
//----------------------------------------------------
================================================== = */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Triangle()
{
	double sideA, sideB, sideC;
	cin >> sideA >> sideB >> sideC;
	if (sideA + sideB > sideC && fabs(sideA - sideB) < sideC)
	{
		cout <<fixed<<setprecision(1) << "Perimetro = " << sideA + sideB + sideC << endl;
	}
	else
	{
		cout << fixed << setprecision(1) << "Area = " << (sideA + sideB) * sideC * 0.5 << endl;
	}
	return 0;
}