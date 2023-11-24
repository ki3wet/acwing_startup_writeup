/* ===================================================
/----------------------------------------------------
ABC ��˾������Ա����н����н���������ʾ��

    нˮ                ��н����
0 - 400.00                15%
400.01 - 800.00           12%
800.01 - 1200.00          10%
1200.01 - 2000.00         7%
���� 2000.00              4%
��ȡԱ���Ĺ��ʣ����㲢���Ա�����¹��ʣ��Լ�Ա�����ӵ��������н���ȡ�
//----------------------------------------------------
=================================================== */

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int Raise()
{
    double salaryInterval[6] = {0, 400, 800, 1200, 2000, 2500};
    double salaryAmplitude[5] = {0.15, 0.12, 0.10, 0.07, 0.04};
    double salary = 0;
    cin >> salary;
    double sum, ans, res;
    for (int i = 0; i < 5; i++)
    {
        if (salary > salaryInterval[i] && salary <= salaryInterval[i + 1]) //��������ȷ����Χ
        {
            sum = salary * salaryAmplitude[i];
            ans = salary + sum;
            res = salaryAmplitude[i] * 100;    
        }
    }
    printf("Novo salario: %.2lf\n", ans);
    printf("Reajuste ganho: %.2lf\n", sum);
    printf("Em percentual: %d %%\n", (int)res);
    return 0;
}
