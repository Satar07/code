#include<iostream>
#include<cmath>
using namespace std;

bool check(int in){
	int a = in%10;
	int b = in/10%10;
	int c = in/100%10;
	int d = in/1000;
	if (a-d-c-b>0)return true;
	return false;
}

int main(){
	int n,cc=0;
	cin>>n;
	for (int i = 0;i<n;i++){
		int a;
		cin>>a;
		if(check(a))cc++;
	}
	cout<<cc;
}
