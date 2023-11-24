/* ===================================================
//----------------------------------------------------
给定三个整数，请你找出它们中的最大值。
//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define Pi 3.14159
int MaxValueBetween(int a, int b)
{
	return (a + b + abs(a - b)) / 2;
}
int MaxValueAmong()
{
	int integerA = 0, integerB = 0, integerC = 0;
	cin >> integerA >> integerB >> integerC;
	integerA = MaxValueBetween(integerA, integerB);
	integerA = MaxValueBetween(integerA, integerC);
	cout << integerA <<" eh o maior" << endl;
	return 0;
}
