#include<iostream>
#include<cstdio>
using namespace std;
int a[3][300],now;

void add(){
	int jinwei=0;
	a[now][0]=max(a[(now+4)%3][0],a[(now+5)%3][0]);
	for(int i=1;i<=a[now][0];i++){
		a[now][i]=a[(now+4)%3][i]+a[(now+5)%3][i]+jinwei;
		jinwei=a[now][i]/1000000;
		a[now][i]%=1000000;
	}
	if(jinwei!=0){
		a[now][0]++;
		a[now][a[now][0]]=jinwei;
	}
	now=now==2?0:now+1;
}

int main(){
	int x,y;
	cin>>x>>y;
	int n=y-x;
	switch(n){
		case 0:
			cout<<0;
			return 0;
		case 1:
			cout<<1;
			return 0;
		case 2:
			cout<<1;
			return 0;
	}
	a[1][0]=1,a[1][1]=1,a[2][0]=1,a[2][1]=1;
	for(int i=3;i<=n+1;i++){
		add();
	}
	cout<<a[(now+5)%3][a[(now+5)%3][0]];
	for(int i=a[(now+5)%3][0]-1;i>=1;i--)
		printf("%06d",a[(now+5)%3][i]);
}
