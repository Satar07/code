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
	cout<<"����һ�����ټ�����ݵĳ���"<<endl;
	cout<<"������һ������(С��"<<sqrt(sqrt(INT_MAX))<<")��";
	cin>>a;
	cout<<"������һ��ָ��(ͬ��)��";
	cin>>b;
	cout<<"����������������(С��"<<sqrt(INT_MAX)<<")��";
	cin>>k;
	cout<<"���ǣ� "<<qpow(a,b,k)<<endl;
	system("pause");
}
