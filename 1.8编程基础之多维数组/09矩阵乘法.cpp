#include<iostream>
#include<cstring>
using namespace std;

int a[200][200],b[200][200],c[200][200];
int n,m,k;

void in(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++)cin>>a[i][j];
	for(int i=1;i<=m;i++) for(int j=1;j<=k;j++)cin>>b[i][j];
}

void core(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			for(int p=1;p<=m;p++){
				c[i][j]+=a[i][p]*b[p][j];
			}
		}
	}
}

void writeout(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++)cout<<c[i][j]<<" ";
		cout<<endl;
	}
}

int main(){
	in();
	core();
	writeout();
} 
