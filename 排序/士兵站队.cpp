#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int x[10001],y[10001];

int comp(const void *p1,const void *p2){
	return *(int*)p1-*(int*)p2;
}

int main(){
	int n,res=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i];
		
	qsort(x,n,sizeof(int),comp);
	
	for(int i=0;i<n;i++)
		x[i]-=i;
	
	qsort(x,n,sizeof(int),comp);
	qsort(y,n,sizeof(int),comp);
	
	for(int i=0;i<n;i++)
		res+=abs(x[i]-x[n/2])+abs(y[i]-y[n/2]);
	cout<<res;
}
