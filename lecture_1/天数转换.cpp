/* ===================================================
//----------------------------------------------------
��ȡ��Ӧ��һ���˵����䣨����Ϊ��λ��������ֵ����ת��Ϊ�꣬�º��ձ�ʾ��ʽ������ꡢ�¡��շֱ��Ӧ ano(s), mes(es), dia(s)��

ע�⣺Ϊ�˷�����㣬����ȫ�� 365
 �죬ÿ�� 30
 �졣 ���ݱ�֤��������� 12
 ���ºͼ������������� 360,363
 �� 364
��


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