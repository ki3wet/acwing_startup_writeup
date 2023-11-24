/* ===================================================
//----------------------------------------------------
�������������� A��B�� C��
Ȼ�󣬼�������ͼ�ε������
�ױ�Ϊ A����Ϊ C�������Ρ�
�뾶 C��Բ������=3.14159��
�ױ�Ϊ A�� B����Ϊ C�����Ρ�
�߳�Ϊ B�������Ρ�
�߳�Ϊ A�� B�ĳ����Ρ�
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