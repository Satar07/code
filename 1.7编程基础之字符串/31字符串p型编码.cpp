#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
char a[1001],b[1001],c;
int cc;
int main()
{
	gets(a);
	int la=strlen(a);
	c=a[0];
	for (int i=0;i<la;i++){
		if(c==a[i])cc++;
		else{
			cout<<cc;
			cout<<c;
			c=a[i];
			cc=1;
		}
	}
	cout<<cc;
	cout<<c;
}
