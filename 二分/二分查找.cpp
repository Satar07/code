#include<iostream>
using namespace std;
int a[10086],aim;

void find(int left,int right){
	int mid;
	if(left<=right){
		mid=(left+right)/2;
		if(a[mid]==aim){
			while(mid>=1 and a[mid-1]==a[mid])
				mid--;
			cout<<mid;
		}
		else
			if(a[mid]>aim) find(left,mid-1);
			else find(mid+1,right);
	}
	else cout<<-1;
}


int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>aim;
	find(1,n);
}
