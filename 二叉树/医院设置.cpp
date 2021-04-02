#include <bits/stdc++.h>
/*
 * f[v]=f[u]+size[1]?size[v]?size[v]
 *
 * ��ô�����أ����룬������u��Ϊv��ʱ��v�����������нڵ�ԭ���ľ���Ҫ��uu������ֻҪ��vv�ˣ�ÿ�����ľ��붼����1����ô�ܾ���ͼ�
 * ��size[v]size[v]��ͬʱ����vΪ����������������нڵ㣬ԭ��ֻҪ��uu�����ˣ�����Ҫ��vv��ÿ���ڵ��·�̶�������1����·�̾�������
 * size[1]-size[v]size[1]?size[v]������size[1]size[1]��������Ԥ����������������Ĵ�С����ȥsize[v]size[v]���ǳ���vΪ��
 * ����������Ľ������
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
    f[x] = f[t[x].left] + f[t[x].right] + size[t[x].left] + size[t[x].right];//�ݹ������f[1]���Ǹ��ڵ�����ľ���
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
