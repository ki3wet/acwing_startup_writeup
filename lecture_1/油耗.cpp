/* ===================================================
//----------------------------------------------------

// 给定一个汽车行驶的总路程（km
）和消耗的油量（l
），请你求出汽车每消耗 1
 升汽油可行驶多少公里路程。

//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int FoulConsumption()
{
	int distant;
	double rest;
	cin >> distant >> rest;
	cout << fixed << setprecision(3) << distant / rest<<" km/l" << endl;
	return 0;
}