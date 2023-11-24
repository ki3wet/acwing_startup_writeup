/* ===================================================
//----------------------------------------------------

// 读取一个整数值，它是工厂中某个事件的持续时间（以秒为单位），请你将其转换为小时：分钟：秒来表示。

//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int TransportTimeStyle()
{
	int timeOrigin;
	int time[3] = {0};
	cin >> timeOrigin;
	for (int i = 2; i >=0; i--)
	{
		int tmp = pow(60, i);
		time[i] = timeOrigin / tmp;
		timeOrigin -= tmp*time[i];
	}
	cout << time[2] << ":" << time[1] << ":" << time[0] << endl;
	return 0;
}