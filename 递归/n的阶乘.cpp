#include<iostream>
using namespace std;

int lena=1;
int a[10000000]={0,1};

void cheng(int n){
	int jinwei=0;
	for (int i=1;i<=lena;i++){  //�߾��ȳ˷���a������Ϊ�洢�ռ� 
		a[i]=a[i]*n+jinwei;
		jinwei=a[i]/10;
		a[i]=a[i]%10;
	}
	while(jinwei>0){            //����ĩλ��λ 
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
	if(n==0)return;         //�ݹ���ֹ���� 
	core(n-1);              //�ȴ�1��ʼ�� ����һ�кͺ���һ�п��Ե���λ�ã� 
	cheng(n);
}

int main(){
	int n;
	cin>>n;
	core(n);
	cout<<n<<"!=";
	out();
}
