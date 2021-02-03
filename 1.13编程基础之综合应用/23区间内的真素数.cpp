#include<iostream>
#include<cmath>
using namespace std;

bool sushu(int n){
	if(n<=1)return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
}

int fanxu(int n){
	int temp=n,res=0,i=1,weishu=0;
	while(temp!=0)weishu++,temp/=10;
	temp=n;
	while(temp!=0){
		res+=(temp%10)*(pow(10,weishu-1));
		temp/=10;
		weishu--; 
	}
	return res;
}

int main(){
	int n,m,fir=0;
	cin>>n>>m;
	if(n>m)swap(n,m);
	for(int i=n;i<=m;i++){
		if(sushu(i) and sushu(fanxu(i))){
			if(fir)cout<<',';
			else fir=1;
			cout<<i;
		}
	}
	if(!fir)cout<<"No";
} 
