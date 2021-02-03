#include<iostream>
using namespace std;
int n,a[21][21],res=0x7f7f7f;
bool b[21];


void bp(int s,int m){
	if(m>res)return;
	for(int i=1;i<=n;i++){
		if(b[i]==0){
			b[i]=1;
			if(s==n){
				res=res>m+a[s][i]?m+a[s][i]:res;
			}
			else bp(s+1,m+a[s][i]);
			b[i]=0;
		}
	}
}


int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	}
	bp(1,0);
	cout<<res;
}
