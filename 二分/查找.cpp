#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

inline int in(){
	int num=0;
	char c;
	while((c=getchar())==' ' or c=='\r' or c=='\n');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+c-'0';
	return num;
}

int a[1000001];

int main(){
	int n=in(),m=in();
	for(int i=1;i<=n;i++)
		a[i]=in();
	for(int i=1;i<=m;i++){
		register int l=1,r=n,mid,aim=in();  //  [l,r)
		while(l<r){
			mid=l+(r-l)/2;
			if(a[mid]>=aim)r=mid;  //ÕÒµÚÒ»¸ö 
			else l=mid+1;
		}
		if(a[l]==aim)cout<<l<<' ';
		else cout<<-1<<' ';
	}
}
