#include<iostream>
#include<cstdio>
#include<cstring>

const int jump = 10003, mod = 1000003;
using namespace std;

inline int read(int n = 0, int c = 0) {
    for (; !isdigit(c); c = getchar());
    for (; isdigit(c); c = getchar())n = (n << 3) + (n << 1) + c - '0';
    return n;
}

int f[mod], vis[mod]; //vis 离散化数组（该数是否已经使用过了）

int get(int x) {
    while (vis[x] != -1 && vis[x] != x) x = (x + jump) % mod;
    vis[x] = x;
    return x;
}

int find(int x) {
    return f[x] == 0 ? x : f[x] = find(f[x]);
}

const int max_n = 1e6 + 5;
int st1[max_n], st2[max_n], top;

void solve() {
    top = 0;
    memset(f, 0, sizeof f);
    memset(vis, -1, sizeof vis);
    int n = read();
    for (register int i = 1; i <= n; ++i) {
        int x = read() % mod, y = read() % mod, e = read();
        x = get(x), y = get(y); //x y 离散化为小数字
        if (e) {
            int xx = find(x), yy = find(y);
            if (xx != yy) f[xx] = yy;  //查并集
        } else st1[++top] = x, st2[top] = y;  //st 暂存e为0的情况
    }
    for (register int i = 1; i <= top; ++i) {
        int x = find(st1[i]), y = find(st2[i]);
        if (x == y) {
            puts("NO");
            return;
        }
    }
    puts("YES");
}

int main() {
	//freopen("in.in","r",stdin);
    int T = read();
    while (T--) solve();
    return 0;
}