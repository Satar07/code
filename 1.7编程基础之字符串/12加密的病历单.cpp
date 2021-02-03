#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char a[60];
int main(){
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='A' and a[i]<='Z'){
			a[i]+=32;
			continue;
		}
		if(a[i]>='a' and a[i]<='z'){
			a[i]-=32;
			continue;
		}
	}
	for(int i=0;i<strlen(a);i++){
		if((a[i]>='A' and a[i]<='W')or(a[i]>='a' and a[i]<='w')){
			a[i]+=3;
			continue;
			}
		if((a[i]>='X' and a[i]<='Z')or(a[i]>='x' and a[i]<='z')){
		
			a[i]-=23;
			continue;
			}
	}
	for(int i=strlen(a)-1;i>=0;i--)cout<<a[i];
}
