#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
	int n,in,res = 0;
	cin>>n;
	for (int i = 0;i < n;i++){
		cin>>in;
		res = max(res,in);
	}
	cout<<res;
}
