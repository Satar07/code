#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int r,m,y;
	cin>>r>>m>>y;
	double res = m;
	for (int i=0;i<y;i++){
		res *= (double)r/100+1;
	}
	cout<<int(res);
}
