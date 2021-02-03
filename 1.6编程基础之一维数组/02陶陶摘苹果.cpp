#include<iostream>
using namespace std;

const int MAX_A=12;

int a[MAX_A];

int main(){
	for (int i=0;i<10;i++)cin>>a[i];
	int m,cc=0;
	cin>>m;
	for(int i=0;i<10;i++){
		if(a[i]<=m+30)cc++;
	}
	cout<<cc;
}
