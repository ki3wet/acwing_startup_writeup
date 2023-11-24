#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int SelectContact()
{
	int integerA, integerB, integerC, integerD;
	cin >> integerA >> integerB >> integerC >> integerD;
	/*if (integerD > integerA && integerB > integerC && (integerC + integerD) > (integerA + integerB) && integerC > 0 && integerD > 0 && integerA % 2 == 0)
	{
		cout << "Valores aceitos" << endl;
	}
	else
	{
		cout << "Valores nao aceitos" << endl;
	}*/
	cout << ((integerD > integerA && integerB > integerC && (integerC + integerD) > (integerA + integerB) && integerC > 0 && integerD > 0 && integerA % 2 == 0) ? "Valores aceitos" : "Valores nao aceitos") ;
	return 0;
}