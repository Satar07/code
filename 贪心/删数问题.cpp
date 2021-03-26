#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int lib[2500];

int main(){
	char c;
	register int i=0;
	int s,total;
	while((c=getchar())!='\n' and c!='\r' and c!=' '){
		lib[++i]=c-'0';
	}
	total=i;
	cin>>s;
	s=min(total,s);
	for(i=1;i<=s;i++){
		register int j=1;
		while(lib[j]<=lib[j+1])j++;
		for(;j<total;j++)
			lib[j]=lib[j+1];
		lib[total--]=0;
	}
	i=0;
	while(!lib[++i] and i<=total);
	if(i>total){
		cout<<0;
		return 0;
	}
	for(;i<=total;i++)
		printf("%d",lib[i]);
	return 0;
}
