#include<iostream>
#include<cmath>
using namespace std;

int a[210][210],b[210][210];
int m,n;
int r,s;
int resr,resl;

int add_up(int nowl,int nowr){
	int res=0;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=s;j++){
			res+=abs(a[nowr+i-1][nowl+j-1]-b[i][j]);
		}
	}
	return res;
}

int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	cin>>r>>s;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=s;j++){
			cin>>b[i][j];
		}
	}
	
	int nl=1,nr=1,tt=0,min=1000000;   //now_row  now_line  total
	while(nr+r-1<=m){              //行越界 
		tt=add_up(nl,nr);
		if(min>tt){
			min=tt;
			resr=nr,resl=nl;
		}
		nl+=1;
		if(nl+s-1>n) nl=1,nr+=1;   //列越界 
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<s;j++){
			cout<<a[resr+i][resl+j]<<' ';
		}
		cout<<endl;
	}
}
