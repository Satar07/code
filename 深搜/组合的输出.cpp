#include<iostream>
#include<cstdio>
using namespace std;

int a[30],b[30];
int n,r;

void search(int tt){
	for(int i=1;i<=n;i++){
		if(i>=a[tt-1] and b[i]==0){
			a[tt]=i;
			b[i]=1;
			
			if(tt==r){
				for(int k=1;k<r;k++){
					printf("%d ",a[k]);
				}
				printf("%d\n",a[r]);
			}
			else search(tt+1);
			
			a[tt]=0;
			b[i]=0;
		}
	}
}
int main(){
	cin>>n>>r;
	search(1);
}
