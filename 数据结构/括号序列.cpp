#include <bits/stdc++.h>

using namespace std;
const int base = 10000;

int main() {
    string str;
    int com[200];
    int len;
    memset(com, 0, sizeof(com));
    cin >> str;
    len = str.length();
    for (int i = 0; i < len; i++) {
        if (str[i] == ')')
            for (int j = i - 1; j >= 0; j--) {
                if (str[j] == '(' and !com[j]) {
                    com[j] = com[i] = 1;
                    break;
                }
                else if (str[j] == '[' and !com[j]) break;
            }
        if (str[i] == ']')
            for (int j = i - 1; j >= 0; j--) {
                if (str[j] == '[' and !com[j]) {
                    com[j] = com[i] = 1;
                    break;
                }
                else if (str[j] == '(' and !com[j]) break;
            }
    }
    for (int i = 0; i < len; i++) {
        if (!com[i]) {
            if (str[i] == '(' or str[i] == ')')
                cout << "()";
            if (str[i] == '[' or str[i] == ']')
                cout << "[]";
        } else
            cout << str[i];
    }
}
