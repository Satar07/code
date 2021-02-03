#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	switch(n){
		case 0:
			cout<<0;
			return 0;
		case 1:
			cout<<1;
			return 0;
		case 2:
			cout<<2;
			return 0;
		case 3:
			cout<<4;
			return 0;
	}
	unsigned long long f=0,f1=4,f2=2,f3=1;
	for(int i=4;i<=n;i++){
		f=f1+f2+f3;
		f3=f2;
		f2=f1;
		f1=f;
	}
	cout<<f;
}
