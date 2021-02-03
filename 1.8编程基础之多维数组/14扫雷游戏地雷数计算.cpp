#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

char a[200][200],b[200][200];
int n,m,cc;


int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++)cin>>a[i][j];
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++){
		if(a[i][j]=='*'){
			b[i+1][j]++;
			b[i-1][j]++;
			b[i][j+1]++;
			b[i][j-1]++;
			b[i+1][j+1]++;
			b[i+1][j-1]++;
			b[i-1][j+1]++;
			b[i-1][j-1]++;
		}
	}
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++){
		if(a[i][j]=='*'){
			b[i][j]='*';
		}
		else b[i][j]+='0';
	}
	for(int i=1;i<=n;i++){
		 for(int j=1;j<=m;j++)cout<<b[i][j];
		 cout<<endl;
	}
} 
