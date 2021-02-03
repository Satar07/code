#include<iostream>
#include<cstdlib>
using namespace std;

int n,c,a[41],res;
bool b[41];

void dp(int s,int m){
	if(s>n){
		cout<<m;
		exit(0);
	}
	if(m>c or res==c)return;
	for(int i=1;i<=n;i++){
		if(b[i]==0){
			b[i]=1;
			if(m+a[i]>c){
				res=res>m?res:m;
			}
			else dp(s+1,m+a[i]);
			b[i]=0;
		}
	}
}



int main(){
	cin>>n>>c;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	dp(1,0);
	cout<<res;
}
