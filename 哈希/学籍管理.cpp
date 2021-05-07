#include <bits/stdc++.h>

using namespace std;

const int mod = 233333, base = 233, ERROR = -114514;
int total;

list<pair<string, int> > linker[mod + 2];

int find(const string &name);

inline int to_hash(const string &name);

int insert(const string &name, int score);

int del(const string &name);

int find(const string &name) {
    int hash = to_hash(name);
    for (auto &it : linker[hash]) {
        if (it.first == name)
            return it.second;
    }
    return ERROR;
}

int to_hash(const string &name) {
    long long res = 0;
    for (int i = 0; name[i]; ++i) {
        res = (res * base + name[i]) % mod;
    }
    return int(res);
}

int insert(const string &name, int score) {
    int hash = to_hash(name);
    for (auto &it : linker[hash]) {
        if (it.first == name) {
            it.second = score;
            return 0;
        }
    }
    linker[hash].emplace_back(name, score);
    total++;
    return 0;
}

int del(const string &name) {
    int hash = to_hash(name);
    for (auto it = linker[hash].begin(); it != linker[hash].end(); ++it) {
        if ((*it).first == name) {
            linker[hash].erase(it);
            total--;
            return 0;
        }
    }
    return ERROR;
}

int main() {
    string s;
    int opt, temp, n;
    cin >> n;
    while (n--) {
        cin >> opt;
        switch (opt) {
            case 1:
                cin >> s >> temp;
                insert(s, temp);
                cout << "OK\n";
                break;
            case 2:
                cin >> s;
                temp = find(s);
                if (temp == ERROR)
                    cout << "Not found\n";
                else
                    cout << temp << endl;
                break;
            case 3:
                cin >> s;
                if (del(s) != ERROR)
                    cout << "Deleted successfully\n";
                else
                    cout << "Not found\n";
                break;
            default:
                cout << total << endl;
                break;
        }
    }
}