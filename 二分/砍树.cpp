#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
using namespace std;

inline int in(){
	int num=0;
	char c;
	while((c=getchar())==' ' or c=='\r' or c=='\n');
	num=c-'0';
	while(isdigit(c=getchar()))num=num*10+c-'0';
	return num; 
}

int comp(const void *p1,const void *p2){
	return *(int*)p1-*(int*)p2;
}

long long a[1000010];

int main(){
	//freopen("P1873_2.in","r",stdin);
	long long n=in(),m=in(),l=0,r=-1,mid=0,cc=0;
	for(int i=0;i<n;i++)
		a[i]=in(),r=a[i]>r?a[i]:r;
	while(l<r){
		cc=0;
		mid=l+(r-l)/2;
		for(int i=0;i<n;i++)
			cc+=a[i]-mid>0?a[i]-mid:0;
		if(cc==m){
			cout<<mid;        //???????????????????
			return 0;
		}
		if(cc<m)
			r=mid;
		else
			l=mid+1;
	}
	cout<<l-1;  //??????????
}
