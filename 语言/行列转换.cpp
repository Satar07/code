#include<iostream>
using namespace std;

const int LP=10000;
int n,m,k,x[LP],y[LP],d[LP],c[LP];  //N*M的数组，k个数据，x和y是第i个数据的行和列，d数据，c每一列数据个数 
int *a[LP];                         //每列一个指针，准备创造动态数组 

int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=k;i++){
		cin>>x[i]>>y[i]>>d[i];
		c[y[i]]++;
	}
	for(int i=1;i<=m;i++)
		a[i]=new int[c[i]];
	for(int i=1;i<=k;i++){
		*a[y[i]]=d[i];
		a[y[i]]++;
	}
	for(int i=1;i<=m;i++){
		a[i]-=c[i];
		for(int j=1;j<=c[i];j++,a[i]++)
			cout<<*a[i]<<' ';
	}
}
