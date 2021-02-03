#include<iostream>
#include<cstring>
using namespace std;

int a[200][200],b[200][200],c[200][200];
int n=0,m=0;

void in(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>a[i][j];
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>b[i][j];
}

void core(){
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) c[i][j]=a[i][j]+b[i][j];
}

void writeout(){
	for(int i=1;i<=n;i++){
		 for(int j=1;j<=m;j++) cout<<c[i][j]<<" ";
		 cout<<endl;
	}
	
}

int main(){
	in();
	core();
	writeout();
}
