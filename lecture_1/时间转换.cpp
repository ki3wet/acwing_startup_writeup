/* ===================================================
//----------------------------------------------------

// ��ȡһ������ֵ�����ǹ�����ĳ���¼��ĳ���ʱ�䣨����Ϊ��λ�������㽫��ת��ΪСʱ�����ӣ�������ʾ��

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