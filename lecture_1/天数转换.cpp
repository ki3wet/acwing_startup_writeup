/* ===================================================
//----------------------------------------------------
读取对应于一个人的年龄（以天为单位）的整数值，并转化为年，月和日表示方式输出，年、月、日分别对应 ano(s), mes(es), dia(s)。

注意：为了方便计算，假设全年 365
 天，每月 30
 天。 数据保证，不会出现 12
 个月和几天的情况，例如 360,363
 或 364
。


//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int TransDayAge()
{
	int dayNum = 0;
	cin >> dayNum;
	int year = dayNum / 365;
	int month = (dayNum - year * 365) / 30;
	int day = dayNum - year * 365 - month * 30;
	cout << year << " ano(s)" << endl << month << " mes(es)" << endl << day << " dia(s)" << endl;
	return 0;
}