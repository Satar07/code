#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int a[20][20],b[20][20];
int n;


int main(){
	cin>>a[5][5]>>n;
	for(int p=1;p<=n;p++){
		for(int i=1;i<=9;i++)for(int j=1;j<=9;j++){
			if(a[i][j]!=0){
				b[i][j]+=2*a[i][j];
				b[i+1][j]+=a[i][j];
				b[i-1][j]+=a[i][j];
				b[i][j+1]+=a[i][j];
				b[i][j-1]+=a[i][j];
				b[i+1][j+1]+=a[i][j];
				b[i+1][j-1]+=a[i][j];
				b[i-1][j+1]+=a[i][j];
				b[i-1][j-1]+=a[i][j];
			}
		}
		memcpy(a,b,sizeof(b));
		memset(b,0,sizeof(b));
	}
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++)cout<<a[i][j]<<" ";
		cout<<endl;
	}
} 
