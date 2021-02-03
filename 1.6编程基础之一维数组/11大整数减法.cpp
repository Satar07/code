#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int a[500],b[500],c[500],lena,lenb;

void in(int a[]){                                //传入一个数组
	string s; 
	cin>>s;                                      //读入字符串s 
	a[0]=s.length();                         //用a[0]计算字符串s的位数 
	for(int i=1;i<=a[0];i++)
		a[i]=s[a[0]-i]-'0';                 //将数串s转换为数组a，并倒序存储 
}

void input(){
	in(a);
	in(b);
}

void core(){
	int i=1;
	while (i<=a[0] or i<=b[0]){
		if(a[i]<b[i]){
			c[i]=10+a[i]-b[i];
			--a[i+1];
		}
		else c[i]=a[i]-b[i];
		i++;
	}
}

void writeout(){
	int first =1;
	for (int i= max(a[0],b[0]);i>=1;i--){
		if(c[i]==0 and first ==1)continue;
		else first =0;
		cout<<c[i];
	}
	if (first ==1)cout<<"0";
}

int main(){
	input();
	core();
	writeout();
} 
