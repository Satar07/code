#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

struct node{
	int begin,end,index;
};

node lib[10000];

inline int in(){
	int num=0;char c;
	while((c=getchar())==' ' or c=='\n' or c=='\r');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+(c-'0');
	return num;
}


inline int comp(node x,node y){
	return x.end>y.end?0:1;
}

int main(){
	int n=in(),ans=0;
	register int temp,pt=0;
	for(int i=0;i<n;i++){
		lib[i].begin=in();
		lib[i].end=in();
		lib[i].index=i;
	}
	sort(lib,lib+n,comp);  //°´½áÊøÅÅÐò 
	while(pt<n){
		temp=lib[pt].end;
		while(lib[pt].begin<=temp and pt<n)pt++;
		ans++; 
	}
	cout<<ans;
}
