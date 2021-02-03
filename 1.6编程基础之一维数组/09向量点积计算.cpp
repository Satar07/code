#include<iostream>
using namespace std;

int n,a[2000],b[2000],res;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	for(int i=1;i<=n;i++){
		res+=a[i]*b[i];
	}
	cout<<res;
}
