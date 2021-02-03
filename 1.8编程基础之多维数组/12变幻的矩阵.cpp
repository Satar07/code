#include<iostream>
#include<cstring>
using namespace std;

char a[200][200],b[200][200];
int n;
bool p[5];


int main(){
	cin>>n;
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++)cin>>a[i][j];
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++)cin>>b[i][j];
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++){
		if(b[i][j]!=a[n-j+1][i])p[1]=true;
		if(b[i][j]!=a[j][n-i+1])p[2]=true;
		if(b[i][j]!=a[n-i+1][n-j+1])p[3]=true;
		if(b[i][j]!=a[i][j])p[4]=true;
	}
	for(int i=1;i<=4;i++)
		if(!p[i]){
			cout<<i;
			return 0;
		}
	cout<<"5";

} 
