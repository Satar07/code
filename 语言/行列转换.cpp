#include<iostream>
using namespace std;

const int LP=10000;
int n,m,k,x[LP],y[LP],d[LP],c[LP];  //N*M�����飬k�����ݣ�x��y�ǵ�i�����ݵ��к��У�d���ݣ�cÿһ�����ݸ��� 
int *a[LP];                         //ÿ��һ��ָ�룬׼�����춯̬���� 

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
