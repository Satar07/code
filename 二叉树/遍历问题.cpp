#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    int ans=0;
    cin >> a >> b;
    for (int i = 0; a[i]; ++i) {
        for (int j = 1; b[j]; ++j) {
            if(a[i]==b[j] and a[i+1]==b[j-1])++ans;
        }
    }
    cout<<(1<<ans);
    return 0;
}
