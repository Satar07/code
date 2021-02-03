#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

double n,cc;
char a[520],b[520];

int main(){
	cin>>n;
	getchar();
	gets(a);
	gets(b);
	int i=0;
	while(a[i]>='A' and a[i]<='Z'){
		if(a[i]==b[i])cc++;
		i++;
	}
	double res=cc/i; 
	if(res>=n-0.01)cout<<"yes";
	else cout<<"no"; 
}
