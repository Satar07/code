#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,m,cc=0;
	cin>>m>>n;
	for(int i=0;i<n;i++){
		int ge;
		cin>>ge;
		if (m>=ge)m-=ge;
		else cc++;
	}
	cout<<cc;
}
