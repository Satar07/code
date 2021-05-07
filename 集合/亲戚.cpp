#include <bits/stdc++.h>

using namespace std;
const int MAX_N = 5010;
int n, m, p, x, y;
int fa[MAX_N];

int find(int a) {
    if (a == fa[a])return a;
    return fa[a] = find(fa[a]);
}

void merge(int c1, int c2) {
    int f1 = find(c1), f2 = find(c2);
    if (f1 != f2)fa[f1] = f2;
}

int main() {
    cin >> n >> m >> p;
    for (int i = 1; i <= n; ++i)fa[i] = i;
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        merge(x, y);
    }
    for (int i = 0; i < p; ++i) {
        cin >> x >> y;
        if (find(x) == find(y))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}