#include<bits/stdc++.h>

using namespace std;
bool b[100010];
bool zhi_shu[100010];
long long ans;
bool pd;
bool fir;
long long now = 19260817;

int main() {
    long long start, end, p;
    cin >> start >> end >> p;
    for (long long i = 2; i <= end; i++) {
        if (zhi_shu[i] == false) {
            if (i >= p) {
                now = min(now, i);//�ҳ���P������P���������
            }
            for (long long j = i; j * i <= end; j++) {
                zhi_shu[i * j] = true;
            }
        }
    }
    if (start < now) {
        ans = ans + now - start;//�����ʼ�������Ǹ�������ҪС����ôС�ڵ���Щ����ÿ���������һ�������ļ���
    }
    for (long long i = now; i <= end; i++) {
        if (b[i] == false) {
            if (zhi_shu[i] == false) {
                fir = false;
                pd = false;
                for (int j = 1; i * j <= end; j++)//ע�⣺һ��Ҫ��1��ʼ����֤ÿһ�������������е����������һ��
                {
                    if (i * j >= start && pd == false) {
                        pd = true;
                        ans++;
                    }
                    if (b[i * j] == true && fir == false && pd == true)//���һ�����Ѿ�����һ�����ϸ���ǹ��ˣ��Ǿ�˵����һ�β����¿������ˣ�������μӵ�
                    {
                        fir = true;
                        ans--;
                    }
                    b[i * j] = true;
                }
            } else if (i >= start)//���һ������û�б���ǹ�������Ҳ�����������Ǿ�ֻ�ܵ����Ŀ�һ�������ˣ���Ϊ���Ҳ�������һ�����ϵ���
            {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}