/* ===================================================
/----------------------------------------------------
ABC 公司决定给员工加薪，加薪情况如下所示：

    薪水                涨薪幅度
0 - 400.00                15%
400.01 - 800.00           12%
800.01 - 1200.00          10%
1200.01 - 2000.00         7%
超过 2000.00              4%
读取员工的工资，计算并输出员工的新工资，以及员工增加的收入和涨薪幅度。
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
        if (salary > salaryInterval[i] && salary <= salaryInterval[i + 1]) //利用数组确定范围
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
