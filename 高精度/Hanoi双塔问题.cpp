#include<iostream>
using namespace std;
int a[10000]={1,1};

void cheng(){
	long long jinwei=0;
	for(int i=1;i<=a[0];i++){
		a[i]*=2;
	}
	int i=1;
	
	for(int i=1;i<=a[0]+1;i++){
		a[i]+=jinwei;
		jinwei=a[i]/10;
		a[i]%=10;
	}
	if(a[a[0]+1]!=0)a[0]++;
}


//  2^(n+1)-2 
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n+1;i++){
		cheng();
	}
	a[1]-=2;
	for(int i=a[0];i>=1;i--)
		cout<<a[i];
}
