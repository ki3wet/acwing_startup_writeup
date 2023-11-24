#include<iostream>
#include<cmath>
#include<iomanip>
#include <string>
using namespace std;

int CharactersOnce()
//{
//	string str;
//	getline(cin, str);
//	
//	int* cnt = new int[100];
//	memset(cnt, 0, sizeof(cnt));
//
//	for (auto i : str)
//	{
//		cnt[i]++;
//	}
//
//	for (auto i : str)
//	{
//		if (cnt[i] == 1)
//		{
//			cout << i << endl;
//			return 0;
//		}
//	}
//	cout << "no" << endl;
//	delete[] cnt;
//	return 0;
//}

{
	string str;
	while (getline(cin, str))
	{
		for (size_t i = 0; i < str.size(); i++)
		{
			if (str.rfind(str[i]) == str.find(str[i]))
			{
				cout << str[i] << endl;
				return 0;
			}
		}
		cout << "no" << endl;
	}
	return 0;
}