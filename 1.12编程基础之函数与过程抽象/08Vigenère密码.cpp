#include<iostream>
#include<cstring>
#include<string>
#include<math.h>
using namespace std;
char changeCToM(char a,char key){//由明文到密文的规则反推的，密文到明文的变换规则
	if(key>='A'&&key<='Z')//密钥都调成小写好处理
	key+=32;
	
	char b;
	if(a>='a'&&a<='z'){
		b=a-(key-'a');
		if(b<'a')
		b='z'-('a'-b)+1;
		
		return b;
	}else if(a>='A'&&a<='Z'){
		b=a-(key-'a');
		if(b<'A')
		b='Z'-('A'-b)+1;
		
		return b;	
	}else
	return a;
}

int main(){
	char key[105];
	char str[1005];
	char ans[1005];
	
	gets(key);
	gets(str);
	
	for(int i=0,j=0;i<strlen(str);i++){
			ans[i]=changeCToM(str[i],key[j]);
			j=(j+1)%strlen(key);//密钥循环出现
			cout<<ans[i];
	}
	
	return 0;
}
