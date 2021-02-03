#include<iostream>
#include<cstdio>
using namespace std;
#include<algorithm>
int a[300],rob,n,lib[300],res=0x7f7f7f;

int comp(const void*a,const void*b){
	return *(int*)b-*(int*)a;
}


void dfs(int s,int time){
	if(time>=res)return;
	if(s>n){
		if(time<res)res=time;
		return;
	}
	for(int i=1;i<=rob;i++){
		if(a[i]+lib[s]<res){
			a[i]+=lib[s];
			dfs(s+1,max(time,a[i]));
			a[i]-=lib[s];
		}
	}
}


int main(){
	scanf("%d%d",&n,&rob);
	for(int i=1;i<=n;i++)
		scanf("%d",&lib[i]);
	qsort(lib+1,n+1,sizeof(int),comp);
	dfs(1,0);
	printf("%d",res);
}
