/* ===================================================
//----------------------------------------------------
��ȡ����������ֵ A
 �� B
��

�������һ������һ����������������� Sao Multiplos��������� Nao sao Multiplos��
//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Multiply()
{
	int A, B;
	cin >> A >> B;
	int tmpLarge = (A + B + abs(A - B)) / 2;
	int tmpSmall = (A + B - abs(A - B)) / 2;
	if (tmpLarge % tmpSmall == 0)
	{
		cout << "Sao Multiplos" << endl;
	}
	else
	{
		cout << "Nao sao Multiplos" << endl;
	}
	return 0;
}