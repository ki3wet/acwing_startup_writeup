/* ===================================================
//----------------------------------------------------

// ����Բ������Ĺ�ʽ����Ϊ A=��R^2�������������ʽ��������Բ��������е�ȡֵΪ 3.14159��

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