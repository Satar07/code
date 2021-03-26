#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int fd[30001];

struct node{
	int begin,end,tree;
};
node lib[30001];

inline int comp(node a,node b){
	return a.end<b.end;
}

inline int in(){
	int num=0;
	char c;
	while((c=getchar())==' ' or c=='\n' or c=='\r');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+c-'0';
	return num;
}

inline int checkTree(node p){
	int res=0;
	for(int i=p.begin;i<=p.end;i++){
		if(fd[i])res++;
	}
	return res;
}

int main(){
	int max_fd=in(),n=in(),pt=0,ans=0;
	for(int i=0;i<n;i++){
		lib[i].begin=in();
		lib[i].end=min(in(),max_fd);
		lib[i].tree=in();
	}
	sort(lib,lib+n,comp);
	for(int i=0;i<n;i++){
		int Tree=checkTree(lib[i]);
		if(Tree<lib[i].tree){
			for(int j=lib[i].end;j>=lib[i].begin;j--){
				if(!fd[j]){
					fd[j]=1;
					Tree++;
					ans++;
				}
				if(Tree==lib[i].tree)break;
			}
				
		}
	}
	cout<<ans;
}






