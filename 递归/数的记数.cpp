#include<iostream>
using namespace std;

int h[10001];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		h[i]+=1;
		for(int j=1;j<=i/2;j++)
			h[i]+=h[j];
	}
	cout<<h[n];
}
