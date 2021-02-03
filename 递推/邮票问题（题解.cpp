#define inf 0x3f3f3f3f
#define MAX 55
#include<iostream>
#include<algorithm> 
using namespace std;

//dp[j]:凑出j需要的最小邮票数目
int K, N, a[MAX], dp[2000005];

int main() {
	cin>>N>>K;
	memset(dp,0,sizeof(dp));
	for (int i=1;i<=N;i++)cin>>a[i];
	sort(a+1,a+N+1);
	int i = 0;
	
	while (dp[i] <= K){
		i++;
		dp[i] = inf;
		for (int j=1; j<=N and a[j]<=i;j++)
			dp[i]=min(dp[i],dp[i-a[j]]+1);
	}
	cout<<i-1<<endl;
	
}





