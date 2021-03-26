#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
using namespace std;
inline int in(){
	int num;
	char c;
	while((c=getchar())==' ' or c=='\r' or c=='\n');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+c-'0';
	return num;
}
int main(){
	int n,m,tmp;
	vector<int> stu;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		stu.push_back(in());
	}
	for(int i=0;i<m;i++){
		cin>>tmp;
		cout<<stu[tmp-1]<<endl;
	}
}
