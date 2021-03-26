#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdlib>
using namespace std;

struct node{
	string s;
};
node lib[21];

int comp(node x,node y){
	string a=x.s,b=y.s;
	return a+b>b+a?1:0;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>lib[i].s;
	}
	sort(lib,lib+n,comp);
	for(int i=0;i<n;i++)
		cout<<lib[i].s;
	return 0;
}

