#include <bits/stdc++.h>

using namespace std;

inline int in() {
    int num, c;
    while ((c = getchar()) == ' ' or c == '\n' or c == '\r');
    num = c - '0';
    while (isdigit(c = getchar()))num = num * 10 + c - '0';
    return num;
}

struct node {
    int first, second, value;
};

node ds[100002];
int anti[20005];
int a[20005];

int comp(const void *p1, const void *p2) {
    return (*(node *) p2).value > (*(node *) p1).value ? 1 : -1;
}

int find(int x) {
    if (x == a[x])return x;
    a[x] = find(a[x]);
    return a[x];
}

inline int ad(int x, int y) {
    x = find(a[x]);
    y = find(a[y]);
    a[x] = y;
}

int main() {
    int n = in(), m = in();
    for (int i = 1; i <= n; i++) a[i] = i;
    for (int i = 0; i < m; ++i) {
        ds[i].first = in();
        ds[i].second = in();
        ds[i].value = in();
    }
    qsort(ds, m, sizeof(ds[0]), comp);
    for (int i = 0; i <= m; ++i) {
        if (find(ds[i].first) == find(ds[i].second)) {
            cout << ds[i].value;
            return 0;
        }
        if (!anti[ds[i].first])
            anti[ds[i].first] = ds[i].second;
        else
            ad(anti[ds[i].first], ds[i].second);
        if (!anti[ds[i].second])
            anti[ds[i].second] = ds[i].first;
        else
            ad(anti[ds[i].second], ds[i].first);
    }
    return 0;
}
