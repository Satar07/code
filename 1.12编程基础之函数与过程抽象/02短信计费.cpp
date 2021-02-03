#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double n,now,res=0;
	cin>>n;
    for(int i=0;i<n;i++){
    	cin>>now;
    	if(now<=70)res+=0.1;
    	else res+=ceil(now/70)*0.1;
	}
	cout<<res;
}
