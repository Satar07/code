#include <bits/stdc++.h>

class tree {
private:
    inline void update(int root) {
        t[root].size = t[t[root].left].size + t[t[root].right].size + t[root].num;
    }

public:
    static const int MAX_SIZE = 10010, INF = 2147483647;

    struct node {
        int left, right, size, value, num;

        node(int l, int r, int s, int v)
                : left(l), right(r), size(s), value(v), num(1) {}

        node() = default;
    };

    tree(){
        t[++cc] = node(0, 0, 1,INF);
    }

    int ran(int x, int root=0) {//查询树排名
        if (root) {
            if (x < t[root].value)
                return ran(x, t[root].left);
            if (x > t[root].value)
                return ran(x, t[root].right) + t[t[root].left].size + t[root].num;
            return t[t[root].left].size + t[root].num;
        }
        return 1;
    }

    int kth(int x, int root=0) {//查询排名为x的树
        if (x <= t[t[root].left].size)
            return kth(x, t[root].left);
        if (x <= t[t[root].left].size + t[root].num)
            return t[root].value;
        return kth(x - t[t[root].left].size - t[root].num, t[root].right);
    }

    void insert(int x, int root=0) {//插入值为x的数
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

    int cc{};
private:
    node t[MAX_SIZE]{};
};


int main() {
    using namespace std;
    int n, opt, x;
    tree a;
    cin >> n;
    int num = 0;
    while (n--) {
        cin >> opt >> x;
        num++;
        switch (opt) {
            case 1:
                cout << a.ran(x) << endl;
                break;
            case 2:
                cout << a.kth(x) << endl;
                break;
            case 3:
                cout << a.kth(a.ran(x) - 1) << endl;
                break;
            case 4:
                cout << a.kth(a.ran(x + 1)) << endl;
                break;
            default:
                num--, a.insert(x);
        }
    }
    return 0;
}

