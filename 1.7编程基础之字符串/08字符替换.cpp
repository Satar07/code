#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[40];
char p1,p2;

int main(){
	cin>>a>>p1>>p2;
	for(int i=0;i<strlen(a);i++){
		if(a[i]==p1)a[i]=p2;
	}
	puts(a);
}
