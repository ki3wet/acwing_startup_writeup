/* ===================================================
//----------------------------------------------------

// 读取一个带有两个小数位的浮点数，这代表货币价值。

在此之后，将该值分解为多种钞票与硬币的和，每种面值的钞票和硬币使用数量不限，要求使用的钞票和硬币的总数量尽可能少。

钞票的面值是 100,50,20,10,5,2
。

硬币的面值是 1,0.50,0.25,0.10,0.05
 和 0.01
。

经过实验证明：在本题中，优先使用面额大的钞票和硬币可以保证所用的钞票和硬币总数量最少。

//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void ChangeNotes(double &money, int* notes)
{
	int tmp = 0;
	cout <<fixed<<setprecision(2) << "NOTAS:" << endl;
	for (int i = 0; i < 6; i++)
	{
		tmp = int(money / notes[i]);
		money = money - notes[i] * tmp;
		cout << tmp << " nota(s) de R$ " << (double)notes[i] << endl;
	}
}
void ChangeMoedas(double &money, double* moedas)
{
	int tmp = 0;
	cout << "MOEDAS:" << endl;
	for (int i = 0; i < 6; i++)
	{
		tmp = int(money / moedas[i] + 10e-3);
		money = money - moedas[i] * tmp;
		cout << tmp << " moeda(s) de R$ " <<moedas[i] << endl;
	}
}
int CashAndCoin()
{
	int arrCash[6] = { 100,50,20,10,5,2 };
	double arrCoin[6] = { 1,0.50,0.25,0.10,0.05,0.01 };
	double money = 0;
	cin >> money;
	ChangeNotes(money, arrCash);
	ChangeMoedas(money, arrCoin);
	return 0;
}
