#include <bits/stdc++.h>

using namespace std;
int f[200002], d[200002];   //f�������Ƚڵ㣬d���浽�����Ƚڵ��·������

inline int in() {
    int x = 0, c = 0;
    for (; !isdigit(c); c = getchar());
    for (; isdigit(c); c = getchar())x = (x << 3) + (x << 1) + c - '0';
    return x;
}

inline int fa(int x) {
    if (f[x] != x)                       //����ʱ��;�������Ƚڵ��·������
    {
        int last = f[x];                 //��¼���ڵ㣨���ڵݹ��б����£���
        f[x] = fa(f[x]);                 //�������Ƚڵ㡣
        d[x] += d[last];                 //����·������ԭ�����ڸ��ڵ��ϣ���
    }
    return f[x];
}

int main() {
    int i, t, n, minn;
    n = in();
    for (i = 1; i <= n; i++) f[i] = i;         //���Ƚڵ��ʼ��Ϊ�Լ���·����Ϊ0��
    minn = 0x7777777;
    for (i = 1; i <= n; i++) {
        t = in();
        int x = fa(i), y = fa(t);               //�������Ƚڵ㡣
        if (x != y) {
            f[x] = y;
            d[i] = d[t] + 1;
        }   //�������������������㣬���¸��ڵ��·������
        else minn = min(minn, d[i] + d[t] + 1);                    //��鵱ǰ�����Ƿ����б������ӡ�
    }
    printf("%d", minn);
    return 0;
}