/* ===================================================
//----------------------------------------------------
读取两个整数 A
 和 B
，表示游戏的开始时间和结束时间，以小时为单位。

然后请你计算游戏的持续时间，已知游戏可以在一天开始并在另一天结束，最长持续时间为 24
 小时。

如果 A
 与 B
 相等，则视为持续了 24
 小时。
//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int PlayingTime()
{
	int firDay = 0, secDay = 0;
	int timeInterval = 0;
	cin >> firDay >> secDay;
	if (secDay <= firDay)
	{
		secDay += 24;
	}
	timeInterval = secDay - firDay;
	cout << "O JOGO DUROU " << timeInterval << " HORA(S)" << endl;
	return 0;
}