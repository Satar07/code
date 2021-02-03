#include<iostream>
using namespace std;

int akm(int m,int n){
	if(m==0)return n+1;
	else if(m>0 and n==0)return akm(m-1,1);
	else if(m>0 and n>0)return akm(m-1,akm(m,n-1));
} 

int main(){
	for(int i=0;i<=20;i++){
		for(int j=0;j<=5;j++){
			cout<<akm(i,j)<<' ';
		}
		cout<<endl;
	}
}
