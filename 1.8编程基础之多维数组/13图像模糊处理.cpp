#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

double a[200][200],b[200][200];
int n,m;


int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++)cin>>a[i][j];
	for(int i=2;i<=n-1;i++) for(int j=2;j<=m-1;j++){
		double r=(a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j+1]+a[i][j-1])/5;
		b[i][j]=round(r);
	}
	for(int i=2;i<=n-1;i++) for(int j=2;j<=m-1;j++){
		a[i][j]=b[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
