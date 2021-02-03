#include<iostream>
using namespace std;

int a[3000],cc,k;

void dfs(int s,int w){
	if(s>k+1)return;
	if(s==k){
		if(w>=a[s-1])cc++;
		return;
	}
	for(int i=1;i<=w/(k-s);i++){
		if(i>=a[s-1]){
			a[s]=i;
			dfs(s+1,w-i);
		}
	}
}


int main(){
	int n;
	cin>>n>>k;
	dfs(1,n);
	cout<<cc;
}
