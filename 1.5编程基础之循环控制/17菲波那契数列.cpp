#include<iostream>
using namespace std;

int main(){
	long n,f,fm1,fm2;
	f = fm1 = fm2 =1;
	
	cin>>n;
	for (int i=3;i<=n;i++){
		f = fm1 +fm2;
		fm2 = fm1;
		fm1 = f;
	}
	cout <<f;
	
}
