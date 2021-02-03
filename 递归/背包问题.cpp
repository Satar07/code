#include<iostream>
using namespace std;
int n,h[10086],a[10000];
bool find(int num,int aim){
	if(h[num]==aim){
		a[num]=1;
		return true;
	}
	if(num==1) return false;
	if(find(num-1,aim-h[num])){
		a[num]=1;
	}
	else if(find(num-1,aim)){
		a[num]=0;
	}
}


int main(){
	int goal;
	cin>>n>>goal;
	for(int i=1;i<=n;i++)
		cin>>h[i];
	if(find(n,goal)){
		for(int i=1;i<=n;i++)
			if(a[i]==1) cout<<"number:"<<i<<" weight:"<<h[i]<<endl;
	}
	else cout<<"not found";
}

