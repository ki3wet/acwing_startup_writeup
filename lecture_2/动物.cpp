/*//----------------------------------------------------
�����������������ﵥ�ʣ���Щ�ʽ������±�����Ҷ���һ�����
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
		if (res == "iih") // �������
		{
			if (animalName[2] == "hematofago") cout << "pulga";
			else cout << "lagarta";
		}
		if (res == "iah") cout << "sangueresuga";
		if (res == "iao") cout << "minhoca";
	}
	return 0;
	
}