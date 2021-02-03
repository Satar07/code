#include<iostream>
#include<cstdio>
using namespace std;
int a[30];
int n;
void search(int w,int tt){
	for(int i=1;i<=w;i++){
		if(i>=a[tt-1] and w>=i){
			a[tt]=i;
			if(w-i==0){
				for(int k=1;k<tt;k++){
					printf("%d+",a[k]);
				}
				if(a[tt]!=n)printf("%d\n",a[tt]);
			}
			else search(w-i,tt+1);
			a[tt]=0;
		}
	}
}
int main(){
	cin>>n;
	search(n,1);
}
