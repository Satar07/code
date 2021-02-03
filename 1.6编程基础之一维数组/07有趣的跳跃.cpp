#include<iostream>
#include<cmath>
using namespace std;

long long q[5000],check[5000];
int main(){
	int n,cc=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>q[i];
	if(n==1){
		cout<<"Jolly";
		return 0;
	}
	for(int i=1;i<=n-1;i++){
		int temp=abs(q[i]-q[i+1]);
		check[temp]=1;
	}
	for(int i=1;i<=n-1;i++){
		if(check[i]==0){
			cout<<"Not jolly";
			return 0;
		}
	}
	cout<<"Jolly";
}
