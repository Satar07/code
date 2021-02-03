#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

char a[101];

int main(){
	gets(a);
	int la=strlen(a)-1;
	for(int i=0;i<=la/2;i++){
		if(a[i]==a[la-i])continue;
		else {
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";
}
