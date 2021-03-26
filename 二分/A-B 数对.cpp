#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

inline int in(){
	int num=0;
	char c;
	while((c=getchar())==' ' or c=='\r' or c=='\n');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+c-'0';
	return num;
}

int a[200005];

int comp(const void*a,const void*b){
	return *(int*)a-*(int*)b;
}

int main(){
	long long n=in(),c=in(),cc=0;
	for(register int i=0;i<n;i++)
		a[i]=in();
	qsort(a,n,sizeof(int),comp);
	for(register int i=0;i<n and a[i]+c<=a[n-1];i++){
		int* pt_l=lower_bound(a,a+n,a[i]+c);
		if(*pt_l==a[i]+c){
			int* pt_u=upper_bound(a,a+n,a[i]+c);
			cc+=pt_u-pt_l;
		}
	}
	cout<<cc;
}
