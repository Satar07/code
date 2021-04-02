#include<bits/stdc++.h>

using namespace std;

struct node {
    int left, right, value;
} t[600];

void pre_out(int root) {
    cout << char(t[root].value + 'a' - 1);
    if (t[root].left)pre_out(t[root].left);
    if (t[root].right)pre_out(t[root].right);
}

int main() {
    int n, fir = -1;
    char c, index;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> index;
        index = index - 'a' + 1;
        if (fir == -1) {
            fir = index;
        }
        t[index].value = index;
        cin >> c;
        c = c - 'a' + 1;
        if (c != '*' - 'a' + 1)t[index].left = c;
        cin >> c;
        c = c - 'a' + 1;
        if (c != '*' - 'a' + 1)t[index].right = c;
    }
    pre_out(fir);
}