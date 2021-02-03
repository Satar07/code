#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int cc;
char a[260];

int main(){
	gets(a);
	for(int i=0;i<=255;i++)
		if(a[i]<='9' and a[i]>='0')cc++;
	
	cout<<cc;
}
