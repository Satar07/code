#include<iostream>
using namespace std;

int a[200][200];
int n;

void in(){
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
}

void core(){
	for(int i=1;i<=n;i++){
		a[i][0]=a[i][1];
		for(int j=1;j<=n;j++){
			if(a[i][0]>a[i][j])a[i][0]=a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]-=a[i][0];
		}
	}
	for(int j=1;j<=n;j++){
		a[0][j]=a[1][j];
		for(int i=1;i<=n;i++){
			if(a[0][j]>a[i][j])a[0][j]=a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]-=a[0][j];
		}
	}
	if(n==2)cout<<a[2][2];
	for(int i=2;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=a[i+1][j];
		}
	}
	for(int j=2;j<=n;j++){
		for(int i=1;i<=n;i++){
			a[i][j]=a[i][j+1];
		}
	}
	n-=1;
}

int main(){
	in();
	int n1=n;
	for(int i=1;i<=n1-1;i++){
		cout<<a[2][2]<<endl;
		core();
	}
} 
