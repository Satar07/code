using namespace std;
#include <iostream>
#include <cstring>
#include <cstdio>
char a[101];
int i,l;
int main()
{   
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if (a[i]>='a'&&a[i]<='z') cout<<char(a[i]-32);
		else
		  cout<<a[i];
	}
	return 0;
}
