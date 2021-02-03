#include<iostream>
using namespace std;
int a[101];

void qsort(int left ,int right){
	if(left>right) return;   //ֻ��һ��������û��ʱֹͣ���� 
	
	int i,j,t,temp;
	temp=a[left];  ////temp�д�ľ��ǻ�׼��  
	i=left;
	j=right;
	
	while(i!=j){
		while(a[j]>=temp and i<j)  //˳�����Ҫ��Ҫ�ȴ��ұ߿�ʼ�� 
			j--;
		while(a[i]<=temp and i<j)
			i++;
		if(i<j){
			swap(a[i],a[j]);  //����������tempΪ��������Ǳ���С�������ұ��Ǳ�������� 
		}
	}
	
	a[left]=a[i];  //���ս���׼����λ
	a[i]=temp;
	
	
	qsort(left,i-1);   //temp��ߵ��� 
	qsort(i+1,right);  //temp�ұߵ��� 
}

int main(){
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
		cin>>a[i];
	
	qsort(1,n);
	
	for(int i=1;i<=n;i++)
		cout<<a[i]<<' ';
}
