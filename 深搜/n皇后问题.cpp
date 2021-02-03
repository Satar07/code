#include<iostream>
#include<cstdio>
using namespace std;
int n,cc;
int a[40],b[40],c[40],d[40];
void search(int t){
	for(int i=1;i<=n;i++){
		if((!b[i]) and (!c[t+i]) and (!d[t-i+n])){
			a[t]=i;
			b[i]=1;
			c[t+i]=1;
			d[t-i+n]=1;
			if(t==n){
				cc++;
				for(int k=1;k<n;k++)
					printf("%d ",a[k]);
				printf("%d \n",a[n]);
			}
			else search(t+1);
			a[t]=0;
			b[i]=0;
			c[t+i]=0;
			d[t-i+n]=0;
		}
	}
}


int main(){
	cin>>n;
	search(1);
	if(!cc)cout<<"no solute!";
}
