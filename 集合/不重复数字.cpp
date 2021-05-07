#include<bits/stdc++.h>

using namespace std;

#define jump 10007
#define mod 130007

int lib[mod + 2], ch[100];

inline int in() {
    int x = 0, c = 0, flag = 0;
    for (; !isdigit(c); c = getchar()) if (c == '-')flag = 1;
    for (; isdigit(c); c = getchar()) x = (x << 3) + (x << 1) + c - '0';
    return flag ? -x : x;
}

inline void write(int ans) {
    int i = 0;
    (ans < 0) && (ans = -ans, putchar('-'));
    (ans) || putchar('0');
    while (ans) {
        ch[i++] = ans % 10 + 48;
        ans /= 10;
    }
    while (i)putchar(ch[--i]);
}

inline bool ad(int x) {
    int num = x;
    x = (x % mod + mod) % mod;
    while (lib[x] != -1 and lib[x] != num) x = (x + jump) % mod;
    if (lib[x] == -1) {
        lib[x] = num;
        return false;
    } else {
        return true;
    }
}

int main() {
    int t = in(), x;
    for (int i = 0; i < t; ++i) {
        memset(lib, -1, sizeof lib);
        int n = in();
        for (int j = 0; j < n; ++j) {
            if (!ad(x = in())) {
                write(x);
                putchar(' ');
            }
        }
        puts("");
    }
}