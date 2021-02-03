#include<iostream>
using namespace std;
int a[10001],lib[10001];

void qsort(int left ,int right){
	if(left>right) return;   //只有一个数或者没有时停止二分 
	
	int i,j,t,temp;
	temp=a[left];  ////temp中存的就是基准数  
	i=left;
	j=right;
	
	while(i!=j){
		while(a[j]>=temp and i<j)  //顺序很重要，要先从右边开始找 
			j--;
		while(a[i]<=temp and i<j)
			i++;
		if(i<j){
			swap(a[i],a[j]);  //交换来让以temp为界限左边是比他小的数，右边是比他大的数 
		}
	}
	
	a[left]=a[i];  //最终将基准数归位
	a[i]=temp;
	
	
	qsort(left,i-1);   //temp左边的数 
	qsort(i+1,right);  //temp右边的数 
}

int main(){
	int n,m,temp,cc=0;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>temp;
		if(lib[temp]==0){
			lib[temp]=1;
			cc++;
			a[cc]=temp;
		}
	}
	
	if(m>cc){
		cout<<"NO RESULT";
		return 0;
	}
	
	qsort(1,cc);
	
	cout<<a[m];
}
