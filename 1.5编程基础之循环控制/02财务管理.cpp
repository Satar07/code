#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
	double data = 0;
	double res = 0;
	for (int i = 0 ;i < 12;i++){
		cin>>data;
		res += data;
	}
	res = res / 12;
	printf("$%.2f",res);
}
