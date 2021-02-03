#include<iostream>
#include<cstring>

using namespace std;

char a[110],b[110];

int main(){
	gets(a);
	int now=0;
	for (int i=0;i<strlen(a);i++)b[i]=a[i]+a[i+1];
	b[strlen(a)-1]+=a[0];
	puts(b);
}
