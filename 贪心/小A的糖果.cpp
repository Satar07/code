#include<iostream>
#include<cstdio>
#include<cstdlib>
inline int in(){
	int num=0;
	char c;
	bool flag=false;
	while((c=getchar())==' ' or c=='\n' or c=='\r');
	if(c=='-')flag=true;
	else num=c-'0';
	while (isdigit(c=getchar()))num=num*10+c-'0';
	return (flag?-1:1)*num;
}
int main(){
	long long x1=0,x2=0,n=in(),aim=in(),ans=0;
	register int i;
	for(i=1;i<=n;i++){
		x2=x1;
		x1=in();
		if(i==1){
			if(x1>aim){
				ans+=x1-aim;
				x1=aim;
			}
			continue;
		}
		if(x1+x2>aim){
			ans+=x1+x2-aim;
			x1=x1-(x1+x2-aim)>0?x1-(x1+x2-aim):0;
		}
	}
	std::cout<<ans;
}
