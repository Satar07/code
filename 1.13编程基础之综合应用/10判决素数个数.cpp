#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

bool fact(int n){
	if(n==0 or n==1)return false;
	for(int i=2;i<=floor(sqrt(n));i++){
		if(n%i==0)return false;
	}
	return true;
}

int main(){
	int x,y,cc=0;
	cin>>x>>y;
	if(x>y)swap(x,y);
	for(int i=x;i<=y;i++){
		if(fact(i))cc++;
	}
	cout<<cc;
}
