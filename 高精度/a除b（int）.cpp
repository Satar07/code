#include<iostream>
using namespace std;
int main(){
	int a[100]={0,1};
	int n,len=1;
	cin>>n;
	if(n==0){
		cout<<0;
		return 0;
	}
	for(int i=2;i<=n;i++){
		int j=0,cc=0;
		a[1]+=i;
		int jinwei=0;
		do{
			j++,cc++;
			a[j]+=jinwei;
			jinwei=a[j]/10;
			a[j]%=10;
		}while(jinwei!=0);
		len=len<cc?cc:len;
	}
	for(int i=len;i>=1;i--)cout<<a[i];
}
