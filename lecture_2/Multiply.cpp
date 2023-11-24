/* ===================================================
//----------------------------------------------------
读取两个正整数值 A
 和 B
。

如果其中一个是另一个的整数倍，则输出 Sao Multiplos，否则输出 Nao sao Multiplos。
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