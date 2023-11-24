/* ===================================================
//----------------------------------------------------
某商店出售 5种零食，零食编号为 1∼5。
5种零食的价目表如下所示：

零食种类        价格
零食  1         R$ 4.00
零食  2         R$ 4.50
零食  3         R$ 5.00
零食  4         R$ 2.00
零食  5         R$ 1.50
现在给定某种零食的编号和数量，请你计算总价值是多少。
//----------------------------------------------------
=================================================== */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Snack()
{
	int number = 0, quantity = 0;
	double arrPrice[5] = { 4.00, 4.50, 5.00, 2.00, 1.50 };
	cin >> number >> quantity;
	double value = arrPrice[number - 1] * quantity;
	cout << "Total: R$ " << fixed << setprecision(2) << value << endl;
	return 0;
}