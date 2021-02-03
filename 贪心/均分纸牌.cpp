#include<bits/stdc++.h>
using namespace std;

int a[1001];

inline int in(){
	int num=0;
	char c;
	bool flag=false;
	while((c=getchar())==' ' or c=='\n' or c=='\r');
	if(c=='-')flag=true;
	else num=c-'0';
	while (isdigit(c=getchar()))num=num*10+c-'0';
	return (flag?-1:1)*num;
}

int main(){
	int n=in(),sum=0,i=1,j=n,cc=0;
	for(int i=1;i<=n;i++) sum+=a[i]=in();
	sum/=n;
	for(int i=1;i<=n;i++) a[i]-=sum;
	sort(a+1,a+1+n);
	while(a[i]!=0){
		cc++;
		if(a[i]+a[j]==0){
			i++,j--;
			continue;
		}
		if(a[i]+a[j]<0){
			a[i]+=a[j];
			j--;
			continue;
		}
		a[j]+=a[i];
		i++;
	}
	cout<<cc;
}
