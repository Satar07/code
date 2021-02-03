#define inf 0x3f3f3f3f
#include<iostream>
using namespace std;
int dp[2000005],a[501];  //dp[j]:凑出j需要的最小邮票数目

int main(){
	int m,n;
	cin>>m>>n;
	for(int p=1;p<=m;p++)
		cin>>a[p];  //看了数据并不需排序 
	
	int i=0;
	while(dp[i]<=n){
		i++;
		dp[i]=inf;
		for(int j=1;j<=m and i-a[j]>=0;j++)
			dp[i]=min(dp[i],dp[i-a[j]]+1);  
			//递推式：凑出面值邮票数量是去掉最后邮票面值的邮票数量加一  
			//遍历能去掉的所有面值中取最小值 
	}
	cout<<i-1;
}
