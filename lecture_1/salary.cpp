/* ===================================================
//----------------------------------------------------

// 请编写一个程序，可以读取一名员工的员工编号，本月工作总时长（小时）以及时薪，并输出他的工资条，工资条中包括员工编号和员工月收入。

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