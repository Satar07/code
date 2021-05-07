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
                now = min(now, i);//找出在P后面离P最近的质数
            }
            for (long long j = i; j * i <= end; j++) {
                zhi_shu[i * j] = true;
            }
        }
    }
    if (start < now) {
        ans = ans + now - start;//如果开始的数比那个质数还要小，那么小于的那些的数每个数都会成一个单独的集合
    }
    for (long long i = now; i <= end; i++) {
        if (b[i] == false) {
            if (zhi_shu[i] == false) {
                fir = false;
                pd = false;
                for (int j = 1; i * j <= end; j++)//注意：一定要从1开始，保证每一个数都被他所有的质因数标记一次
                {
                    if (i * j >= start && pd == false) {
                        pd = true;
                        ans++;
                    }
                    if (b[i * j] == true && fir == false && pd == true)//如果一个数已经被另一个集合给标记过了，那就说明这一次不用新开集合了，减掉这次加的
                    {
                        fir = true;
                        ans--;
                    }
                    b[i * j] = true;
                }
            } else if (i >= start)//如果一个数还没有被标记过，而且也不是素数，那就只能单独的开一个集合了，因为他找不到和他一个集合的数
            {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}