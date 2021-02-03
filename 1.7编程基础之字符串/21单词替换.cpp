#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

char s[1000],goal[101],word[101],temp[500],res[1000];

/*int charlen(const char* str){
	char* s=str;
	int len=0;
	while(true){
		if(*s==0)return 0;
		else len++;
		s++;
	}
}*/

bool compare(char a[],char b[]){
	int len1=strlen(a),len2=strlen(b);
	if(len1!=len2)return false;
	for(int i=0;i<len1;i++){
		if(a[i]!=b[i])return false;
	}
	return true;
}

int main(){
	cin.getline(s,1000);
	cin>>goal>>word;
	int cc=0,i=0;
	while(s[cc]!=0){
		if(s[cc]!=' '){
			temp[i]=s[cc];
		}
		else if(s[cc]==' '){
			if(compare(temp,goal))cout<<word;
			else cout<<temp;
			i=-1;
			memset(temp,0,sizeof(temp));
			cout<<' ';
		}
		i++,cc++;
	}
	if(compare(temp,goal))cout<<word;
	else cout<<temp;
}
