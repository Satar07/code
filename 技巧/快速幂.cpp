#include<iostream>
#include<climits>
#include<cstdlib>
#include<cmath>
using namespace std;

int qpow(int a,int b,int k){
	int base=a,ans=1;
	while(b>0){
		if(b&1){
			ans*=base;
			ans%=k;
		}
		base*=base;
		base%=k;
		b>>=1;
		
	}
	return ans;
}

int main(){
	int a,b,k;
	cout<<"这是一个快速计算出幂的程序"<<endl;
	cout<<"请输入一个底数(小于"<<sqrt(sqrt(INT_MAX))<<")：";
	cin>>a;
	cout<<"请输入一个指数(同上)：";
	cin>>b;
	cout<<"请输入答案想除的数：(小于"<<sqrt(INT_MAX)<<")：";
	cin>>k;
	cout<<"答案是： "<<qpow(a,b,k)<<endl;
	system("pause");
}
