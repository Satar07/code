#include<bits/stdc++.h>
using namespace std;

int a[100001],b[100001];

inline int in(){
	int num=0;
	char c;
	while((c=getchar())==' ' or c=='\n' or c=='\r');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+c-'0';
	return num;
}

int main(){
	stack<int> s;
	int q=in(),n,pt=0;
	for(int l=1;l<=q;l++){
		n=in(),pt=0;
		for(int i=0;i<n;i++)
			a[i]=in();
		for(int i=0;i<n;i++)
			b[i]=in();
		for(int i=0;i<n;i++){
			s.push(a[i]);
			while(!s.empty() and s.top()==b[pt]){
				s.pop();
				pt++;
			}
		}
		if(s.empty())
			cout<<"Yes\n";
		else 
			cout<<"No\n";
		while(!s.empty())s.pop();
	}
}







