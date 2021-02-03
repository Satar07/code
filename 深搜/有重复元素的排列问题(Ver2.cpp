#include<iostream>
#include<cstdio>
using namespace std;
int a[500],b[300],n;
char c[500];


void dp(int s){
	for(int i=1;i<=n;i++){
		if(b[i]){
			a[s]=i;
			b[i]--;
			if(s==n){
				for(int k=1;k<n;k++)
					printf("%c",c[a[k]]);
				printf("%c",c[a[n]]);
			}
			else dp(s+1);
			a[s]=0;
			b[i]++;
		}
	}
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c[i];
		b[c[i]]++;
	}
	dp(1);
	return 0;
}
