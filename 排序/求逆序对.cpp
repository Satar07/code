#include<iostream>
using namespace std;
int a[100001],t[100001];
long long res;

void msort(int n,int m){
	if(n==m)return ;
	int l=n,r=m,mid=(n+m)/2;
	msort(l,mid);
	msort(mid+1,r);
	int i=l,j=mid+1,k=l;
	while(i<=mid and j<=r){
		if(a[i]<=a[j]){
			t[k]=a[i];
			i++,k++;
		}
		else{
			t[k]=a[j];
			j++,k++;
			res+=mid-i+1;
		}
	}
	while(i<=mid){
		t[k]=a[i];
		i++,k++;
	}
	while(j<=r){
		t[k]=a[j];
		j++,k++;
	}
	for(int i=l;i<=r;i++)a[i]=t[i];
	return;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	msort(1,n);
	cout<<res;
}
