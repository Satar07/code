#include<bits/stdc++.h>
using namespace std;
int a[1000];
int s[5000];
int t=1;
void get(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(!s[i]) //i不是质数 
		{
			a[t]=i; //加入到质数数组 
			t++; //个数加一 
			for(int j=i*i;j<=n;j=j+i) //筛选到当前数的倍数 
			{
				s[j]=1; 
			}
		}
	}
}
int f(int n)
{
	for(int j=t-1;j>=0;j--) //从最大的数质数开始筛选 
	{
		if(n%a[j]==0)
		return a[j];
	}	
}
int main()
{
	int m,n;
	cin>>m>>n;
	get(5000);
	for(int i=m;i<n;i++)
	{
		cout<<f(i)<<',';
	}
	cout<<f(n);
	cout<<endl;
}
