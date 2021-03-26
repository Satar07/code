#include <bits/stdc++.h>

using namespace std;
const int NUM = 1e6;
int n;

inline int in() {
    int num = 0, w = 1;
    char ch = 0;
    while (ch < '0' || ch > '9') {
        if (ch == '-') w = -1;
        ch = char(getchar());
    }
    while (ch >= '0' && ch <= '9') num = (num << 3) + (num << 1) + ch - '0', ch = char(getchar());
    return num * w;
}

struct node {
    int left, right;
};
node t[NUM];

void build() {
    for (int i = 1; i <= n; ++i) {
        t[i].left=in(),t[i].right=in();
    }
}

int dfs(int x){
    if(!x)return 0;
    return max(dfs(t[x].left),dfs(t[x].right))+1;
}

int main() {
    n=in();
    build();
    cout<<dfs(1);
}