#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	long long n,data;
	data = 0;
	long long res = 0;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>data;
		res += data;
	}
	cout<<res<<" ";
	printf("%.5f",(double)res / n);
}
