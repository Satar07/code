#include<bits/stdc++.h>

using namespace std;

#define N_MAX 100005


inline int in() {
    int x = 0, c = 0, flag = 0;
    for (; !isdigit(c); c = getchar()) if (c == '-')flag = 1;
    for (; isdigit(c); c = getchar()) x = (x << 3) + (x << 1) + c - '0';
    return flag ? -x : x;
}

struct node {
    int a, b;

    bool operator<(node &p) const {
        if (p.a == this->a)
            return p.b > this->b;
        return p.a > this->a;
    }
};

vector<node> tmp;
vector<int> p[N_MAX];

bool u[N_MAX];

void dfs(int x) {
    cout << x;
    putchar(' ');
    for (int i : p[x]) {
        if (!u[i]) {
            u[i] = true;
            dfs(i);
        }
    }
}

queue<int> q;

void bfs() {
    int x;
    while (!q.empty()) {
        x = q.front();
        cout << x;
        putchar(' ');
        q.pop();
        for (int i:p[x]) {
            if (!u[i]) {
                q.push(i);
                u[i] = true;
            }
        }
    }
}


int main() {
    int n = in(), m = in();
    for (int i = 0; i < m; ++i) {
        tmp.push_back((node) {in(), in()});
    }
    sort(tmp.begin(),tmp.end());
    for(auto i :tmp){
        p[i.a].push_back(i.b);
    }
    u[1] = true;
    dfs(1);
    putchar('\n');
    memset(u, 0, sizeof u);
    q.push(1);
    u[1] = true;
    bfs();
}