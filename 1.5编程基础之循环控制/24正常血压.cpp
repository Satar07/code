#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,cc=0,res = 0;
	cin>>n;
	for (int i = 0;i<n;i++){
		int a,b;
		cin>>a>>b;
		if(a>=90 and a<=140 and b>=60 and b<=90)cc++;
		else cc=0;
		res = max(res,cc);
	}
	cout<<res;
}
