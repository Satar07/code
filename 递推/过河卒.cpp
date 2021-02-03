#include<iostream>
#include<cmath>
using namespace std;

struct node{
	int data[10];
};
node f[21][21];
int g[21][21];


void add(int a[],int to[]){
	int len=max(a[0],to[0]);
	int jinwei=0;
	for(int i=1;i<=len;i++){
		to[i]+=a[i]+jinwei;
		jinwei=to[i]/10;
		to[i]/=10;
	}
	to[0]=len;
	if(jinwei!=0){
		to[0]++;
		to[to[0]]=jinwei;
	}
}

void writeout(int f[]){
	for(int i=f[0];i>=1;i--)
		cout<<f[i];
}

int main(){
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	int in_x[9]={-1,1,-2,2,0,-2,2,-1,1},
		in_y[9]={-2,-2,-1,-1,0,1,1,2,2};
	for(int i=1;i<=9;i++){
		if(in_x[i]+x>=1 and in_x[i]+x<=a and in_y[i]+y>=0 and in_y[i]<=b)
			g[in_x[i]+x][in_y[i]+y]=1;
	}
	f[1][1].data[1]=1;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(g[i][j]==0){
				if(i!=1)add(f[i-1][j].data,f[i][j].data);
				if(j!=1)add(f[i][j-1].data,f[i][j].data);
			}
		}
	}
	writeout(f[a][b].data);
}



