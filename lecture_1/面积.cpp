/* ===================================================
//----------------------------------------------------
给定三个浮点数 A，B和 C。
然后，计算如下图形的面积：
底边为 A，高为 C的三角形。
半径 C的圆。（π=3.14159）
底边为 A和 B，高为 C的梯形。
边长为 B的正方形。
边长为 A和 B的长方形。
//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define Pi 3.14159

int ShapeArea()
{
	double A, B, C;
	cin >> A >> B >> C;
	double triArea = A * C * 1 / 2.0;
	double circleArea = Pi * pow(C, 2);
	double trapeziumArea = (A + B) * C * 1 / 2.0;
	double squareArea = pow(B, 2);
	double rectangeArea = A * B;
	cout << fixed << setprecision(3) << "TRIANGULO: " << triArea << endl;
	cout << "CIRCULO: " << circleArea << endl;
	cout << "TRAPEZIO: " << trapeziumArea << endl;
	cout << "QUADRADO: " << squareArea << endl;
	cout << "RETANGULO: " << rectangeArea << endl;
	return 0;
}