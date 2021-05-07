#include <bits/stdc++.h>

using namespace std;
int f[200002], d[200002];   //f保存祖先节点，d保存到其祖先节点的路径长。

inline int in() {
    int x = 0, c = 0;
    for (; !isdigit(c); c = getchar());
    for (; isdigit(c); c = getchar())x = (x << 3) + (x << 1) + c - '0';
    return x;
}

inline int fa(int x) {
    if (f[x] != x)                       //查找时沿途更新祖先节点和路径长。
    {
        int last = f[x];                 //记录父节点（会在递归中被更新）。
        f[x] = fa(f[x]);                 //更新祖先节点。
        d[x] += d[last];                 //更新路径长（原来连在父节点上）。
    }
    return f[x];
}

int main() {
    int i, t, n, minn;
    n = in();
    for (i = 1; i <= n; i++) f[i] = i;         //祖先节点初始化为自己，路径长为0。
    minn = 0x7777777;
    for (i = 1; i <= n; i++) {
        t = in();
        int x = fa(i), y = fa(t);               //查找祖先节点。
        if (x != y) {
            f[x] = y;
            d[i] = d[t] + 1;
        }   //若不相连，则连接两点，更新父节点和路径长。
        else minn = min(minn, d[i] + d[t] + 1);                    //检查当前两点是否已有边相连接。
    }
    printf("%d", minn);
    return 0;
}