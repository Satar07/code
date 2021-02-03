#include<iostream>
#include<cmath>
using namespace std;

bool g(int n){
	for(int i=2;i<=ceil(sqrt(n));i++){
		if(n%i==0)return false;
	}
	return true;
}

int main(){
	int n;
	cin>>n;
	int fir=0;
	for(int i=3;i<=n-2;i+=2){
		if(g(i) and g(i+2)){
			cout<<i<<' '<<i+2<<endl;
			fir=1;
		}
	}
	if(fir==0)cout<<"empty";
}
