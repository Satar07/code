#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
using namespace std;

/*void thr(int a[][20],int xa,int xb){
	for(int i=1;i<=xa;i++){
		int first =1;
		for(int j=1;j<=xb;j++){
			if (first){
				cout<<a[i][j];
				first =0;
			}
			else cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
}*/

int a[110][110],m,n,res;
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)cin>>a[i][j];
	if(n==1 and m==1){
		cout<<a[1][1];
		return 0;
	}
	if(n>=1 and m>1)for(int i=1;i<=n;i++)res+=a[1][i]+a[m][i];
	if(n>=1 and m==1)for(int i=1;i<=n;i++)res+=a[1][i];
	if(n>1)for(int i=2;i<=m-1;i++)res+=a[i][1]+a[i][n];
	else for(int i=2;i<=m-1;i++)res+=a[i][1];
	cout<<res;
	if(res==0)cout<<"0";
	
}
