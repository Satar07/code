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
			cout<<1;
			return 0;
	}
	long long f=0,f1=1,f2=1;
	for(int i=3;i<=n;i++){
		f=f1+f2;
		f2=f1;
		f1=f;
	}
	cout<<f;
}
