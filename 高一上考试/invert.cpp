#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

long long a[500001],res,b[500001];


void work(int left,int right){
	int mid=(left+right)/2;
	if(left==right){
		return;
	}
	else{
		work(left,mid);
		work(mid+1,right);
	}
	int i=left,j=mid+1,p=left;
	while(i<mid+1 and j<=right){
		if(a[i]<=a[j]){
			b[p]=a[i];
			i++,p++;
		}
		else{
			b[p]=a[j];
			res+=j-p;
			j++,p++;
		}
	}
	while(i<mid+1){
		b[p]=a[i];
		p++,i++;
	}
	while(j<=right){
		b[p]=a[j];
		p++,j++;
	}
	for(int i=left;i<=right;i++){
		a[i]=b[i];
	}
}


int main(){
	//freopen("invert.in","r",stdin);
	//freopen("invert.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	work(1,n);
	cout<<res;
}
