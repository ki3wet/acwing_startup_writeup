#include<bits/stdc++.h>
using namespace std;
int n, m, a[109][109], x, y, dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 }, u;
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n * m; ++i) {
        a[x][y] = i, x += dx[u], y += dy[u];
        if (x < 0 || y < 0 || x >= n || y >= m || a[x][y]) x -= dx[u], y -= dy[u], u = (u + 1) & 3, x += dx[u], y += dy[u];
    }
    for (int i = 0; i < n; ++i) { for (int j = 0; j < m; ++j) cout << a[i][j] << " "; cout << "\n"; }
}
