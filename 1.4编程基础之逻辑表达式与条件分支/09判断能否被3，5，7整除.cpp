#include <iostream>
using namespace std;

int main(){
	int a,cc;
	cc = 0;
	cin>>a;
	if (a==0){
		cout<<"3 5 7";
		return 0;
	}
	if (a%3==0){
		cout<<"3";
		cc = 1;
	}
	if (a%5==0){
		if (cc == 1)cout<<" ";
		cout<<"5";
		cc = 1;
	}
	if (a%7== 0){
		if (cc ==1)cout<<" ";
		cout<<"7";
		cc = 1;
	}
	if (cc !=1)cout<<"n";
	return 0;
}
