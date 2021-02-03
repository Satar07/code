#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	double res = a;
	for(int i=0;i<b;i++){
		res *=1.001;
	}
	printf("%.4f",res);
}
