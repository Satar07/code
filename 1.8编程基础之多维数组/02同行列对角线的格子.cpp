#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
using namespace std;

/*void thr(int a[][20],int xa,int xb){
	for(int i=1;i<=xa;i++){
		int first =1;
		for(int j=1;j<=xb;j++){
			if (first){
				cout<<a[i][j];
				first =0;
			}
			else cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
}*/

int a[20][20],n,x,y;
int main(){
	cin>>n>>x>>y;
	for(int i=1;i<=n;i++)printf("(%d,%d) ",x,i);
	cout<<endl;
	for(int i=1;i<=n;i++)printf("(%d,%d) ",i,y);
	cout<<endl;
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
		if (i-j==x-y)printf("(%d,%d) ",i,j);
	}
	cout<<endl;
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
		if (i+j==x+y)printf("(%d,%d) ",j,i);
	}
	
}
