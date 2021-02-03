#include<iostream>
using namespace std;

int main(){
	int a,b,res;
	res = 0;
	cin>>a>>b;
	while (a <= b){
		if (a % 2 ==1)res += a;
		a++;
	}
	cout<<res;
}
