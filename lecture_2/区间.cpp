/* ===================================================
//----------------------------------------------------
给定一个浮点数，请你判断该数字属于以下哪个区间：[0,25],(25,50],(50,75],(75,100]
。

如果给定的数值小于 0
 或大于 100
，则程序输出 Fora de intervalo，表示超出范围。

开区间 (a,b)：在实数 a和实数b之间的所有实数，但不包含a和b。
闭区间 [a,b]：在实数 a和实数 b之间的所有实数，包含a和b。
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