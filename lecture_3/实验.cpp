#include <bits/stdc++.h>
using namespace std;
struct stu // 结构组，详见第七章
{
    int n; // 个数
    char s; // 类别
};
int Experiment()
{
    int n, c, r, f, sum; // 简单的定义计数变量
    double chang, tiao, rap; // 树脂666, 这里指的是c, r, f分别占了总数的百分之多少
    stu a[101]; // 定义结构组
    c = r = f = sum = 0; // 一种高级的赋值方法, 很简单就能看懂
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].n >> a[i].s;
        sum += a[i].n;
        if (a[i].s == 'C') c += a[i].n; // 累加
        if (a[i].s == 'R') r += a[i].n; // 累加
        if (a[i].s == 'F') f += a[i].n; // 累加
    }
    chang = double(c) / double(sum) * 100; //计算，这里要乘100，因为求的是百分数
    tiao = double(r) / double(sum) * 100;
    rap = double(f) / double(sum) * 100;
    printf("Total: %d animals\nTotal coneys: %d\nTotal rats: %d\nTotal frogs: %d\nPercentage of coneys: %.2lf %\nPercentage of rats: %.2lf %\nPercentage of frogs: %.2lf %\n", sum, c, r, f, chang, tiao, rap);
    // 一个又长又臭的printf输出语句
    return 0;
}

