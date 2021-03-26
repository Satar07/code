#include <bits/stdc++.h>

using namespace std;
const int inf = 1 << 8;
int n, value[260], winner[260];

inline int in() {
    int num = 0, w = 1;
    char ch = 0;
    while (ch < '0' || ch > '9') {
        if (ch == '-') w = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') num = (num << 3) + (num << 1) + ch - '0', ch = getchar();
    return num * w;
}

void dfs(int x) {
    if (x >= 1 << n)
        return;
    dfs(x << 1);
    dfs((x << 1) + 1);
    int lvalue = value[x << 1], rvalue = value[(x << 1) + 1];
    if (lvalue < rvalue) {
        value[x] = rvalue;
        winner[x] = winner[(x << 1) + 1];
    } else {
        value[x] = lvalue;
        winner[x] = winner[x << 1];
    }
}

int main() {
    n = in();
    for (int i = 0; i < 1 << n; ++i) {
        value[(1 << n) + i] = in();
        winner[(1 << n) + i] = i + 1;
    }
    dfs(1);
    cout << (value[2] > value[3] ? winner[3] : winner[2]);
}