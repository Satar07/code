#include<iostream>
using namespace std;

int main(){
	int n,a,b,c,in,A,B,C;
	A=B=C=0;
	cin>>n;
	for (int i = 0;i < n; i++){
	cin>>a>>b>>c;
	A +=a;
	B +=b;
	C +=c;
	}
	cout<<A<<" "<<B<<" "<<C<<" "<<A+B+C;
}
