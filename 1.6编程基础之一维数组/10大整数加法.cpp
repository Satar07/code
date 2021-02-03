#include<iostream>
#include<cstdio>
using namespace std;

int a[3000],b[3000],c[3000],r=0;

void in(int a[]){
	string s;
	cin>>s;
	int len = s.length();
	for(int i=1;i<=len;i++)
		a[i]=s[len-i]-'0';
}

void out(int a[]){
	int first = 1;
	for(int i=0;i<201;i++){
		if(first and a[201-i]==0)continue;
		else first=0;
		cout<<a[201-i];
	}
	if(first==1)cout<<0;
}

int main(){
	in(a);
	in(b);
	for(int i=1;i<=200;i++){
		c[i]+=a[i]+b[i];
		if(c[i]>=10){
			c[i]%=10;
			c[i+1]++;
		}
	}
	out(c);
}
