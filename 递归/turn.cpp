#include<iostream>
using namespace std;

char num[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int res,tt;

void turn(int n){
	if(n==0)return;
	turn(n/tt);
	cout<<num[n%tt];	
}

int main(){
	int n;
	cin>>n>>tt;
	turn(n);
}
