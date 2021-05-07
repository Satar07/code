#include <bits/stdc++.h>

using namespace std;

queue<int> q;

struct node {
    int left, right, father;
} t[150000];

int main() {
    int n, res = 1, cc = 1, floor = 0, u, v, fu = 0, fv = 0, fr = 0;
    cin >> n;
    for (int i = 0; i < n - 1; ++i) {
        int temp;
        cin >> temp;
        if (t[temp].left) {
            cin >> t[temp].right;
            t[t[temp].right].father = temp;
        } else {
            cin >> t[temp].left;
            t[t[temp].left].father = temp;
        }
    }
    cin >> u >> v;
    q.push(1);
    while (!q.empty()) {
        if (!cc--)
            res = max(cc = q.size(), res), floor++, cc--;
        if (t[q.front()].left)
            q.push(t[q.front()].left);
        if (t[q.front()].right)
            q.push(t[q.front()].right);
        if (q.front() == u)
            fu = floor;
        if (q.front() == v)
            fv = floor;
        q.pop();
    }
    int &temp = fu > fv ? u : v;
    fr = min(fu, fv);
    for (int i = 0; i < abs(fu - fv); ++i)
        temp = t[temp].father;
    while (u != v) {
        u = t[u].father, v = t[v].father;
        fr--;
    }
    cout << floor + 1 << endl << res << endl << 2 * (fu - fr) + (fv - fr);
}
