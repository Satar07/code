#define inf 0x3f3f3f3f
#include<iostream>
using namespace std;
int dp[2000005],a[501];  //dp[j]:�ճ�j��Ҫ����С��Ʊ��Ŀ

int main(){
	int m,n;
	cin>>m>>n;
	for(int p=1;p<=m;p++)
		cin>>a[p];  //�������ݲ��������� 
	
	int i=0;
	while(dp[i]<=n){
		i++;
		dp[i]=inf;
		for(int j=1;j<=m and i-a[j]>=0;j++)
			dp[i]=min(dp[i],dp[i-a[j]]+1);  
			//����ʽ���ճ���ֵ��Ʊ������ȥ�������Ʊ��ֵ����Ʊ������һ  
			//������ȥ����������ֵ��ȡ��Сֵ 
	}
	cout<<i-1;
}
