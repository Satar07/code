#include<iostream>
#include<cstring>

using namespace std;

char a[110];

int main(){
	gets(a);
	bool res=true;
	for (int i=0;i<strlen(a);i++){
		if(!((a[i]>='a' and a[i]<='z') or (a[i]>='A' and a[i]<='Z') or
		 (a[i]>='0' and a[i]<='9') or (a[i]=='_')))res=false;
	}
	if(res and !(a[0]>='0' and a[0]<='9'))cout<<"yes";
	else cout<<"no";
}
