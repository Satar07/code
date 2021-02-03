#include<iostream>
using namespace std;

int q[500],first =1,a=0;

int main(){
	string s;
	cin>>s;
	if(s[0]=='-'){
		cout<<"-";
		a=1;
	}
	for (int i=s.length()-1;i>=a;i--){
		
		if (s[i]=='0' and first)continue;
		else first =0;
		cout<<s[i]-'0';
	}
}
