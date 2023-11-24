#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

//int SquareMatrix()
//{
//	int n;
//	while (cin >> n, n)
//	{
//		for (size_t i = 0; i < n; i++)
//		{
//			for (size_t j = 0; j < n; j++)
//			{
//				cout << min(min(i + 1, j + 1), min(n - i, n - j)) << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int SquareMatrix()
//{
//	int n;
//	while (cin >> n, n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (n % 2)
//				{
//					cout << (n + 1) / 2 - max(abs(n / 2 - i), abs(n / 2 - j)) << " ";
//				}
//				else
//				{
//					cout << (n + 1) / 2.0 - max(abs((n - 1) / 2.0 - i), abs((n - 1) / 2.0 - j)) << " ";
//				}
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//}

int SquareMatrixI()
{
	const int N = 100 + 10;
	int** m = new int* [N]; //通过堆分配内存
	for (size_t i = 0; i < N; i++)
	{
		m[i] = new int[N];
	}
	int n;
	int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, 1, 0, -1 };
	while (cin >> n, n)
	{
		for (int i = 0; i < N; ++i)
			for (int j = 0; j < N; ++j)
				m[i][j] = 0;
		int d = 1, x = 0, y = 0;
		int cnt = 0;
		int res = 1; //蛇形矩阵当前回型圈数，矩阵的元素值
		for (int i = 0; i < n*n; i++)
		{
			int a = x + dx[d], b = y + dy[d]; //移动
			m[x][y] = res;

			if (a < 0 || a >= n || b < 0 || b >= n || m[a][b]) //检测位置是否有效，若无效，执行下面代码
			{
				d = (d + 1) % 4; //改变方向
				a = x + dx[d], b = y + dy[d]; //重新计算移动
				cnt++; 
				if (!(cnt % 4))
				{
					res++;
				}
			}
			x = a, y = b; //更新当前位置
		}
		for (int i = 0; i < n; i++) //输出
		{
			for (int j = 0; j < n; j++)
			{
				cout << m[i][j] << " ";

			}
			cout << endl;
		}
	}

	for (size_t i = 0; i < N; i++)
	{
		delete[] m[i];
	}
	delete[] m;
	return 0;
}