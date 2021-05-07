#include<bits/stdc++.h>

using namespace std;

inline int in(int n = 0, int c = 0) {
    for (; !isdigit(c); c = getchar());
    for (; isdigit(c); c = getchar())n = n * 10 + c - '0';
    return n;
}

int f[1000007], book[1000007 * 3];

struct node {
    int a, b, e;

} a[1000007];

//将e==1的放在前面
bool cmp(node p1, node p2) {
    return p1.e > p2.e;
}

int find(int x) {
    return f[x] == x ? x : f[x] = find(f[x]);
}

void core() {
    int n = in(), tot = -1, flag = 1, reu;
    memset(a, 0, sizeof(a));
    memset(f, 0, sizeof(f));
    memset(book, 0, sizeof(book));

    for (int i = 1; i <= n; ++i) {
        a[i].a = in(), a[i].b = in(), a[i].e = in();
        book[++tot] = a[i].a, book[++tot] = a[i].b;
    }
    sort(book, book + tot);  //排序
    reu = unique(book, book + tot) - book;  //去重
    for (int i = 1; i <= n; ++i) {
        a[i].a = lower_bound(book, book + reu, a[i].a) - book;
        a[i].b = lower_bound(book, book + reu, a[i].b) - book;
    }
    for (int i = 1; i <= reu; i++) f[i] = i;
    sort(a + 1, a + n + 1, cmp);

    for (int i = 1; i <= n; ++i) {
        int r1 = find(a[i].a), r2 = find(a[i].b);
        if (a[i].e) {
            f[r1] = r2;
        } else if (r1 == r2) {
            flag = 0;
            puts("NO");
            break;
        }
    }
    if (flag) puts("YES");
}

int main() {
    //freopen("in.in","r",stdin);
    int t = in();
    for (int i = 0; i < t; ++i) core();
    return 0;
}
