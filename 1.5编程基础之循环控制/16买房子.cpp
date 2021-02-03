#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n,k,cc=1;
	cin>>n>>k;
	double have=n,goal=200;
	while(have<goal){
		goal *=(double)k/100 +1;
		have +=n;
		cc++;
		if (cc>20){
			cout<<"Impossible";
			return 0;
		}
	}
	cout<<cc;
}
