#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	double x,a,b;
	cin>>a>>b;
	x = b/a;
	for (int i =0;i<n-1;i++){
		cin>>a>>b;
		double y = b/a;
		if (y-x>0.05)cout<<"better"<<endl;
		else if(x-y >0.05)cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	
}
