#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int CompletelyNum()
{
	int n, num, sum;
	cin >> n;
	while (n--)
	{
		sum = 0;
		cin >> num;
		int sqrtNum = sqrt(num);
		for (int i = 1; i <= sqrtNum; i++)
		{
			if (num % i == 0)
			{
				sum += i;
				sum += (num / i);
			}
		}
		sum -= num;
		if (sum == num && num!=1)
		{
			cout << num << " is perfect" << endl;
		}
		else
		{
			cout << num << "is not perfect" << endl;
		}
	}
	return 0;
}