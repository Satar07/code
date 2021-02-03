#include<iostream>
using namespace std;

int main(){
	double cc = 0,sn = 0,k;
	cin>>k;
	do{
		cc++;
		sn += 1/cc;
	}while (sn <= k);
	cout<<cc;
}
