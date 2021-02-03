#include<iostream>
#include<cmath>
using namespace std;
#define inf 0x7f7f7f7f
int n,m,res=inf,vv[25],ss[25];

void dfs(int dep,int s,int v,int h,int r){
	if(dep==0){
		if(v==n)res=min(res,s+r*r);
	}
	if(v>n )return;
	for(int i=min(sqrt(n-v));;){//°ë¾¶ 
		
	}
}


int main(){
	cin>>m>>n;
	dfs(m,0,0,inf,inf);
}
