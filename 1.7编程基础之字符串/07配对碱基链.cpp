#include<iostream>
#include<cstring>

using namespace std;

char a[300],b[300];

int main(){
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='A')b[i]='T';
		if(a[i]=='T')b[i]='A';
		if(a[i]=='G')b[i]='C';
		if(a[i]=='C')b[i]='G';
	}
	puts(b);
}
