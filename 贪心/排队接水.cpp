#include<bits/stdc++.h>
using namespace std;
const int hash=1001;
long long a[1001];
double sum;
long int n;
double ans;

inline int in(){
	int num=0;
	char c;
	bool flag=false;
	while((c=getchar())==' ' or c=='\n' or c=='\r');
	if(c=='-')flag=true;
	else num=c-'0';
	while(isdigit(c=getchar())) num=num*10+c-'0';
	return num;
}

int main(){
	//freopen("P1223_3.in","r",stdin);
	n=in();
	for(int i=1;i<=n;i++){
		a[i]=i+in()*hash;
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		cout<<a[i]%hash<<' ';
		sum+=(a[i]/hash)*(n-i);
	}
	cout<<endl;
	ans=sum/n;
	printf("%.2f",ans);
	
}
