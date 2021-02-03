#include<iostream>
#include<cstdio>
using namespace std;

const int MAX=101;

int a[MAX];
int main(){
	double n=0,cc1=0,cc2=0,cc3=0,cc4=0;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i]>=0 and a[i]<=18)cc1++;
		if(a[i]>=19 and a[i]<=35)cc2++;
		if(a[i]>=36 and a[i]<=60)cc3++;
		if(a[i]>=61)cc4++;
	}
	cc1/=n,cc2/=n,cc3/=n,cc4/=n;
	printf("%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%",100*cc1,100*cc2,100*cc3,100*cc4);
}
