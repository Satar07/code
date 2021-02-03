#include<iostream>
using namespace std;

int main(){
	long long n;
	int first =1;
	cin>>n;
	while (n>0){
		if(first)first =0;
		else cout<<" ";
		int res = n%10;
		n = (n - res)/10;
		cout<<res;
	}
}
