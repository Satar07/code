#include <bits/stdc++.h>

using namespace std;

int n, opt, len;
set<int> ds;

int main() {
    cin >> n;
    while (n--) {
        cin >> opt >> len;
        switch (opt) {
            case 1:
                if (ds.find(len) != ds.end())cout << "Already Exist\n";
                else ds.insert(len);
                break;
            case 2:
                if (ds.empty()) {
                    cout << "Empty\n";
                    break;
                }
                set<int>::iterator i = ds.lower_bound(len), j = i;
                if (j != ds.begin())--j;  //j不为begin才能--
                if (i != ds.end() and len - (*j) > (*i) - len)j = i;  //i不为end才能被解引用
                cout << *j << endl;
                ds.erase(j);
        }
    }
}