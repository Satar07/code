#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int A=0,B=0,x,y,n;
	for(int i=1;i<=1000;i++){
		x=0,y=0,n=i;
		for(;n>0;n/=2){
			if(n%2)x++;
			else y++;
		}
		if(x>y)A++;
		else B++;
	}
	cout<<A<<" "<<B;
} 
