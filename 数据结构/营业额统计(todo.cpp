#include<bits/stdc++.h>
using namespace std;
int a[32800];

inline int in(){
	int num=0;
	char c;
	while((c=getchar())==' ' or c=='\n' or c=='\r');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+c-'0';
	return num;
}

bool comp(int a,int b){
	return a<b;
}

int main(){
	int n=in(),temp=0,ans=0,*pt;
	for(register int i=0;i<n;i++){
		temp=in();
		pt=lower_bound(a,a+i,temp);
		ans+=min(temp-*(pt-1),abs(*pt-temp));
		//ans+=*pt-temp;
		a[i]=temp;
		sort(a,a+i+1,comp);
	}
	cout<<ans;
}
