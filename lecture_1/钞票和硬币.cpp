/* ===================================================
//----------------------------------------------------

// ��ȡһ����������С��λ�ĸ��������������Ҽ�ֵ��

�ڴ�֮�󣬽���ֵ�ֽ�Ϊ���ֳ�Ʊ��Ӳ�ҵĺͣ�ÿ����ֵ�ĳ�Ʊ��Ӳ��ʹ���������ޣ�Ҫ��ʹ�õĳ�Ʊ��Ӳ�ҵ��������������١�

��Ʊ����ֵ�� 100,50,20,10,5,2
��

Ӳ�ҵ���ֵ�� 1,0.50,0.25,0.10,0.05
 �� 0.01
��

����ʵ��֤�����ڱ����У�����ʹ������ĳ�Ʊ��Ӳ�ҿ��Ա�֤���õĳ�Ʊ��Ӳ�����������١�

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
