#include<iostream>

#define X x+fx[i]
#define Y y+fy[i]

using namespace std;
int a[100][100],res,n;
int fx[8]={0,1,1,1,0,-1,-1,-1},
	fy[8]={-1,-1,0,1,1,1,0,-1};//À≥ ±’Î
bool b[100][100]={{0},{0,1}};


void dfs(int x,int y){
	if(x==n and y==1){
		res++;
	}
	else {
		for(int i=0;i<=7;i++){
			if(b[Y][X]==0 and a[Y][X]==1){
				b[Y][X]=1;
				dfs(X,Y);
				b[Y][X]=0;
			}
		}
	}
}


int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			a[i][j]=!bool(a[i][j]);
		}
	dfs(1,1);
	cout<<res;
}
