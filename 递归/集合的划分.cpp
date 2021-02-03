#include<iostream>
using namespace std;

unsigned long long s(unsigned long long n,unsigned long long k){
	if(n<k or k==0)return 0;
	if(n==k or k==1)return 1;
	return s(n-1,k-1)+k*s(n-1,k);
}

int main(){
	int n,k;
	cin>>n>>k;
	cout<<s(n,k);
}
