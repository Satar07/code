#include<iostream>
#include<cstring>
using namespace std;
int jinzhi;
int a[200],b[200];


void in(int a[]){
	string s;
	cin>>s;
	a[0]=s.length();
	for(int i=1;i<=a[0];i++){
		if(s[a[0]-i]>='0' and s[a[0]-i]<='9')
			a[i]=s[a[0]-i]-'0';
		else a[i]=s[a[0]-i]-'A'+10;
	}
}

bool check(int a[]){
	for(int i=1;i<=a[0];i++)
		if(a[i]!=a[a[0]-i+1])return false;
	return true;
}

void jia(int a[]){
	memset(b,0,sizeof(b));
	for(int i=1;i<=a[0];i++)
		b[a[0]-i+1]=a[i];
	for(int i=1;i<=a[0];i++)
		a[i]+=b[i];
	for(int i=1;i<=a[0];i++){
		a[i+1]+=a[i]/jinzhi;
		a[i]%=jinzhi;
	}
	if(a[a[0]+1]!=0)a[0]++;
}

int main(){
	cin>>jinzhi;
	in(a);
	if(check(a)){
		cout<<"STEP=0";
		return 0;
	}
	int cc=0;
	while((!check(a)) and cc<=30){
		jia(a);
		cc++;
	}
	if(cc<=30)cout<<"STEP="<<cc;
	else cout<<"Impossible";
}
