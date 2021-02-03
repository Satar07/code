#include<iostream>
#include<cstdio>
using namespace std;

bool b[10001];
int a[10001],n;

int writeout(){
	for(int i=1;i<=n;i++)printf("%d ",a[i]);
	printf("\n");
}

int search(int t){
	if(t==n+1) writeout();
	else {
		for(int i=1;i<=n;i++){
			if(b[i]==0){
				b[i]=1;
				a[t]=i;
				search(t+1);
				b[i]=0;
			}
		}
	}
}

int main(){
	cin>>n;
	search(1);
}
