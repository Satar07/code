#include<bits/stdc++.h>

using namespace std;

#define N_MAX 100005

inline int in() {
    int x = 0, c = 0, flag = 0;
    for (; !isdigit(c); c = getchar()) if (c == '-')flag = 1;
    for (; isdigit(c); c = getchar()) x = (x << 3) + (x << 1) + c - '0';
    return flag ? -x : x;
}

vector<int> p[N_MAX];

int a[N_MAX];

void core(int x, int v) {
    a[x] = v;
    for (int i : p[x]) {
        if (a[i] == 0)
            core(i, v);
    }
}

int main() {
    int n=in(),m=in(),x,y;
    for (int i = 0; i < m; ++i) {
        x=in(),y=in();
        p[y].push_back(x);
    }
    for (int i = n; i >=0 ; --i) {
        if (a[i]==0)
            core(i,i);
    }
    for (int i = 1; i <=n ; ++i) {
        cout<<a[i]<<' ';
    }
}