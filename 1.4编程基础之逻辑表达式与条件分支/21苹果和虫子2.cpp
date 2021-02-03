#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

//  a/b
int eat(int a,int b){
	int res;
	int data = a % b;
	if (data == 0)res = a / b;
	else res  =(a - data)/b+1 ;
	return res;
}

int main(){
	int n,x,y;
	cin>>n>>x>>y;
	if (eat(y,x)>=n){
		cout<<0;
		return 0;
	}
	int res = n - eat(y,x);
	cout<<res;
}
