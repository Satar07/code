#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int cc = 0;
	for (int i=0;i<n;i++){
		int in;
		cin>>in;
		if (in == m)cc++;
	}
	cout<<cc;
}
