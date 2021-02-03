#include<iostream>
using namespace std;

int a[100],cc,n;


void dp(int s){
	for(int i=1;i<=3;i++){
		if(s<4 or (a[s-3]!=a[s-1] or a[s-2]!=i)){
			a[s]=i;
			if(s==n) cc++;
			else dp(s+1); 
		}
	}
}


int main(){
	cin>>n;
	dp(1);
	cout<<cc;
}
