#include<iostream>
using namespace std;

int a[500]={0,1},tt=1,len=1;

void cheng(int n){
	int jinwei=0;
	for(int i=1;i<=len;i++){
		a[i]=a[i]*n+jinwei;
		jinwei=a[i]/10;
		a[i]%=10;
	}
	while(jinwei!=0){
		len++;
		a[len]=jinwei%10;
		jinwei/=10;
	}
}

void jia(int n){
	a[1]+=1;
}

void core(int n){
	if(n==0)return;
	cheng(n);
	if(n!=1)jia(1);
	core(n-1);
}

void out(){
	for(int i=len;i>=1;i--){
		cout<<a[i];
	}
}

int main(){
	int n;
	cin>>n;
	core(n);
	out();
}
