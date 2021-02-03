#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
	double n,data;
	data = 0;
	double res = 0;
	cin>>n;
	for (int i = 0 ;i < n;i++){
		cin>>data;
		res += data;
	}
	res = res / n;
	printf("%.4f",res);
}
