#include<bits/stdc++.h>
using namespace std;

const int MAX=105,mod=1000007;
int m,n,a[MAX],rem[MAX][MAX];

int dfs(int s,int k){
	
	if(k==m)return 1;
	if(k>m)return 0;
	if(s>n)return 0;
	if(rem[s][k])return rem[s][k];
	int ans=0;
	for(int i=0;i<=a[s];i++) ans=(ans+dfs(s+1,k+i))%mod;
	rem[s][k]=ans;
	return ans;
}


int main(){
	//freopen("flower.in","r",stdin);
	//freopen("flower.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cout<<dfs(1,0);
	return 0;
}
