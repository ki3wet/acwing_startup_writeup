#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int PlayingTime2()
{
	int a, b, c, d, ans, res;
	cin >> a >> b >> c >> d;
	
	if (a == c && d == b)
	{
		ans = 0;
		res = 24;
	}
	else if (b<=d)
	{
		(a <= c) ? (res = c - a) : (c += 24, res = c - a);
		ans = d - b;
	}
	else if (b>d)
	{
		(a >= c) ? (c += 23, d += 60, res = c - a) : (c -= 1, d += 60, res = c - a);
		ans = d - b;
	}

	cout << "O JOGO DUROU " << res << " HORA(S) E " << ans << " MINUTO(S)" << endl;
	return 0;
}
