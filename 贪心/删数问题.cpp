#include<bits/stdc++.h>
using namespace std;

int a[1000];

inline int in(){
	bool flag=false;
	int i=1;
	char c;
	while((c=getchar())==' ' or c=='\n' or c=='\r');
	if(c=='-')flag=true;
	else a[i]=c-'0',i++;
	while(isdigit(c=getchar()))a[i++]=c-'0';
	return i-1;
}


void del(int index,int len){
	for(int i=index;i<len;i++)
		a[i]=a[i+1];
	a[len]=0;
}

int main(){
	int k,i,len=in();
	cin>>k;
	for(int p=1;p<=k;p++){
		i=1;
		while(a[i]<=a[i+1] and i<=len)i++;
		del(i,len);
		len--;
		while(a[1]==0 and len>0)del(1,len),len--;
	}
	for(int i=1;i<=len;i++)
		cout<<a[i];
	if(len==0)cout<<0;
} 
