/* ===================================================
//----------------------------------------------------
��ȡ�������� A
 �� B
����ʾ��Ϸ�Ŀ�ʼʱ��ͽ���ʱ�䣬��СʱΪ��λ��

Ȼ�����������Ϸ�ĳ���ʱ�䣬��֪��Ϸ������һ�쿪ʼ������һ������������ʱ��Ϊ 24
 Сʱ��

��� A
 �� B
 ��ȣ�����Ϊ������ 24
 Сʱ��
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