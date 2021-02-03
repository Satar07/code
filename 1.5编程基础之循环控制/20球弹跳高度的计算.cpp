#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double in,sum;

	cin>>in;
	for(int i=1;i<=10;i++){
		sum+=in;
		in/=2;
		sum+=in;
	}
	cout<<sum<<endl<<in;
}
