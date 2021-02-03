#include<iostream>
using namespace std;

char ptn[9];

int main(){
	int n,cc=0;
	cin>>n;
	double f1,f2;
	for(int i=0;i<n;i++){
		cin>>ptn>>f1>>f2;
		if(f1>=37.5 and f2==1){
			cc++;
			cout<<ptn<<endl;
		}
	}
	cout<<cc;
	
}
