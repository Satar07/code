#include<iostream>
using namespace std;


void core(int n){
	if(n==0)return;
	core(n/8);
	cout<<n%8;
}

int main(){
	int n;
	cin>>n;
	core(n);
	if(n==0)cout<<0;
}
