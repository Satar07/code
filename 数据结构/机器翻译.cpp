#include<bits/stdc++.h>
using namespace std;
int lib[1005];
int main(){
	queue<int> a;
	int m,n,temp,res=0;
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		cin>>temp;
		if(lib[temp])
			continue;
		if(a.size()==m){
			lib[a.front()]=0;
			a.pop();
		}
		lib[temp]=1;
		a.push(temp);
		res++;
	}
	cout<<res;
}
