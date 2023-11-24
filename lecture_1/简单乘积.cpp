/* ===================================================
//----------------------------------------------------
读取两个整数值。

在此之后，计算它们的乘积并将结果存储在名为 PROD 的变量中。

输出结果如下例所示。
//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int SimpleProduct()
{
	int integer1, integer2;
	cin >> integer1 >> integer2;
	cout << "PROD = " << integer1 * integer2 << endl;
	return 0;
}