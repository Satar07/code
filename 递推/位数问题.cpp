#include<iostream>
using namespace std;
int a[1000][2];
int main(){
	int n,x;
	cin>>n;
	a[1][0]=9,a[1][1]=1;
	for(int i=2;i<=n;i++){
		x=i==n?8:9;
		a[i][0]=(a[i-1][1]+a[i-1][0]*x)%12345;
		a[i][1]=(a[i-1][1]*x+a[i-1][0])%12345;
	}
	cout<<a[n][0];
	return 0;
}
