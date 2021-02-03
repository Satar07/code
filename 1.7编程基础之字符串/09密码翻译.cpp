#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[100],b[100];

int main(){
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if((a[i]<='z' and a[i]>='a') or (a[i]<='Z' and a[i]>='A'))a[i]+=1;
		if(a[i]=='z'+1)a[i]='a';
		if(a[i]=='Z'+1)a[i]='A';
		
	}
	puts(a);
}
