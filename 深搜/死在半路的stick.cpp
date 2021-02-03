#include<iostream>
#include<cstdlib>
using namespace std;

bool ok,xz_1[100],xz_2[100];
int n,a[100],use;


int comp(const void *a,const void *b){
	return *(int*)b-*(int*)a;
}


void dfs_1(int s,int target){
	
}


int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	qsort(a+1,n+1,sizeof(int),comp);
	int i=a[n];
	do{
		dfs();
		i++;
	}while(!ok)
	cout<<i-1;
}
