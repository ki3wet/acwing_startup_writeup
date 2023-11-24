#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Average()
{
	double	N1, N2, N3, N4, Y;
	cin >> N1 >> N2 >> N3 >> N4;
	double	media = (N1 * 2 + N2 * 3 + N3 * 4 + N4) / (2 + 3 + 4 + 1);
	cout <<fixed<<setprecision(1) <<"media: " << media << endl;

	if (media >= 7.0)
	{
		cout << "Aluno aprovado." << endl;
	}
	else if (media < 5.0)
	{
		cout << "Aluno reprovado." << endl;
	}
	else
	{
		cout << "Aluno em exame." << endl;
		cin >> Y;
		cout << "Nota do exame: " << Y << endl;
		double Z = (media + Y) / 2;
		if (Z >= 5.0)
		{
			cout << "Aluno aprovado." << endl;
		}
		else
		{
			cout << "Aluno reprovado." << endl;
		}
		cout << "Media final: " << Z;
	}
}