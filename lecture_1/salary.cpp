/* ===================================================
//----------------------------------------------------

// ���дһ�����򣬿��Զ�ȡһ��Ա����Ա����ţ����¹�����ʱ����Сʱ���Լ�ʱн����������Ĺ��������������а���Ա����ź�Ա�������롣

//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Salary()
{
	int num;
	float workHour, hourWage;
	cin >> num >> workHour >> hourWage;
	cout << "NUMBER = " << num << endl 
		<< "SALARY = U$ " <<fixed<<setprecision(2) << workHour * hourWage << endl;
	return 0;
}