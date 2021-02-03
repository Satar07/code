#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

char a[15],b[15],c[15];
int turn(char n[],int jinzhi){
	int res=0,cc=0;
	int len = strlen(n);
	for(int i=len-1;i>=0;i--){
		if(n[i]-'0'>=jinzhi)return -1;
		res+=(n[i]-'0')*pow(jinzhi,cc);
		cc++;
	}
	return res;
}

int main(){
	cin>>a>>b>>c;
	for(int i=2;i<=16;i++){
		if(turn(a,i)!=-1 and turn(b,i)!=-1 and
		 turn(c,i)!=-1 and turn(a,i)*turn(b,i)==turn(c,i)){
			cout<<i;
			return 0;
			//return 0;
			//cout<<"----"<<i<<"----"<<endl;
			//cout<<turn(a,i)<<"  "<<turn(b,i)<<"  "<<turn(c,i)<<endl;
			//cout<<turn(a,i)*turn(b,i)<<"  "<<turn(c,i)<<endl;
		}
	}
	cout<<0;
}
