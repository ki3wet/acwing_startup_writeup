#include<bits/stdc++.h>
using namespace std;

struct IntergetPair
{
	int x = 0;
	int y = 0;
};
int ConsecutiveOddSums()
{
	int n, ans;
	IntergetPair pair;
	cin >> n;
	while (n--)
	{
		ans = 0;
		cin >> pair.x >> pair.y;
		for (int i = (pair.x<pair.y?pair.x:pair.y) + 1; i < (pair.x > pair.y ? pair.x : pair.y); i++)
		{
			if (i & 1)
			{
				ans += i;
			}
		}
		cout << ans << endl;
	}
	return 0;
}