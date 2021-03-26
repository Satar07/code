#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

int main(){
	queue<int> a;
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)a.push(i);
	while(n--){
		for(int i=1;i<k;i++){
			a.push(a.front());
			a.pop();
		}
		printf("%d ",a.front());
		a.pop();
	}
	return 0;
}
