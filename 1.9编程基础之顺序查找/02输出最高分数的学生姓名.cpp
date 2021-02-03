#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;

char b[101][50];
int n,a[101],ma=0,la;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		if(ma<a[i]){
			ma=a[i];
			la=i;
		}
	}
	cout<<b[la];
}
