#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

char word[200];
int lib[40];

bool fact(int n){
	if(n==0 or n==1)return false;
	for(int i=2;i<=floor(sqrt(n));i++){
		if(n%i==0)return false;
	}
	return true;
}

int main(){
	cin>>word;
	for(int i=0;i<strlen(word);i++){
		lib[word[i]-'a'+1]++;
	}
	int max=0,min=1000000;
	int maxal,minal;
	for(int i=1;i<=36;i++){
		if(max<lib[i]){
			max=lib[i];
			maxal=i;
		}
		if(lib[i]!=0 and min>lib[i]){
			min=lib[i];
			minal=i;
		}
	}
	int cha=lib[maxal]-lib[minal];
	if(fact(cha)){
		cout<<"Lucky Word\n"<<cha;
	}
	else cout<<"No Answer\n0";
}
