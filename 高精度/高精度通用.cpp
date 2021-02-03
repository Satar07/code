#include<iostream>
#include<cstring>
using namespace std;

int a[100],b[100],c[100];
int lena,lenb,lenc;
bool aBig;

void input(int a[],int &lena){
	char ca[100];
	memset(a,0,sizeof(a));
	cin>>ca;
	lena=strlen(ca);
	for(int i=0;i<=lena-1;i++)a[lena-i]=ca[i]-48;  //从a[1]开始存储	
}

bool check(){
	if(lena<lenb)return true;
	if(lena==lenb){
		for(int i=lena;i>=1;i--){
			if(a[i]<b[i])return true;
		}
	}
	return false;
}

//高精度加法
void _plus(int a[],int b[]){
	int jinwei=0,lenc=1;
	while(lenc<=lena or lenc<=lenb){
		c[lenc]=a[lenc]+b[lenc]+jinwei;
		jinwei=c[lenc]/10;
		c[lenc]%=10;
		lenc++;
	}
	c[lenc]=jinwei;
	if(jinwei==0)lenc--;  //处理最高进位 
}

void _minus(int x[],int y[]){
	lenc=1;
	int *a=x,*b=y;  //可能会调换，用指针会更快 
	if(check()){
		swap(a,b);
		c[0]=-1;  //结果为负数 
	}
	while(lenc<=lena or lenc<=lenb){
		if(a[lenc]<b[lenc]){
			a[lenc]+=10;
			a[lenc+1]--;
		}
		c[lenc]=a[lenc]-b[lenc];
		lenc++;
	}
	while(c[lenc]==0 and lenc>1)lenc--;	
}

void _multi(int a[],int b[]){
	lenc=1;
	int jinwei=0;
	for(int i=1;i<=lena;i++){
		jinwei=0;
		for(int j=1;j<=lenb;j++){
			c[i+j-1]+=a[i]*b[i]+jinwei;
			jinwei=c[i+j-1]/10;
			c[i+j-1]%=10;
		}
		c[i+lenb]+=jinwei;
	}
	
}

void _divide(int a[],int b){
	lenc=lena;
	int jiewei=0;
	for(int i=lena+1;i>=1;i--){
		c[i]=(jiewei*10+a[i])/b;
		jiewei=(jiewei*10+a[i])%10;
	}
	while(c[lenc]==0 and lenc>=0){
		lenc--;
	}
}

void writeout(int c[]){
	if(c[0]==-1)cout<<'-';  //检测负数 
	for(int i=lenc;i>=1;i--) cout<<c[i];
}


int main(){
	input(a,lena);
	input(b,lenb);
	_multi(a,b);
	writeout(c);
}
