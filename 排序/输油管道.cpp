#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int a[10001];

int comp(const void *p1,const void *p2){
	return *(int*)p1-*(int*)p2;
}

int main(){
	int n,waste;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>waste>>a[i];
	}
	qsort(a,n,sizeof(int),comp);
	int res=0;
	for(int i=0;i<n;i++){
		res+=abs(a[n/2]-a[i]);
	}
	cout<<res;
}
