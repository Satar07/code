#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

bool fact(int n){
	if(n==0 or n==1)return false;
	for(int i=2;i<=floor(sqrt(n));i++){
		if(n%i==0)return false;
	}
	return true;
}

bool huiwen(int temp){
	int len=0;
	int num[30];
	memset(num,0,sizeof(num));
	while(temp/10!=0){
		num[len]=temp%10;
		temp/=10;
		len++;
	}
	num[len]=temp,len++;
	for(int i=0;i<len/2;i++)
		if(num[i]!=num[len-1-i])return false;
	return true;
}

int main(){
	int n,cc=0;
	cin>>n;
	for(int i=11;i<=n;i++)
		if(fact(i) and huiwen(i))cc++;
	cout<<cc;
}
