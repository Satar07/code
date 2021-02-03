#include<iostream>
using namespace std;

int a[101];
int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)cin>>a[i];
	int m,cc=0;
	cin>>m;
	for(int i=1;i<=n;i++){
		if(a[i]==m)cc++;
	}
	cout<<cc;
}
