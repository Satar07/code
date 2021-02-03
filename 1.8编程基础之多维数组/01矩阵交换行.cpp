#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int a[6][6],n,m,temp;
int main(){
	for(int i=1;i<=5;i++)
	for(int j=1;j<=5;j++)
		cin>>a[i][j];
	cin>>m>>n;
	for(int i=1;i<=5;i++){
		temp=a[m][i];
		a[m][i]=a[n][i];
		a[n][i]=temp;
	}
	for(int i=1;i<=5;i++){
		int first =1;
		for(int j=1;j<=5;j++){
			if (first){
				cout<<a[i][j];
				first =0;
			}
			else cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
}
