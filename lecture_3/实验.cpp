#include <bits/stdc++.h>
using namespace std;
struct stu // �ṹ�飬���������
{
    int n; // ����
    char s; // ���
};
int Experiment()
{
    int n, c, r, f, sum; // �򵥵Ķ����������
    double chang, tiao, rap; // ��֬666, ����ָ����c, r, f�ֱ�ռ�������İٷ�֮����
    stu a[101]; // ����ṹ��
    c = r = f = sum = 0; // һ�ָ߼��ĸ�ֵ����, �ܼ򵥾��ܿ���
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].n >> a[i].s;
        sum += a[i].n;
        if (a[i].s == 'C') c += a[i].n; // �ۼ�
        if (a[i].s == 'R') r += a[i].n; // �ۼ�
        if (a[i].s == 'F') f += a[i].n; // �ۼ�
    }
    chang = double(c) / double(sum) * 100; //���㣬����Ҫ��100����Ϊ����ǰٷ���
    tiao = double(r) / double(sum) * 100;
    rap = double(f) / double(sum) * 100;
    printf("Total: %d animals\nTotal coneys: %d\nTotal rats: %d\nTotal frogs: %d\nPercentage of coneys: %.2lf %\nPercentage of rats: %.2lf %\nPercentage of frogs: %.2lf %\n", sum, c, r, f, chang, tiao, rap);
    // һ���ֳ��ֳ���printf������
    return 0;
}

