#include<iostream>
using namespace std;

int a[300][300],m[300],n[300],x=1,y=1,cc1,cc2,n1;

int main(){
	cin>>n1;
	for(int i=1;i<=n1;i++) for(int j=1;j<=n1;j++)
		cin>>a[i][j];
	for(int i=1;i<=n1;i++) for(int j=1;j<=n1;j++){
		m[i]+=a[i][j];
		n[j]+=a[i][j];
	}
	if(n1==1){
		if(a[1][1]==0) {
			cout<<"OK";
			return 0;
		}
		else{
			cout<<1<<' '<<1;
			return 0;
		}
	}
	for(int i=1;i<=n1;i++){
    	if (m[i]%2==1){
			if (cc1==0){
				cc1++;
				x=i;
			}
			else{
			  	cout<<"Corrupt";
			  	return 0;
			}
		}
    	if (n[i]%2==1){
			if (cc2==0){
				cc2++;
				y=i;
			}
			else{
			  	cout<<"Corrupt";
			  	return 0;
			}
		}
    }
	if(cc1==0 and cc2==0)cout<<"OK";
	else cout<<x<<" "<<y;
}
