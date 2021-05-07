#include <bits/stdc++.h>

using namespace std;

string beh, mid;//NOLINT

void out(int l1, int r1, int l2, int r2) {
    if (l1 > r1 or l2 > r2 or l1 < 0 or l2 < 0)return;
    int pt = 0;
    while (mid[pt++] != beh[r2]);
    putchar(mid[--pt]);
    out(l1, pt - 1, l2, l2 + (pt - 1 - l1));
    out(pt + 1, r1, l2 + (pt - 1 - l1) + 1, r2 - 1);
}

int main() {
    cin >> mid >> beh;
    int len = mid.length();
    out(0, len - 1, 0, len - 1);
}
