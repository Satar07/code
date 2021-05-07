#include <bits/stdc++.h>

using namespace std;

const int mod = 233333, base = 26;
int n;
vector<pair<int, int> > linker[mod + 2];

//获得<ai,bi>的哈希值
inline int get_hash(string a, string b) {
    return (a[0] - 'A') + (a[1] - 'A') * base + (b[0] - 'A') * base * base + ((b[1] - 'A')) * base * base * base;
}

inline int insert(int x) {
    for (int i = 0; i < linker[x % mod].size(); ++i) {
        if (linker[x % mod][i].first == x) {
            linker[x % mod][i].second++;//把x所对应的数加一
            break;
        }
    }
    linker[x % mod].push_back(pair<int, int>(x, 1));
}

inline int find(int x) {
    for (int i = 0; i < linker[x % mod].size(); ++i) {
        if (linker[x % mod][i].first == x) {
            return linker[x % mod][i].second;//把x所对应的数返回
        }
    }
    return 0;//没有出现过 返回0
}

int main() {
    string a, b;
    int ans = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a >> b;
        a.resize(2);//砍断了
        if (a[0] != b[0] or a[1] != b[1]) { //不同省会
            ans += find(get_hash(b, a));
        }
        insert(get_hash(a, b));
    }
    cout << ans << endl;
}
