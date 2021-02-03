#include <iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
	int in,res;
	char ch;
	cin>>in>>ch;
	res = 0;
	if (in > 0 and in <=1000) res=8;
	else res = ceil((in-1000)/500.0)*4+8;
	if (ch == 'y')res+=5;
	if (in <= 0)res = 0;
	cout<<res;
}
