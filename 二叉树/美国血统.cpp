#include <bits/stdc++.h>

using namespace std;

string s1, s2;
int tree[30];

void build(int l1/*ǰ����˵�*/, int r1/*ǰ���Ҷ˵�*/, int l2/*������˵�*/, int r2/*�����Ҷ˵�*/) {
    for (int i = l2; i <= r2; ++i) {
        if (s2[i] == s1[l1]) {
            //����������������ȵģ����� i-l2+1
            build(l1 + 1, l1 + 1 - l2, l2, i - 1);
            build(l1 + i - l2 + 1, r1, i + 1, r2);
            cout << s1[l1];//�������
            return;
        }
    }
}

int main() {
    cin >> s2 >> s1;
    int len = s1.length();
    build(0, len - 1, 0, len - 1);
    return 0;
}
