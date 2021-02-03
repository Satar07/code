#include<iostream>
#include<cstdio>
using namespace std;

const int MAX_A=10;

double a[MAX_A],b[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};

int main(){
	double res=0;
	for (int i=0;i<10;i++){
		cin>>a[i];
		res+=a[i]*b[i];
	}
	printf("%.1f",res);
}
