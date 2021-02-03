#include<iostream>
using namespace std;

long long core(int n,int f2,int f1){
	int f=0,res=0;
	if(n==1)return f2;
	else if(n==2)return f1+f2;
	res=f1+f2;
	for(int i=3;i<=n;i++){
		f=f1+f2;
		f2=f1,f1=f;
		res+=f;
	}
	return res;
}

int main(){
	int a,n,m,x;
	cin>>a>>n>>m>>x;
	long long f=core(n-3,1,0)+1,g=core(n-3,0,1),h=core(x-2,1,0)+1,l=core(x-2,0,1);
	//cout<<f<<endl<<g<<endl<<h<<endl<<l<<endl;
	if(x==1) cout<<a;
	else if(x==2) cout<<a;
	else if(x==n) cout<<0;
	//res=(m-f*a)/g*l+h*a;
	double res1=double(m-f*a)/g;
	//cout<<res1<<endl;
	if((int)res1==res1)cout<<res1*l+h*a;
	else cout<<"No answer.";
}
