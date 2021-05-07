#include <iostream>

using namespace std;

int fa[100002], b[100002];

int find(int x) {
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

void ad(int x, int y) {
    fa[find(fa[x])] = find(fa[y]);
}


int main() {
    int n, m, x, y, res = 0;
    char ch;
    cin >> n >> m;
    for (int i = 1; i <= n+1; ++i)fa[i] = i;
    for (int i = 0; i < m; ++i) {
        cin >> ch >> x >> y;
        if (ch == 'E') {
            if (b[x]) ad(y, b[x]);
            else b[x] = y;
            if (b[y]) ad(x, b[y]);
            else b[y] = x;

        } else {
            ad(x, y);
        }
    }
    for (int i=1;i<=n;++i){
        if (fa[i]==i)res++;
    }
    cout<<res;
    return 0;
}
