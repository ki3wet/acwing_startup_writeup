#include<iostream>
using namespace std;
int get(string s)
{
    if (s == "Hunter") return 0;
    if (s == "Bear") return 1;
    return 2;
}
int RecuitCircle()
{
    int n;
    cin >> n;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        int x = get(a), y = get(b);
        if (x == y) cout << "Tie" << endl;
        else if ((x + 1) % 3 == y) cout << "Player2" << endl;
        else cout << "Player1" << endl;
    }
    return 0;
}
