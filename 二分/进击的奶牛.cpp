#include<bits/stdc++.h>
#define Inf 1e9
using namespace std;

int a[100002];

inline int in(){
	int num;
	char c;
	while((c=getchar())==' ' or c=='\n' or c=='\r');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+c-'0';
	return num;
}

int main(){
	int n=in(),c=in(),l=0,r=Inf,mid,cc,ans=0;
	int*p1,*p2;  //¿ìÂıÖ¸Õë  
	for(register int i=0;i<n;i++)
		a[i]=in();
	sort(a,a+n);
	while(l<=r){
		mid=l+((r-l)>>1),cc=1;
		p1=p2=a;
		while(p2<a+n-1 and cc<=c){
			while(p2<a+n-1 and *p2-*p1<mid)p2++;
			if(*p2-*p1>=mid)cc++,p1=p2;
		}
		if(cc>=c)ans=mid,l=mid+1;
		else r=mid-1;
	}
	cout<<ans;
}
