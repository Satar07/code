#include<iostream>
using namespace std;

int main(){
	int n,in,max = 0;
	int min = 10000;
	cin>>n;
	for (int i = 0;i < n;i++){
		cin>>in;
		if(max<in)max = in;
		if(min>in)min = in;
	}
	cout<<max-min;
}
