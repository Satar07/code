#include<iostream>
using namespace std;

int lena=1;
int a[10000000]={0,1};

void cheng(int n){
	int jinwei=0;
	for (int i=1;i<=lena;i++){  //高精度乘法，a数组作为存储空间 
		a[i]=a[i]*n+jinwei;
		jinwei=a[i]/10;
		a[i]=a[i]%10;
	}
	while(jinwei>0){            //处理末位进位 
		lena++;
		a[lena]=jinwei%10;
		jinwei=jinwei/10;
	}
}

void out(){
	int fir=0;
	for(int i=lena;i>=1;i--){
		cout<<a[i];
	}
}


void core(int n){
	if(n==0)return;         //递归终止条件 
	core(n-1);              //先从1开始乘 （这一行和后面一行可以调换位置） 
	cheng(n);
}

int main(){
	int n;
	cin>>n;
	core(n);
	cout<<n<<"!=";
	out();
}
