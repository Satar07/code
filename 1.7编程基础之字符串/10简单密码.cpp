#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[100],b[100];

int main(){
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='F' and a[i]<='Z'){
			a[i]-=5;
			continue;
		}
		if(a[i]>='A' and a[i]<'F'){
			a[i]+=21;
			continue;
		}
		
	}
	puts(a);
}
