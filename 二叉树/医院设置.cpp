#include <bits/stdc++.h>
/*
 * f[v]=f[u]+size[1]?size[v]?size[v]
 *
 * 怎么来的呢？试想，当根从u变为v的时候，v的子树的所有节点原本的距离要到uu，现在只要到vv了，每个结点的距离都减少1，那么总距离就减
 * 少size[v]size[v]，同时，以v为根的子树以外的所有节点，原本只要到uu就行了，现在要到vv，每个节点的路程都增加了1，总路程就增加了
 * size[1]-size[v]size[1]?size[v]，其中size[1]size[1]就是我们预处理出来的整棵树的大小，减去size[v]size[v]就是除以v为根
 * 的子树以外的结点数。
 *
 * */
using namespace std;
struct node {
    int left, right, value;
};

node t[102];
int size[102], f[102];

void dfs(int x) {
    if (t[x].left)dfs(t[x].left);
    if (t[x].right)dfs(t[x].right);
    size[x] = size[t[x].right] + size[t[x].left] + t[x].value;
    f[x] = f[t[x].left] + f[t[x].right] + size[t[x].left] + size[t[x].right];//递归出来的f[1]就是根节点出发的距离
}

void dfs1(int x) {
    if (t[x].left) {
        f[t[x].left] = f[x] + size[1] - 2 * size[t[x].left];
        dfs1(t[x].left);
    }
    if (t[x].right) {
        f[t[x].right] = f[x] + size[1] - 2 * size[t[x].right];
        dfs1(t[x].right);
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> t[i].value >> t[i].left >> t[i].right;
    }
    dfs(1);
    dfs1(1);
    int res = 113599;
    for (int i = 1; i <= n; ++i) {
        res = min(res, f[i]);
    }
    cout<<res;
    return 0;
}
