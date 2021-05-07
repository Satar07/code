#include <bits/stdc++.h>

#define N_MAX 10005
#define mod 80112002

using namespace std;

inline int in() {
    int n = 0, c = 0;
    for (; !isdigit(c); c = getchar());
    for (; isdigit(c); c = getchar())n = (n << 3) + (n << 1) + c - '0';
    return n;
}

vector<int> p[N_MAX], q_out;
queue<int> q_in;

int f[N_MAX], in_d[N_MAX], out_d[N_MAX];

int main() {
    int n = in(), m = in(), ans = 0, x, y;
    for (int i = 1; i <= m; ++i) {
        x = in(), y = in(); //x->y
        out_d[x]++, in_d[y]++;  //存储出入度
        p[x].push_back(y);
    }
    for (int i = 1; i <= n; ++i) { //将入度为0的加入队列
        if (!in_d[i])
            q_in.push(i),f[i]=1;
        if (!out_d[i])
            q_out.push_back(i);
    }
    while (!q_in.empty()) {  //Topo
        x = q_in.front();
        q_in.pop();
        for (int i:p[x]) {
            f[i] = (f[x] + f[i]) % mod;
            in_d[i]--;
            if (!in_d[i])
                q_in.push(i);
        }
    }
    for (int i:q_out) {
        ans = (ans + f[i]) % mod;
    }
    cout << ans;
}