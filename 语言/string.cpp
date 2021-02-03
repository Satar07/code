#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

void _swap(char &a,char &b){
	char t;
	t=a,a=b,b=t;
}

int main(){
	char s[100];

	gets(s);
	int len=strlen(s);
	for(int i=0;i<=len/2;i++){
		_swap(s[i],s[len-i-1]);
	}
	puts(s);
}
