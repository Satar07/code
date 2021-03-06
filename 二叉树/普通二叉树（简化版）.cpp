#include <bits/stdc++.h>

using namespace std;
const int MAX_SIZE = 10010, INF = 2147483647;
int n, root, cc, opt, x;

struct node {
    int left, right, size, value, num;

    node(int l, int r, int s, int v)
            : left(l), right(r), size(s), value(v), num(1) {}

    node() {}
};

node t[MAX_SIZE];

inline void update(int root) {
    t[root].size = t[t[root].left].size + t[t[root].right].size + t[root].num;
}

int ran(int x, int root) {//查询树排名
    if (root) {
        if (x < t[root].value)
            return ran(x, t[root].left);
        if (x > t[root].value)
            return ran(x, t[root].right) + t[t[root].left].size + t[root].num;
        return t[t[root].left].size + t[root].num;
    }
    return 1;
}

int kth(int x, int root) {//查询排名为x的树
    if (x <= t[t[root].left].size)
        return kth(x, t[root].left);
    if (x <= t[t[root].left].size + t[root].num)
        return t[root].value;
    return kth(x - t[t[root].left].size - t[root].num, t[root].right);
}

void insert(int x, int &root) {
    if (x < t[root].value)
        if (!t[root].left)
            t[t[root].left = ++cc] = node(0, 0, 1, x);
        else
            insert(x, t[root].left);
    else if (x > t[root].value)
        if (!t[root].right)
            t[t[root].right = ++cc] = node(0, 0, 1, x);
        else
            insert(x, t[root].right);
    else
        t[root].num++;
    update(root);
}

int main() {
    cin >> n;
    int num = 0;
    t[root = ++cc] = node(0, 0, 1, INF);
    while (n--) {
        cin >> opt >> x;
        num++;
        switch (opt) {
            case 1:
                cout << ran(x, root) << endl;
                break;
            case 2:
                cout << kth(x, root) << endl;
                break;
            case 3:
                cout << kth(ran(x, root) - 1, root) << endl;
                break;
            case 4:
                cout << kth(ran(x + 1, root), root) << endl;
                break;
            default:
                num--, insert(x, root);
        }
    }
    return 0;
}

