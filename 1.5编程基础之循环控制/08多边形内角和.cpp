#include<iostream>
using namespace std;

int main(){
	int n,res=0;
	cin>>n;
	res = (n-2)*180;
	for(int i=0;i<n-1;i++){
		int a;
		cin>>a;
		res -= a;
	}
	cout<<res;
}
