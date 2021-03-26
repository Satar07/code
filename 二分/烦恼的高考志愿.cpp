#include<bits/stdc++.h>
#define Inf 1e9
using namespace std;

int a[100002],b[100002];

int comp(const void *p1,const void *p2){
	return *(int*)p1>*(int*)p2?1:-1;
}

inline int in(){
	int num;
	char c;
	while((c=getchar())==' ' or c=='\n' or c=='\r');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+c-'0';
	return num;
}

int main(){
	int m=in(),n=in(),ans=0;
	int* pt;
	for(register int i=0;i<m;i++)a[i]=in();
	for(register int i=0;i<n;i++)b[i]=in();
	qsort(a,m,sizeof(int),comp); qsort(b,n,sizeof(int),comp);
	a[m]=Inf;
	for(register int i=0;i<n;i++){
		pt=lower_bound(a,a+m+1,b[i]);
		if(pt==a){
			ans+=abs((*pt)-b[i]);
		}
		else if(pt==a+m){
			ans+=abs(b[i]-*(pt-1));
		}
		else ans+=min(abs((*pt)-b[i]),abs(b[i]-*(pt-1)));
	}
	cout<<ans;
}
