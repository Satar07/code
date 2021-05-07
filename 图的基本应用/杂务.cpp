#include <bits/stdc++.h>

#define N_MAX 10005

using namespace std;

inline int in() {
    int n = 0, c = 0;
    for (; !isdigit(c); c = getchar());
    for (; isdigit(c); c = getchar())n = (n << 3) + (n << 1) + c - '0';
    return n;
}

int vis[N_MAX], len[N_MAX];

vector<int> link[N_MAX];

int dfs(int x) {
    if (vis[x]) return vis[x];
    for (int i : link[x]) {
        vis[x] = max(vis[x], dfs(i));
    }
    vis[x] += len[x];
    return vis[x];
}

int main() {
    int n = in(), x, y, ans = 0;
    for (int i = 1; i <= n; ++i) {
        x = in(), len[i] = in();
        while ((y = in()) != 0)
            link[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
        ans = max(ans, dfs(i));
    cout << ans;
}