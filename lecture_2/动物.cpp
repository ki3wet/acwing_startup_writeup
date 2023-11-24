/*//----------------------------------------------------
给定你三个葡萄牙语单词，这些词将根据下表从左到右定义一个动物。
//----------------------------------------------------
================================================== = */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Animal()
{
	string animalName[3];
	string res;
	for (int i = 0; i < 3; i++)
	{
		cin >> animalName[i];
		res += animalName[i][0];

		if (res == "vac")
		{
			cout << "aguia";
		}
		if (res == "vao")
		{
			cout << "pomba";

		}
		if (res == "vmo") cout << "homem";
		if (res == "vmh") cout << "vaca";
		if (res == "iih") // 情况特殊
		{
			if (animalName[2] == "hematofago") cout << "pulga";
			else cout << "lagarta";
		}
		if (res == "iah") cout << "sangueresuga";
		if (res == "iao") cout << "minhoca";
	}
	return 0;
	
}