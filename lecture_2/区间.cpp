/* ===================================================
//----------------------------------------------------
����һ���������������жϸ��������������ĸ����䣺[0,25],(25,50],(50,75],(75,100]
��

�����������ֵС�� 0
 ����� 100
���������� Fora de intervalo����ʾ������Χ��

������ (a,b)����ʵ�� a��ʵ��b֮�������ʵ������������a��b��
������ [a,b]����ʵ�� a��ʵ�� b֮�������ʵ��������a��b��
//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Interval()
{
	double floatNum = 0;
	cin >> floatNum;
	if (floatNum<0||floatNum>100)
	{
		cout << "Fora de intervalo" << endl;
	}
	else if(floatNum>=0&&floatNum<=25)
	{
		cout << "Intervalo [0,25]" << endl;
	}
	else if (floatNum > 25 && floatNum <= 50)
	{
		cout << "Intervalo (25,50]" << endl;
	}
	else if (floatNum > 50 && floatNum <= 75)
	{
		cout << "Intervalo (50,75]" << endl;
	}
	else
	{
		cout << "Intervalo (75,100]" << endl;
	}
	return 0;
}