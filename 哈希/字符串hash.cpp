#include <bits/stdc++.h>

using namespace std;


const int mod = 23333, base = 261;
int n, ans;
string s;
vector<string> linker[mod + 2];

inline void insert() {
    int hash = 1;
    for (int i = 0; s[i]; ++i) {
        hash = (hash * 1ll * base + s[i]) % mod;
    }
    string t = s;
    for (int i = 0; i < linker[hash].size(); ++i) {
        if (linker[hash][i] == t)return;
    }
    linker[hash].push_back(t);
    ans++;
}


int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        insert();
    }
    cout << ans;
}