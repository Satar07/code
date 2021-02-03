#include<iostream>
using namespace std;

unsigned long long f[21][21];
int g[21][21];

int main(){
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	int in_x[9]={-2,-2,-1,-1,0,1,1,2,2},
		in_y[9]={-1,1,-2,2,0,-2,2,-1,1};
	for(int i=0;i<9;i++){
		if(in_x[i]+x>=0 and in_x[i]+x<=a and in_y[i]+y>=0 and in_y[i]+y<=b)
			g[in_x[i]+x][in_y[i]+y]=1;
	}
	f[0][0]=1;
	for(int i=0;i<=a;i++){
		for(int j=0;j<=b;j++){
			if(g[i][j]==0){
				if(i>0) f[i][j]+=f[i-1][j];
				if(j>0) f[i][j]+=f[i][j-1];
			}
		}
	}
	cout<<f[a][b];
}
