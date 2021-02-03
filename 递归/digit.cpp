#include<iostream>
using namespace std;


int digit(int n,int cc){
	if(cc==1 or n==0)return n%10;
	else return digit(n/10,cc-1);
}

int main(){
	int n,dig;
	cin>>n>>dig;
	cout<<digit(n,dig);
}
