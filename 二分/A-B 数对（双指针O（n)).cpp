#include<cstdio>
#include<iostream>
#include<algorithm>
#define MAX 200010
using namespace std;
typedef long long LL;

int a[MAX];

inline int in(){
	int num=0;
	char c;
	while((c=getchar())==' ' or c=='\r' or c=='\n');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+c-'0';
	return num;
}

int comp(const void*a,const void*b){
	return *(int*)a-*(int*)b;
}

int main(){
	//freopen("P.in","r",stdin);
	int n=in(),c=in();
	for(int i=0;i<n;i++)
		a[i]=in();
	qsort(a,n,sizeof(int),comp);
	LL res=0;
	for(int i=0,l=0,r=0;i<n;i++){
		while(l<n and a[l]<a[i]+c)l++;
		while(r<n and a[r]<=a[i]+c)r++;
		res+=r-l;
	}
	cout<<res;
}
