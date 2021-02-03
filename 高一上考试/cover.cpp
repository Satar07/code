#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool a[700][700];

bool check(int x1,int y1,int x2,int y2,int r){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<=r;
}


int main(){
	//freopen("cover.in","r",stdin);
	//freopen("cover.out","w",stdout);
	int n,m,r,res=0;
	cin>>n>>m>>r;
	int x,y;
	
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		for(int j=max(y-r,0);j<=min(y+r,n);j++){
			for(int k=max(x-r,0);k<=min(x+r,n);k++){
				if(check(k,j,x,y,r))a[j][k]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			if(a[i][j])res++;
	}
	cout<<res;
}
