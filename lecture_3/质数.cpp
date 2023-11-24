#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Prime()
{
	int n, num, sqrtNum;
	bool flag;
	cin >> n;
	while (n--)
	{
		flag = 1;
		cin >> num;
		
		sqrtNum = sqrt(num);
		for (int i = 2; i <= sqrtNum; i++)
		{
			if (num % i == 0)
			{
				flag = 0;
				break;
			}
			else
			{
				flag = 1;
			}
		}
		if (!flag)
		{
			cout << num << " is prime" << endl;
		}
		else
		{
			cout << num << " is not prime" << endl;
		}

	}
	return 0;
}