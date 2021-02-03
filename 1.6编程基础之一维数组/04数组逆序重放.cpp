#include<iostream>
#include<cstdio>
using namespace std;

const int MAX=101;

int a[MAX];
int main(){
	int n=0,first=1;
	cin>>n;
	for (int i=0;i<n;i++)cin>>a[n-1-i];
	for(int i=0;i<n;i++){
		if(first)first=0;else cout<<" ";
		cout<<a[i];
	}
}
