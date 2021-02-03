#include<iostream>
using namespace std;

int n,na,nb,a[500],b[500],r1,r2,cc; //cc´óÓÚ0ÔòAÓ® 
int main(){
	cin>>n>>na>>nb;
	for(int i=1;i<=na;i++)cin>>a[i];
	for(int i=1;i<=nb;i++)cin>>b[i];
	for(int i=1;i<=n;i++){
		r1++,r2++;
		if(r1>na)r1=1;
		if(r2>nb)r2=1;
		if(a[r1]==b[r2])continue;
		if(a[r1]==0)cc+= b[r2]==2?1:-1;
		if(a[r1]==2)cc+= b[r2]==5?1:-1;
		if(a[r1]==5)cc+= b[r2]==0?1:-1;
	}
	if(cc>0)cout<<"A";
	else if(cc<0)cout<<"B";
	else cout<<"draw";
}
