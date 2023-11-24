#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int DDD()
{
	int arrDDD[8] = { 61, 71, 11, 21, 32, 19, 27, 31 };
	string destination[8] = {
	"Brasilia", "Salvador", "Sao Paulo", 
	"Rio de Janeiro", "Juiz de Fora", 
	"Campinas" ,"Vitoria", "Belo Horizonte"
	};
	int ans;
	cin >> ans;
	int tmp = 0;
	for (int i=0; i < 8; i++)
	{
		if (ans == arrDDD[i])
		{
			tmp = ans;
			cout << destination[i] << endl;	
			break;
		}
	}
	if (tmp == 0)
	{
		cout << "DDD nao cadastrado" << endl;
	}
	return 0;
}

int DDD2()
{
	int x;
	cin >> x;
	switch (x)
	{
	case 61:
		cout << "Brassilia" << endl; break;
	case 71:
		cout << "Salvador" << endl; break;
	case 11:
		cout << "Sao Paulo" << endl; break;
	case 21:
		cout << "Rio de Janeiro" << endl; break;
	case 32:
		cout << "Juiz de Fora" << endl; break;
	case 19:
		cout << "Campinas" << endl; break;
	case 27:
		cout << "Vitoria" << endl; break;
	case 31:
		cout << "breakelo Horizonte" << endl; break;
	default:
		cout << "DDD nao cadastrado" << endl; break;
	}
	return 0;
}