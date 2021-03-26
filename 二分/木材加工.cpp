#include<bits/stdc++.h>
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
	int n=in(),k=in(),l=0,r=1e8,mid,cc=0,ans=0;
	for(register int i=0;i<n;i++)
		a[i]=in();
	while(l<=r){
		mid=l+(r-l>>1),cc=0;
		if(mid==0){
			cout<<0;
			return 0;
		}
		for(register int i=0;i<n;i++){
			cc+=a[i]/mid;
		}
		if(cc>=k)
			ans=mid,l=mid+1;
		else
			r=mid-1;
	}
	cout<<ans;
}
