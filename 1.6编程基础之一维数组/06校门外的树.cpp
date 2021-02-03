#include<iostream>
using namespace std;

int q[10002];
int main(){
	int l,m,cc=0;
	cin>>l>>m;
	for(int i=1;i<=m;i++){
		int a=0,b=0;
		cin>>a>>b;
		for(int j=a;j<=b;j++){
			q[j]=1;
		}
	}
	for(int i=0;i<=l;i++){
		if(!q[i])cc++;
	}
	cout<<cc;
}
