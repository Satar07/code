#include <bits/stdc++.h>

#define MAX_N (1<<15)
using namespace std;

int in_d[MAX_N], tran[MAX_N], vis[MAX_N];

inline int in() {
    int n = 0, c = 0;
    for (; !isdigit(c); c = getchar());
    for (; isdigit(c); c = getchar()) n = (n << 3) + (n << 1) + c - '0';
    return n;
}

int main() {
    vector<pair<int, int> > sd[MAX_N];
    vector<pair<int, int> > n_sd[MAX_N];
    priority_queue<int> q;
    int n = in(), m = in(), x, y, w, start_p;
    bool fir = false;
    for (int i = 1; i <= m; ++i) {
        x = in(), y = in(), w = in();
        n_sd[x].emplace_back(y, w);  //正向建边
        sd[y].emplace_back(x, w);  //反向建边
        in_d[y]++;
    }
    for (int i = 1; i <= n; i++) {
        if (!in_d[i]) {
            q.push(i);
        }
    }
    while (!q.empty()) {
        int temp = q.top();
        if (!fir and temp == 1)fir = true;
        q.pop();
        for (auto i :n_sd[temp]) {
            if (!--in_d[i.first])
                q.push(i.first);
        }
        if (fir) {
            for (auto i :sd[temp]) {
                if (vis[i.first]) {
                    tran[temp] = max(tran[i.first] + i.second, tran[temp]);
                }
            }
            vis[temp] = true;
        }
        if (temp == n) break;
    }
    cout << (tran[n] ? tran[n] : -1);
}