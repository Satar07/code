#include<iostream>
#include<cstring>
using namespace std;

int a[200][200];
int n,m;

void in(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++)cin>>a[i][j];
}

void core(){
	
}

void writeout(){
	for(int j=1;j<=m;j++){
		for(int i=1;i<=n;i++)cout<<a[i][j]<<" ";
		cout<<endl;
	}
}

int main(){
	in();
	core();
	writeout();
} 
