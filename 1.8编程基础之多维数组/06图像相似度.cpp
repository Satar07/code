#include<iostream>
#include<cstdio>
using namespace std;

int a[200][200],b[200][200];
int n,m;

int main(){
	double cc1=0,cc2=0;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
		for (int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	for(int i=1;i<=m;i++)
		for (int j=1;j<=n;j++){
			cin>>b[i][j];
		}
	for(int i=1;i<=m;i++)
		for (int j=1;j<=n;j++){
			cc1+=1;
			if(a[i][j]==b[i][j])cc2+=1;
		}
	double res=cc2/cc1*100;
	printf("%.2f",res);
}
